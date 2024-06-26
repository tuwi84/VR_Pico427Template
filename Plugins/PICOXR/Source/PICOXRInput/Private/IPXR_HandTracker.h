// Copyright® 2015-2023 PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2023, Epic Games, Inc. All rights reserved. 

#pragma once
#include "CoreMinimal.h"
#include "PXR_PluginWrapper.h"

enum class EPICOXRHandTrackingConfidence : uint8;
enum class EPICOXRHandFinger : uint8;
enum class EPICOXRHandJoint : uint8;
enum class EPICOXRHandStage : uint8;
enum class EPICOXRActiveInputDevice : uint8;
enum class EPICOXRHandType : uint8;
#define XR_HAND_JOINT_COUNT_MAX 26

/**
 * 
 */
class IPXR_HandTracker:public IModularFeature
{
public:
	virtual ~IPXR_HandTracker() {}
	
    // Flag bits for XrHandTrackingAimFlagsFB
	enum class XrHandTrackingAimFlags:uint64
	{
		/// Whether the data is valid.
		XR_HAND_TRACKING_AIM_COMPUTED_BIT = 0x00000001,
		/// Whether the ray appears.
		XR_HAND_TRACKING_AIM_VALID_BIT = 0x00000002,
		/// Whether the index finger pinches.
		XR_HAND_TRACKING_AIM_INDEX_PINCHING_BIT = 0x00000004,
		/// Whether the middle finger pinches.
		XR_HAND_TRACKING_AIM_MIDDLE_PINCHING_BIT = 0x00000008,
		/// Whether the ring finger pinches.
		XR_HAND_TRACKING_AIM_RING_PINCHING_BIT = 0x00000010,
		/// Whether the little finger pinches.
		XR_HAND_TRACKING_AIM_LITTLE_PINCHING_BIT = 0x00000020,
		/// Whether the ray touches.
		XR_HAND_TRACKING_AIM_RAY_TOUCHED_BIT=0x00000200
	};

	// Flag bits for XrHandTrackingAimFlagsFB
	enum class XrSpaceLocationFlags:uint64
	{
		XR_SPACE_LOCATION_ORIENTATION_VALID_BIT = 0x00000001,
		XR_SPACE_LOCATION_POSITION_VALID_BIT = 0x00000002,
		XR_SPACE_LOCATION_ORIENTATION_TRACKED_BIT = 0x00000004,
		XR_SPACE_LOCATION_POSITION_TRACKED_BIT = 0x00000008
	};

	struct FPICOXRHandState : public FNoncopyable
	{
		FPICOXRHandState()
		:Radii{}
		, SpaceLocationFlags{}
		, ReceivedJointPoses(false)
		, HandScale(0)
		, Status(0)
		, PinchStrengthIndex(0)
		, PinchStrengthMiddle(0)
		, PinchStrengthRing(0)
		, PinchStrengthLittle(0)
		, TouchStrengthRay(0)
		{
		}

		PxrHandJointsLocations HandJointLocations;
		PxrHandAimState AimState;
		
		// Transforms are cached in Unreal Tracking Space
		FTransform KeypointTransforms[XR_HAND_JOINT_COUNT_MAX];
		float Radii[XR_HAND_JOINT_COUNT_MAX];
		uint64 SpaceLocationFlags[XR_HAND_JOINT_COUNT_MAX];
		bool ReceivedJointPoses;
		float HandScale;
		
		uint64 Status;
		FTransform AimPose; //Pose of the interactive ray
		float PinchStrengthIndex;
		float PinchStrengthMiddle;
		float PinchStrengthRing;
		float PinchStrengthLittle; //Pinch finger strength
		float TouchStrengthRay;
		
		bool GetTransform(EPICOXRHandJoint KeyPoint, FTransform& OutTransform) const
		{
			check(static_cast<int32>(KeyPoint) < XR_HAND_JOINT_COUNT_MAX);
			OutTransform = KeypointTransforms[static_cast<uint32>(KeyPoint)];

			return ReceivedJointPoses;
		};
		const FTransform& GetTransform(EPICOXRHandJoint KeyPoint) const
		{
			check(static_cast<int32>(KeyPoint) < XR_HAND_JOINT_COUNT_MAX);
			return KeypointTransforms[static_cast<uint32>(KeyPoint)];
		}
	};
	
	virtual FQuat GetBoneRotation(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint BoneId) =0;
	virtual FVector GetBoneLocation(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint BoneId) =0;
	virtual float GetBoneRadii(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint BoneId) =0;
	virtual bool IsBoneOrientationValid(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint BoneId) =0;
	virtual bool IsBonePositionValid(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint BoneId) =0;
	virtual bool IsBoneOrientationTracked(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint BoneId) =0;
	virtual bool IsBonePositionTracked(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint BoneId) =0;
	virtual FTransform GetHandRootPose(const EPICOXRHandType DeviceHand)=0;
	virtual float GetHandScale(const EPICOXRHandType DeviceHand) =0;
	virtual EPICOXRHandTrackingConfidence GetTrackingConfidence(const EPICOXRHandType DeviceHand) =0;
	virtual FTransform GetRayPose(const EPICOXRHandType DeviceHand) =0;
	virtual bool IsComputed(const EPICOXRHandType DeviceHand) =0;
	virtual bool IsRayValid(const EPICOXRHandType DeviceHand) =0;
	virtual bool IsPinchValid(const EPICOXRHandType DeviceHand) =0;
	virtual float GetPinchStrength(const EPICOXRHandType DeviceHand)=0;
	virtual bool GetFingerIsPinching(const EPICOXRHandType DeviceHand,EPICOXRHandFinger Finger) =0;
	virtual float GetFingerPinchStrength(const EPICOXRHandType DeviceHand, EPICOXRHandFinger Finger) =0;
	virtual EPICOXRActiveInputDevice GetActiveInputDevice()=0;

	virtual void UpdateHandState() =0;
	static FName GetModularFeatureName()
	{
		static FName FeatureName = FName(TEXT("PICOHandTracker"));
		return FeatureName;
	}

	/**
	* Returns the device type of the controller.
	*
	* @return	Device type of the controller.
	*/
	virtual FName GetHandTrackerDeviceTypeName() const = 0;


	/**
	 * Returns true if hand tracking is available and tracking.
	 *
	 * @return			true/false
	 */
	virtual bool IsHandTrackingStateValid() const = 0;

	/**
	 * Get the transform and radius (or 0 if radius is not available on this platform) for the given hand keypoint.
	 *
	 * @return			true if data was fetched
	 */
	virtual bool GetKeypointState(EPICOXRHandType Hand, EPICOXRHandJoint Keypoint, FTransform& OutTransform, float& OutRadius) const = 0;
protected:
	FORCEINLINE FVector PxrBoneVectorToFVector(PxrVector3f pxrVector, float WorldToMeters)
	{
		//Reference system sdk to Unreal
		return FVector(-pxrVector.z, pxrVector.x, pxrVector.y) * WorldToMeters;
	}

	FORCEINLINE FQuat PxrBoneQuatToFQuat(PxrQuaternionf pxrQuat)
	{
		return FQuat(-pxrQuat.z, pxrQuat.x, pxrQuat.y, -pxrQuat.w);
	}
};

