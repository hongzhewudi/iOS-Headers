/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSMutableDictionary, NSString;

@interface PFUbiquitySaveSnapshot : NSObject
{
    NSDate *_transactionDate;
    NSString *_modelVersionHash;
    NSString *_localPeerID;
    NSMutableDictionary *_storeNameToStoreSaveSnapshots;
}

- (id)initWithTransactionLog:(id)arg1;
- (id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)storeSaveSnapshotForStoreName:(id)arg1;
- (id)storeSaveSnapshotForStore:(id)arg1;
@property(readonly, nonatomic) NSArray *storeNames;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) NSString *modelVersionHash; // @synthesize modelVersionHash=_modelVersionHash;
@property(retain, nonatomic) NSDate *transacationDate; // @synthesize transacationDate=_transactionDate;

@end

