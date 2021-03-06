/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AccountFullAccountProtocol-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface BasicAccount : NSObject <AccountFullAccountProtocol>
{
    NSDictionary *_originalProperties;
    NSMutableDictionary *_properties;
    id <AccountFullAccountProtocol> _fullAccount;
    id <AccountRefreshProtocol> _syncAccount;
    BasicAccount *_parentAccount;
}

+ (BOOL)isMultitaskingEnabled;
+ (void)initialize;
+ (id)accountWithType:(id)arg1 class:(id)arg2;
+ (id)accountWithProperties:(id)arg1;
+ (id)allSupportedDataclasses;
+ (id)supportedDataclassesForAccountType:(id)arg1;
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)arg1;
+ (id)userActionsToEnableDataclass:(id)arg1 forAccountType:(id)arg2;
+ (id)userActionsToDisableDataclass:(id)arg1 forAccountType:(id)arg2;
+ (id)deleteAccountActionsForAccountType:(id)arg1;
+ (BOOL)showRemindersSeparatelyForAccountType:(id)arg1;
+ (BOOL)multipleStoresSupportedByDataclass:(id)arg1;
+ (BOOL)displayToggleForDataclass:(id)arg1;
+ (BOOL)userConfirmationIsRequiredByDataclass:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)removeAccountPropertyForKey:(id)arg1;
- (id)accountPropertyForKey:(id)arg1;
- (id)properties;
- (id)propertiesToSave;
- (id)type;
- (id)identifier;
- (id)parentAccountIdentifier;
- (id)parentAccount;
- (void)setParentAccount:(id)arg1;
- (id)syncStoreIdentifier;
- (id)accountClass;
- (void)setAccountClass:(id)arg1;
- (id)displayName;
- (id)typeString;
- (id)shortTypeString;
- (id)supportedDataclasses;
- (id)provisionedDataclasses;
- (id)enabledDataclasses;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setEnabledForDataclasses:(id)arg1;
- (id)fullAccountUsingLoader:(id)arg1;
- (id)defaultContainerIdentifierForDataclass:(id)arg1;
- (BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)refreshContainerListForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)refreshContainersForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2;
- (BOOL)refreshContainerListForDataclass:(id)arg1;
- (BOOL)refreshContainersForDataclass:(id)arg1;
- (void)renewAccountCredentialsWithHandler:(id)arg1;
@property(retain, nonatomic) NSDictionary *originalProperties; // @synthesize originalProperties=_originalProperties;

@end

