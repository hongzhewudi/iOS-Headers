/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ABCapabilitiesManager : NSObject
{
    BOOL _isRingtoneStoreAvailable;
}

+ (id)defaultCapabilitiesManager;
+ (void)_setDefaultCapabilitiesManager:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isSensitiveUIAllowed;
- (BOOL)hasTelephonyCapability;
- (BOOL)hasCellularTelephonyCapability;
- (BOOL)hasCellularDataCapability;
- (BOOL)hasSMSCapability;
- (BOOL)hasVibratorCapability;
- (BOOL)areCustomVibrationsEnabled;
- (BOOL)hasCameraCapability;
- (BOOL)isEmailConfigured;
- (BOOL)isMMSConfigured;
- (BOOL)isMadridConfigured;
- (BOOL)isConferencingAvailable;
- (BOOL)isConferencingEverGonnaBeAvailable;
- (BOOL)hasPreviouslyConferencedWithID:(id)arg1;
- (id)conferenceURLForPhoneNumber:(id)arg1;
- (id)conferenceURLForDestinationID:(id)arg1;
- (BOOL)hasAdditionalTextTones;
- (void)_checkRingtoneStoreAvailability;
@property(nonatomic) BOOL isRingtoneStoreAvailable; // @synthesize isRingtoneStoreAvailable=_isRingtoneStoreAvailable;
- (BOOL)isTwitterServiceAvailable;

@end
