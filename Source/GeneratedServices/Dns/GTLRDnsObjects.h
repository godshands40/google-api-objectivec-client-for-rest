// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud DNS API (dns/v1)
// Description:
//   Configures and serves authoritative DNS records.
// Documentation:
//   https://developers.google.com/cloud-dns

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRDns_Change;
@class GTLRDns_DnsKey;
@class GTLRDns_DnsKeySpec;
@class GTLRDns_KeyDigest;
@class GTLRDns_ManagedZone;
@class GTLRDns_ManagedZone_Labels;
@class GTLRDns_ManagedZoneDnsSecConfig;
@class GTLRDns_ManagedZoneForwardingConfig;
@class GTLRDns_ManagedZoneForwardingConfigNameServerTarget;
@class GTLRDns_ManagedZonePeeringConfig;
@class GTLRDns_ManagedZonePeeringConfigTargetNetwork;
@class GTLRDns_ManagedZonePrivateVisibilityConfig;
@class GTLRDns_ManagedZonePrivateVisibilityConfigNetwork;
@class GTLRDns_ManagedZoneReverseLookupConfig;
@class GTLRDns_Operation;
@class GTLRDns_OperationDnsKeyContext;
@class GTLRDns_OperationManagedZoneContext;
@class GTLRDns_Policy;
@class GTLRDns_PolicyAlternativeNameServerConfig;
@class GTLRDns_PolicyAlternativeNameServerConfigTargetNameServer;
@class GTLRDns_PolicyNetwork;
@class GTLRDns_Quota;
@class GTLRDns_ResourceRecordSet;
@class GTLRDns_ResponseHeader;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRDns_Change.status

/** Value: "done" */
FOUNDATION_EXTERN NSString * const kGTLRDns_Change_Status_Done;
/** Value: "pending" */
FOUNDATION_EXTERN NSString * const kGTLRDns_Change_Status_Pending;

// ----------------------------------------------------------------------------
// GTLRDns_DnsKey.algorithm

/** Value: "ecdsap256sha256" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKey_Algorithm_Ecdsap256sha256;
/** Value: "ecdsap384sha384" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKey_Algorithm_Ecdsap384sha384;
/** Value: "rsasha1" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKey_Algorithm_Rsasha1;
/** Value: "rsasha256" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKey_Algorithm_Rsasha256;
/** Value: "rsasha512" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKey_Algorithm_Rsasha512;

// ----------------------------------------------------------------------------
// GTLRDns_DnsKey.type

/** Value: "keySigning" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKey_Type_KeySigning;
/** Value: "zoneSigning" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKey_Type_ZoneSigning;

// ----------------------------------------------------------------------------
// GTLRDns_DnsKeySpec.algorithm

/** Value: "ecdsap256sha256" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKeySpec_Algorithm_Ecdsap256sha256;
/** Value: "ecdsap384sha384" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKeySpec_Algorithm_Ecdsap384sha384;
/** Value: "rsasha1" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKeySpec_Algorithm_Rsasha1;
/** Value: "rsasha256" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKeySpec_Algorithm_Rsasha256;
/** Value: "rsasha512" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKeySpec_Algorithm_Rsasha512;

// ----------------------------------------------------------------------------
// GTLRDns_DnsKeySpec.keyType

/** Value: "keySigning" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKeySpec_KeyType_KeySigning;
/** Value: "zoneSigning" */
FOUNDATION_EXTERN NSString * const kGTLRDns_DnsKeySpec_KeyType_ZoneSigning;

// ----------------------------------------------------------------------------
// GTLRDns_KeyDigest.type

/** Value: "sha1" */
FOUNDATION_EXTERN NSString * const kGTLRDns_KeyDigest_Type_Sha1;
/** Value: "sha256" */
FOUNDATION_EXTERN NSString * const kGTLRDns_KeyDigest_Type_Sha256;
/** Value: "sha384" */
FOUNDATION_EXTERN NSString * const kGTLRDns_KeyDigest_Type_Sha384;

// ----------------------------------------------------------------------------
// GTLRDns_ManagedZone.visibility

/** Value: "private" */
FOUNDATION_EXTERN NSString * const kGTLRDns_ManagedZone_Visibility_Private;
/** Value: "public" */
FOUNDATION_EXTERN NSString * const kGTLRDns_ManagedZone_Visibility_Public;

// ----------------------------------------------------------------------------
// GTLRDns_ManagedZoneDnsSecConfig.nonExistence

/** Value: "nsec" */
FOUNDATION_EXTERN NSString * const kGTLRDns_ManagedZoneDnsSecConfig_NonExistence_Nsec;
/** Value: "nsec3" */
FOUNDATION_EXTERN NSString * const kGTLRDns_ManagedZoneDnsSecConfig_NonExistence_Nsec3;

// ----------------------------------------------------------------------------
// GTLRDns_ManagedZoneDnsSecConfig.state

/** Value: "off" */
FOUNDATION_EXTERN NSString * const kGTLRDns_ManagedZoneDnsSecConfig_State_Off;
/** Value: "on" */
FOUNDATION_EXTERN NSString * const kGTLRDns_ManagedZoneDnsSecConfig_State_On;
/** Value: "transfer" */
FOUNDATION_EXTERN NSString * const kGTLRDns_ManagedZoneDnsSecConfig_State_Transfer;

// ----------------------------------------------------------------------------
// GTLRDns_ManagedZoneForwardingConfigNameServerTarget.forwardingPath

/** Value: "default" */
FOUNDATION_EXTERN NSString * const kGTLRDns_ManagedZoneForwardingConfigNameServerTarget_ForwardingPath_Default;
/** Value: "private" */
FOUNDATION_EXTERN NSString * const kGTLRDns_ManagedZoneForwardingConfigNameServerTarget_ForwardingPath_Private;

// ----------------------------------------------------------------------------
// GTLRDns_Operation.status

/** Value: "done" */
FOUNDATION_EXTERN NSString * const kGTLRDns_Operation_Status_Done;
/** Value: "pending" */
FOUNDATION_EXTERN NSString * const kGTLRDns_Operation_Status_Pending;

// ----------------------------------------------------------------------------
// GTLRDns_PolicyAlternativeNameServerConfigTargetNameServer.forwardingPath

/** Value: "default" */
FOUNDATION_EXTERN NSString * const kGTLRDns_PolicyAlternativeNameServerConfigTargetNameServer_ForwardingPath_Default;
/** Value: "private" */
FOUNDATION_EXTERN NSString * const kGTLRDns_PolicyAlternativeNameServerConfigTargetNameServer_ForwardingPath_Private;

/**
 *  GTLRDns_Change
 */
@interface GTLRDns_Change : GTLRObject

@property(nonatomic, strong, nullable) NSArray<GTLRDns_ResourceRecordSet *> *additions;
@property(nonatomic, strong, nullable) NSArray<GTLRDns_ResourceRecordSet *> *deletions;

/**
 *  identifier
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  isServing
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isServing;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#change".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *startTime;

/**
 *  status
 *
 *  Likely values:
 *    @arg @c kGTLRDns_Change_Status_Done Value "done"
 *    @arg @c kGTLRDns_Change_Status_Pending Value "pending"
 */
@property(nonatomic, copy, nullable) NSString *status;

@end


/**
 *  GTLRDns_ChangesListResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "changes" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRDns_ChangesListResponse : GTLRCollectionObject

/**
 *  changes
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDns_Change *> *changes;

@property(nonatomic, strong, nullable) GTLRDns_ResponseHeader *header;

/** Type of resource. */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRDns_DnsKey
 */
@interface GTLRDns_DnsKey : GTLRObject

/**
 *  algorithm
 *
 *  Likely values:
 *    @arg @c kGTLRDns_DnsKey_Algorithm_Ecdsap256sha256 Value "ecdsap256sha256"
 *    @arg @c kGTLRDns_DnsKey_Algorithm_Ecdsap384sha384 Value "ecdsap384sha384"
 *    @arg @c kGTLRDns_DnsKey_Algorithm_Rsasha1 Value "rsasha1"
 *    @arg @c kGTLRDns_DnsKey_Algorithm_Rsasha256 Value "rsasha256"
 *    @arg @c kGTLRDns_DnsKey_Algorithm_Rsasha512 Value "rsasha512"
 */
@property(nonatomic, copy, nullable) NSString *algorithm;

@property(nonatomic, copy, nullable) NSString *creationTime;

/**
 *  descriptionProperty
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

@property(nonatomic, strong, nullable) NSArray<GTLRDns_KeyDigest *> *digests;

/**
 *  identifier
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  isActive
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isActive;

/**
 *  keyLength
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(nonatomic, strong, nullable) NSNumber *keyLength;

/**
 *  keyTag
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *keyTag;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#dnsKey".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *publicKey;

/**
 *  type
 *
 *  Likely values:
 *    @arg @c kGTLRDns_DnsKey_Type_KeySigning Value "keySigning"
 *    @arg @c kGTLRDns_DnsKey_Type_ZoneSigning Value "zoneSigning"
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  GTLRDns_DnsKeysListResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "dnsKeys" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRDns_DnsKeysListResponse : GTLRCollectionObject

/**
 *  dnsKeys
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDns_DnsKey *> *dnsKeys;

@property(nonatomic, strong, nullable) GTLRDns_ResponseHeader *header;

/** Type of resource. */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRDns_DnsKeySpec
 */
@interface GTLRDns_DnsKeySpec : GTLRObject

/**
 *  algorithm
 *
 *  Likely values:
 *    @arg @c kGTLRDns_DnsKeySpec_Algorithm_Ecdsap256sha256 Value
 *        "ecdsap256sha256"
 *    @arg @c kGTLRDns_DnsKeySpec_Algorithm_Ecdsap384sha384 Value
 *        "ecdsap384sha384"
 *    @arg @c kGTLRDns_DnsKeySpec_Algorithm_Rsasha1 Value "rsasha1"
 *    @arg @c kGTLRDns_DnsKeySpec_Algorithm_Rsasha256 Value "rsasha256"
 *    @arg @c kGTLRDns_DnsKeySpec_Algorithm_Rsasha512 Value "rsasha512"
 */
@property(nonatomic, copy, nullable) NSString *algorithm;

/**
 *  keyLength
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(nonatomic, strong, nullable) NSNumber *keyLength;

/**
 *  keyType
 *
 *  Likely values:
 *    @arg @c kGTLRDns_DnsKeySpec_KeyType_KeySigning Value "keySigning"
 *    @arg @c kGTLRDns_DnsKeySpec_KeyType_ZoneSigning Value "zoneSigning"
 */
@property(nonatomic, copy, nullable) NSString *keyType;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#dnsKeySpec".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRDns_KeyDigest
 */
@interface GTLRDns_KeyDigest : GTLRObject

@property(nonatomic, copy, nullable) NSString *digest;

/**
 *  type
 *
 *  Likely values:
 *    @arg @c kGTLRDns_KeyDigest_Type_Sha1 Value "sha1"
 *    @arg @c kGTLRDns_KeyDigest_Type_Sha256 Value "sha256"
 *    @arg @c kGTLRDns_KeyDigest_Type_Sha384 Value "sha384"
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  GTLRDns_ManagedZone
 */
@interface GTLRDns_ManagedZone : GTLRObject

@property(nonatomic, copy, nullable) NSString *creationTime;

/**
 *  descriptionProperty
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

@property(nonatomic, copy, nullable) NSString *dnsName;
@property(nonatomic, strong, nullable) GTLRDns_ManagedZoneDnsSecConfig *dnssecConfig;
@property(nonatomic, strong, nullable) GTLRDns_ManagedZoneForwardingConfig *forwardingConfig;

/**
 *  identifier
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *identifier;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#managedZone".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, strong, nullable) GTLRDns_ManagedZone_Labels *labels;
@property(nonatomic, copy, nullable) NSString *name;
@property(nonatomic, strong, nullable) NSArray<NSString *> *nameServers;
@property(nonatomic, copy, nullable) NSString *nameServerSet;
@property(nonatomic, strong, nullable) GTLRDns_ManagedZonePeeringConfig *peeringConfig;
@property(nonatomic, strong, nullable) GTLRDns_ManagedZonePrivateVisibilityConfig *privateVisibilityConfig;
@property(nonatomic, strong, nullable) GTLRDns_ManagedZoneReverseLookupConfig *reverseLookupConfig;

/**
 *  visibility
 *
 *  Likely values:
 *    @arg @c kGTLRDns_ManagedZone_Visibility_Private Value "private"
 *    @arg @c kGTLRDns_ManagedZone_Visibility_Public Value "public"
 */
@property(nonatomic, copy, nullable) NSString *visibility;

@end


/**
 *  GTLRDns_ManagedZone_Labels
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRDns_ManagedZone_Labels : GTLRObject
@end


/**
 *  GTLRDns_ManagedZoneDnsSecConfig
 */
@interface GTLRDns_ManagedZoneDnsSecConfig : GTLRObject

@property(nonatomic, strong, nullable) NSArray<GTLRDns_DnsKeySpec *> *defaultKeySpecs;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#managedZoneDnsSecConfig".
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  nonExistence
 *
 *  Likely values:
 *    @arg @c kGTLRDns_ManagedZoneDnsSecConfig_NonExistence_Nsec Value "nsec"
 *    @arg @c kGTLRDns_ManagedZoneDnsSecConfig_NonExistence_Nsec3 Value "nsec3"
 */
@property(nonatomic, copy, nullable) NSString *nonExistence;

/**
 *  state
 *
 *  Likely values:
 *    @arg @c kGTLRDns_ManagedZoneDnsSecConfig_State_Off Value "off"
 *    @arg @c kGTLRDns_ManagedZoneDnsSecConfig_State_On Value "on"
 *    @arg @c kGTLRDns_ManagedZoneDnsSecConfig_State_Transfer Value "transfer"
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  GTLRDns_ManagedZoneForwardingConfig
 */
@interface GTLRDns_ManagedZoneForwardingConfig : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#managedZoneForwardingConfig".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, strong, nullable) NSArray<GTLRDns_ManagedZoneForwardingConfigNameServerTarget *> *targetNameServers;

@end


/**
 *  GTLRDns_ManagedZoneForwardingConfigNameServerTarget
 */
@interface GTLRDns_ManagedZoneForwardingConfigNameServerTarget : GTLRObject

/**
 *  forwardingPath
 *
 *  Likely values:
 *    @arg @c kGTLRDns_ManagedZoneForwardingConfigNameServerTarget_ForwardingPath_Default
 *        Value "default"
 *    @arg @c kGTLRDns_ManagedZoneForwardingConfigNameServerTarget_ForwardingPath_Private
 *        Value "private"
 */
@property(nonatomic, copy, nullable) NSString *forwardingPath;

@property(nonatomic, copy, nullable) NSString *ipv4Address;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#managedZoneForwardingConfigNameServerTarget".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRDns_ManagedZoneOperationsListResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "operations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRDns_ManagedZoneOperationsListResponse : GTLRCollectionObject

@property(nonatomic, strong, nullable) GTLRDns_ResponseHeader *header;

/** Type of resource. */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  operations
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDns_Operation *> *operations;

@end


/**
 *  GTLRDns_ManagedZonePeeringConfig
 */
@interface GTLRDns_ManagedZonePeeringConfig : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#managedZonePeeringConfig".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, strong, nullable) GTLRDns_ManagedZonePeeringConfigTargetNetwork *targetNetwork;

@end


/**
 *  GTLRDns_ManagedZonePeeringConfigTargetNetwork
 */
@interface GTLRDns_ManagedZonePeeringConfigTargetNetwork : GTLRObject

@property(nonatomic, copy, nullable) NSString *deactivateTime;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#managedZonePeeringConfigTargetNetwork".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *networkUrl;

@end


/**
 *  GTLRDns_ManagedZonePrivateVisibilityConfig
 */
@interface GTLRDns_ManagedZonePrivateVisibilityConfig : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#managedZonePrivateVisibilityConfig".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, strong, nullable) NSArray<GTLRDns_ManagedZonePrivateVisibilityConfigNetwork *> *networks;

@end


/**
 *  GTLRDns_ManagedZonePrivateVisibilityConfigNetwork
 */
@interface GTLRDns_ManagedZonePrivateVisibilityConfigNetwork : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#managedZonePrivateVisibilityConfigNetwork".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *networkUrl;

@end


/**
 *  GTLRDns_ManagedZoneReverseLookupConfig
 */
@interface GTLRDns_ManagedZoneReverseLookupConfig : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#managedZoneReverseLookupConfig".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRDns_ManagedZonesListResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "managedZones" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRDns_ManagedZonesListResponse : GTLRCollectionObject

@property(nonatomic, strong, nullable) GTLRDns_ResponseHeader *header;

/** Type of resource. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  managedZones
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDns_ManagedZone *> *managedZones;

@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRDns_Operation
 */
@interface GTLRDns_Operation : GTLRObject

@property(nonatomic, strong, nullable) GTLRDns_OperationDnsKeyContext *dnsKeyContext;

/**
 *  identifier
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#operation".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *startTime;

/**
 *  status
 *
 *  Likely values:
 *    @arg @c kGTLRDns_Operation_Status_Done Value "done"
 *    @arg @c kGTLRDns_Operation_Status_Pending Value "pending"
 */
@property(nonatomic, copy, nullable) NSString *status;

@property(nonatomic, copy, nullable) NSString *type;
@property(nonatomic, copy, nullable) NSString *user;
@property(nonatomic, strong, nullable) GTLRDns_OperationManagedZoneContext *zoneContext;

@end


/**
 *  GTLRDns_OperationDnsKeyContext
 */
@interface GTLRDns_OperationDnsKeyContext : GTLRObject

@property(nonatomic, strong, nullable) GTLRDns_DnsKey *newValue NS_RETURNS_NOT_RETAINED;
@property(nonatomic, strong, nullable) GTLRDns_DnsKey *oldValue;

@end


/**
 *  GTLRDns_OperationManagedZoneContext
 */
@interface GTLRDns_OperationManagedZoneContext : GTLRObject

@property(nonatomic, strong, nullable) GTLRDns_ManagedZone *newValue NS_RETURNS_NOT_RETAINED;
@property(nonatomic, strong, nullable) GTLRDns_ManagedZone *oldValue;

@end


/**
 *  GTLRDns_PoliciesListResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "policies" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRDns_PoliciesListResponse : GTLRCollectionObject

@property(nonatomic, strong, nullable) GTLRDns_ResponseHeader *header;

/** Type of resource. */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  policies
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDns_Policy *> *policies;

@end


/**
 *  GTLRDns_PoliciesPatchResponse
 */
@interface GTLRDns_PoliciesPatchResponse : GTLRObject

@property(nonatomic, strong, nullable) GTLRDns_ResponseHeader *header;
@property(nonatomic, strong, nullable) GTLRDns_Policy *policy;

@end


/**
 *  GTLRDns_PoliciesUpdateResponse
 */
@interface GTLRDns_PoliciesUpdateResponse : GTLRObject

@property(nonatomic, strong, nullable) GTLRDns_ResponseHeader *header;
@property(nonatomic, strong, nullable) GTLRDns_Policy *policy;

@end


/**
 *  GTLRDns_Policy
 */
@interface GTLRDns_Policy : GTLRObject

@property(nonatomic, strong, nullable) GTLRDns_PolicyAlternativeNameServerConfig *alternativeNameServerConfig;

/**
 *  descriptionProperty
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  enableInboundForwarding
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *enableInboundForwarding;

/**
 *  enableLogging
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *enableLogging;

/**
 *  identifier
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *identifier;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#policy".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *name;
@property(nonatomic, strong, nullable) NSArray<GTLRDns_PolicyNetwork *> *networks;

@end


/**
 *  GTLRDns_PolicyAlternativeNameServerConfig
 */
@interface GTLRDns_PolicyAlternativeNameServerConfig : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#policyAlternativeNameServerConfig".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, strong, nullable) NSArray<GTLRDns_PolicyAlternativeNameServerConfigTargetNameServer *> *targetNameServers;

@end


/**
 *  GTLRDns_PolicyAlternativeNameServerConfigTargetNameServer
 */
@interface GTLRDns_PolicyAlternativeNameServerConfigTargetNameServer : GTLRObject

/**
 *  forwardingPath
 *
 *  Likely values:
 *    @arg @c kGTLRDns_PolicyAlternativeNameServerConfigTargetNameServer_ForwardingPath_Default
 *        Value "default"
 *    @arg @c kGTLRDns_PolicyAlternativeNameServerConfigTargetNameServer_ForwardingPath_Private
 *        Value "private"
 */
@property(nonatomic, copy, nullable) NSString *forwardingPath;

@property(nonatomic, copy, nullable) NSString *ipv4Address;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#policyAlternativeNameServerConfigTargetNameServer".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRDns_PolicyNetwork
 */
@interface GTLRDns_PolicyNetwork : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#policyNetwork".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *networkUrl;

@end


/**
 *  GTLRDns_Project
 */
@interface GTLRDns_Project : GTLRObject

/**
 *  identifier
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#project".
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  number
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *number;

@property(nonatomic, strong, nullable) GTLRDns_Quota *quota;

@end


/**
 *  GTLRDns_Quota
 */
@interface GTLRDns_Quota : GTLRObject

/**
 *  dnsKeysPerManagedZone
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *dnsKeysPerManagedZone;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#quota".
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  managedZones
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *managedZones;

/**
 *  managedZonesPerNetwork
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *managedZonesPerNetwork;

/**
 *  networksPerManagedZone
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *networksPerManagedZone;

/**
 *  networksPerPolicy
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *networksPerPolicy;

/**
 *  policies
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *policies;

/**
 *  resourceRecordsPerRrset
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *resourceRecordsPerRrset;

/**
 *  rrsetAdditionsPerChange
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *rrsetAdditionsPerChange;

/**
 *  rrsetDeletionsPerChange
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *rrsetDeletionsPerChange;

/**
 *  rrsetsPerManagedZone
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *rrsetsPerManagedZone;

/**
 *  targetNameServersPerManagedZone
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *targetNameServersPerManagedZone;

/**
 *  targetNameServersPerPolicy
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *targetNameServersPerPolicy;

/**
 *  totalRrdataSizePerChange
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalRrdataSizePerChange;

@property(nonatomic, strong, nullable) NSArray<GTLRDns_DnsKeySpec *> *whitelistedKeySpecs;

@end


/**
 *  GTLRDns_ResourceRecordSet
 */
@interface GTLRDns_ResourceRecordSet : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "dns#resourceRecordSet".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *name;
@property(nonatomic, strong, nullable) NSArray<NSString *> *rrdatas;
@property(nonatomic, strong, nullable) NSArray<NSString *> *signatureRrdatas;

/**
 *  ttl
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *ttl;

@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  GTLRDns_ResourceRecordSetsListResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "rrsets" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRDns_ResourceRecordSetsListResponse : GTLRCollectionObject

@property(nonatomic, strong, nullable) GTLRDns_ResponseHeader *header;

/** Type of resource. */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  rrsets
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRDns_ResourceRecordSet *> *rrsets;

@end


/**
 *  GTLRDns_ResponseHeader
 */
@interface GTLRDns_ResponseHeader : GTLRObject

@property(nonatomic, copy, nullable) NSString *operationId;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
