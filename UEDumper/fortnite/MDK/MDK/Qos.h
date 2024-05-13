
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Class /Script/Qos.QosBeaconClient
/// Size: 0x0038 (0x000320 - 0x000358)
class AQosBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:


	/// Functions
	// Function /Script/Qos.QosBeaconClient.ServerQosRequest
	// void ServerQosRequest(FString InSessionId);                                                                              // [0x7bbf234] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Qos.QosBeaconClient.ClientQosResponse
	// void ClientQosResponse(EQosResponseType Response);                                                                       // [0x7bbf1b0] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/Qos.QosBeaconHost
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class AQosBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/Qos.QosEvaluator
/// Size: 0x0058 (0x000028 - 0x000080)
class UQosEvaluator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bInProgress                                                 OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bCancelOperation                                            OFFSET(get<bool>, {0x49, 1, 0, 0})
	CMember(TArray<FDatacenterQosInstance>)            Datacenters                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Qos.QosRegionManager
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UQosRegionManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(int32_t)                                   NumTestsPerRegion                                           OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     PingTimeout                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bEnableSubspaceBiasOrder                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   SubspaceDelimiter                                           OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TArray<FQosRegionInfo>)                    RegionDefinitions                                           OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FQosDatacenterInfo>)                DatacenterDefinitions                                       OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FDateTime)                                 LastCheckTimestamp                                          OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	CMember(class UQosEvaluator*)                      Evaluator                                                   OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(EQosCompletionResult)                      QosEvalResult                                               OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(TArray<FRegionQosInstance>)                RegionOptions                                               OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   ForceRegionId                                               OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      bRegionForcedViaCommandline                                 OFFSET(get<bool>, {0xA0, 1, 0, 0})
	SMember(FString)                                   SelectedRegionId                                            OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/Qos.QosSubspaceComparisonParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FQosSubspaceComparisonParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxNonSubspacePingMs                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinSubspacePingMs                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ConstantMaxToleranceMs                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     ScaledMaxTolerancePct                                       OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Qos.QosPingServerInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FQosPingServerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   address                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Port                                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Qos.QosDatacenterInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FQosDatacenterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RegionId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TArray<FQosPingServerInfo>)                Servers                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Qos.QosRegionInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FQosRegionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RegionId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bAutoAssignable                                             OFFSET(get<bool>, {0x22, 1, 0, 0})
	DMember(bool)                                      bAllowSubspaceBias                                          OFFSET(get<bool>, {0x23, 1, 0, 0})
	SMember(FQosSubspaceComparisonParams)              SubspaceBiasParams                                          OFFSET(getStruct<T>, {0x24, 16, 0, 0})
};

/// Struct /Script/Qos.DatacenterQosInstance
/// Size: 0x0068 (0x000000 - 0x000068)
class FDatacenterQosInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FQosDatacenterInfo)                        Definition                                                  OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(EQosDatacenterResult)                      Result                                                      OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   AvgPingMs                                                   OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TArray<int32_t>)                           PingResults                                                 OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FDateTime)                                 LastCheckTimestamp                                          OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	DMember(bool)                                      bUsable                                                     OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/Qos.RegionQosInstance
/// Size: 0x0048 (0x000000 - 0x000048)
class FRegionQosInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FQosRegionInfo)                            Definition                                                  OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(TArray<FDatacenterQosInstance>)            DatacenterOptions                                           OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Enum /Script/Qos.EQosResponseType
/// Size: 0x03
enum class EQosResponseType : uint8_t
{
	EQosResponseType__NoResponse                                                     = 0,
	EQosResponseType__Success                                                        = 1,
	EQosResponseType__Failure                                                        = 2
};

/// Enum /Script/Qos.EQosDatacenterResult
/// Size: 0x03
enum class EQosDatacenterResult : uint8_t
{
	EQosDatacenterResult__Invalid                                                    = 0,
	EQosDatacenterResult__Success                                                    = 1,
	EQosDatacenterResult__Incomplete                                                 = 2
};

/// Enum /Script/Qos.EQosCompletionResult
/// Size: 0x04
enum class EQosCompletionResult : uint8_t
{
	EQosCompletionResult__Invalid                                                    = 0,
	EQosCompletionResult__Success                                                    = 1,
	EQosCompletionResult__Failure                                                    = 2,
	EQosCompletionResult__Canceled                                                   = 3
};

