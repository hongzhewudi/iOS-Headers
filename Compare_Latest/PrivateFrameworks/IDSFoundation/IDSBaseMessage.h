//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSString;

@interface IDSBaseMessage : NSObject <NSCopying>
{
    BOOL _forceCellular;
    BOOL _usingOutgoingPush;
    BOOL _wantsResponse;
    BOOL _wantsBinaryPush;
    BOOL _wantsIntegerUniqueIDs;
    BOOL _highPriority;
    BOOL _hasReceivedPushAck;
    id _context;
    NSDictionary *_clientInfo;
    NSData *_serviceData;
    unsigned int _uniqueID;
    NSDictionary *_userInfo;
    NSDate *_creationDate;
    NSString *_topic;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _deliveryAcknowledgementBlock;
    NSDictionary *_cachedBody;
    NSString *_dsAuthID;
    NSString *_dataUsageBundleIdentifier;
    int _timeoutRetries;
    NSDictionary *_responseAlert;
    double _timeout;
    double _timeSent;
}

@property BOOL hasReceivedPushAck; // @synthesize hasReceivedPushAck=_hasReceivedPushAck;
@property BOOL highPriority; // @synthesize highPriority=_highPriority;
@property(copy) NSDictionary *responseAlertInfo; // @synthesize responseAlertInfo=_responseAlert;
@property BOOL wantsIntegerUniqueIDs; // @synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs;
@property BOOL wantsBinaryPush; // @synthesize wantsBinaryPush=_wantsBinaryPush;
@property int timeoutRetries; // @synthesize timeoutRetries=_timeoutRetries;
@property double timeSent; // @synthesize timeSent=_timeSent;
@property(copy, nonatomic, setter=setDSAuthID:) NSString *dsAuthID; // @synthesize dsAuthID=_dsAuthID;
@property(retain, setter=_setCachedBody:) NSDictionary *_cachedBody; // @synthesize _cachedBody;
@property BOOL wantsResponse; // @synthesize wantsResponse=_wantsResponse;
@property(copy) CDUnknownBlockType deliveryAcknowledgementBlock; // @synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock;
@property(setter=_setUsingOutgoingPush:) BOOL _usingOutgoingPush; // @synthesize _usingOutgoingPush;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property double timeout; // @synthesize timeout=_timeout;
@property(retain) NSString *topic; // @synthesize topic=_topic;
@property BOOL forceCellular; // @synthesize forceCellular=_forceCellular;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property unsigned int uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy) NSData *serviceData; // @synthesize serviceData=_serviceData;
@property(copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) id context; // @synthesize context=_context;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
@property(readonly, retain) NSDictionary *messageBody;
@property(readonly, retain) NSDictionary *additionalInternalHeaders;
@property(readonly, retain) NSDictionary *nonStandardMessageHeadersForOutgoingPush;
@property(readonly, retain) NSDictionary *additionalMessageHeadersForOutgoingPush;
@property(readonly, retain) NSDictionary *additionalQueryStringParameters;
@property(readonly, retain) NSDictionary *additionalMessageHeaders;
@property(readonly, retain) NSString *bagKey;
@property(readonly) int responseCommand;
@property(readonly) int command;
@property(readonly, retain) NSString *userAgentHeaderString;
@property(readonly) BOOL wantsUserAgentInHeaders;
@property(readonly, retain) NSArray *requiredKeys;
- (BOOL)hasRequiredKeys:(id *)arg1;
@property(readonly, copy, nonatomic) NSData *IDCertificate;
@property(readonly, nonatomic) struct __SecKey *identityPublicKey;
@property(readonly, nonatomic) struct __SecKey *identityPrivateKey;
@property(copy, nonatomic) NSMutableArray *userIDArray;
@property(copy, nonatomic) NSMutableArray *privateKeyArray;
@property(copy, nonatomic) NSMutableArray *publicKeyArray;
@property(copy, nonatomic) NSMutableArray *certDataArray;
@property(copy, nonatomic) NSData *pushToken;
@property(copy, nonatomic) NSData *pushCertificate;
@property(nonatomic) struct __SecKey *pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey;
- (void)_cacheBody;
@property(readonly, retain) NSDictionary *messageBodyUsingCache;
@property(readonly) BOOL isValidMessage;
@property(readonly) BOOL payloadCanBeLogged;
@property(readonly, retain) NSString *dataUsageBundleIdentifier; // @synthesize dataUsageBundleIdentifier=_dataUsageBundleIdentifier;
@property(readonly) double customRetryInterval;
@property(readonly) BOOL wantsCustomRetryInterval;
@property(readonly) BOOL wantsBodySignature;
@property(readonly) BOOL wantsSignature;
@property(readonly) BOOL ignoresNetworkConnectivity;
@property(readonly) BOOL wantsAPSRetries;
@property(readonly) BOOL wantsManagedRetries;
@property(readonly) BOOL wantsExtraTimeoutRetry;
@property(readonly) int maxTimeoutRetries;
@property(readonly) BOOL wantsCFNetworkTimeout;
@property(readonly) BOOL wantsBagKey;
@property(readonly) BOOL wantsHTTPGet;
@property(readonly) BOOL wantsHTTPHeaders;
@property(readonly) BOOL wantsJSONBody;
@property(readonly) BOOL wantsCompressedBody;
@property(readonly) BOOL wantsIDSServer;
@property(readonly, retain) NSString *uniqueIDString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

