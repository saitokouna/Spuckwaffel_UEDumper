
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AttachableWheelsRuntime.AttachableWheel
/// Size: 0x0098 (0x000290 - 0x000328)
class AAttachableWheel : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class UStaticMeshComponent*)               WheelMeshComponent                                          OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FRotator)                                  WheelOrientation                                            OFFSET(getStruct<T>, {0x298, 24, 0, 0})
	DMember(float)                                     WheelDistance                                               OFFSET(get<float>, {0x2B0, 4, 0, 0})
	CMember(class UPhysicsConstraintComponent*)        AxleConstraint                                              OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(FAttachableWheelAttachData)                AttachData                                                  OFFSET(getStruct<T>, {0x2C0, 88, 0, 0})
	DMember(bool)                                      bAutoCreateAttachableWheelsComponent                        OFFSET(get<bool>, {0x318, 1, 0, 0})
	DMember(bool)                                      bEnableWheelWheelCollision                                  OFFSET(get<bool>, {0x319, 1, 0, 0})
	SMember(FAttachableWheelRuntimeData)               RuntimeData                                                 OFFSET(getStruct<T>, {0x31C, 12, 0, 0})


	/// Functions
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.SetRuntimeData
	// void SetRuntimeData(float Torque, float Velocity, float SteerAngle);                                                     // [0xab26afc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnRep_RuntimeData
	// void OnRep_RuntimeData(FAttachableWheelRuntimeData& RuntimeDataPrev);                                                    // [0xab26a78] Final|Native|Protected|HasOutParms 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnRep_AttachData
	// void OnRep_AttachData(FAttachableWheelAttachData& AttachDataPrev);                                                       // [0xab269b8] Final|Native|Protected|HasOutParms 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnPhysicsStateChanged
	// void OnPhysicsStateChanged(class UPrimitiveComponent* PrimitiveComponent, EComponentPhysicsStateChange StateChange);     // [0xab268f4] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnDetached
	// void OnDetached(class UPrimitiveComponent* DetachedComponent);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnAttached
	// void OnAttached(class UPrimitiveComponent* AttachedComponent);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetWorldSpaceAttachData
	// bool GetWorldSpaceAttachData(FAttachableWheelAttachData& OutAttachData, class UPrimitiveComponent* PrimitiveComponent, FName BodyName); // [0xab26560] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetAttachedComponent
	// class UPrimitiveComponent* GetAttachedComponent();                                                                       // [0xab2629c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetAttachData
	// FAttachableWheelAttachData GetAttachData();                                                                              // [0xab26244] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.DrawDebug
	// void DrawDebug();                                                                                                        // [0x36203b0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.DetachFrom
	// bool DetachFrom(class UPrimitiveComponent* InComponent);                                                                 // [0xab2619c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.Detach
	// void Detach();                                                                                                           // [0xab26108] Final|Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.AttachTo
	// bool AttachTo(class UPrimitiveComponent* InComponent, FVector& WorldLocation, FVector& AxleDirection, FVector SteerAxis); // [0xab25e74] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.AttachInPlace
	// bool AttachInPlace(class UPrimitiveComponent* InComponent);                                                              // [0xab25de4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AttachableWheelsRuntime.AttachableWheelsComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UAttachableWheelsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TSet<AAttachableWheel*>)                   AttachedWheels                                              OFFSET(get<T>, {0xA0, 80, 0, 0})


	/// Functions
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelDetached
	// void OnWheelDetached(class AAttachableWheel* AttachedWheel);                                                             // [0x18a39e4] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelAttached
	// void OnWheelAttached(class AAttachableWheel* AttachedWheel);                                                             // [0x18a39e4] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelDetached_Internal
	// bool HandleWheelDetached_Internal(class AAttachableWheel* AttachedWheel);                                                // [0xab26864] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelAttached_Internal
	// bool HandleWheelAttached_Internal(class AAttachableWheel* AttachedWheel);                                                // [0xab267d4] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheels
	// TArray<AAttachableWheel*> GetAttachedWheels();                                                                           // [0xab264f4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheelClosestOnAxis
	// class AAttachableWheel* GetAttachedWheelClosestOnAxis(FVector& Point, float& OutClosetDistanceToAxis, FVector& OutClosestPointOnAxis, FVector& OutClosestAxis); // [0xab262c0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.DrawDebug
	// void DrawDebug();                                                                                                        // [0x36203b0] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.DetachAllWheels
	// int32_t DetachAllWheels();                                                                                               // [0xab2611c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/AttachableWheelsRuntime.AttachableWheelAttachData
/// Size: 0x0058 (0x000000 - 0x000058)
class FAttachableWheelAttachData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      PrimitiveComponent                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Pos                                                         OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Axis1                                                       OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Axis2                                                       OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FName)                                     AttachmentName                                              OFFSET(getStruct<T>, {0x54, 4, 0, 0})
};

/// Struct /Script/AttachableWheelsRuntime.AttachableWheelRuntimeData
/// Size: 0x000C (0x000000 - 0x00000C)
class FAttachableWheelRuntimeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Torque                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Velocity                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SteerAngle                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
};
