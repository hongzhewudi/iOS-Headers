//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRItemNotificationSending.h"

@class BRCItemID, BRCNotificationGatherer, BRCNotificationManager, BRCRelativePath, BRCXPCClient, BRNotificationQueue, NSMutableSet, NSNumber, NSObject<OS_dispatch_queue>, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCNotificationPipe : NSObject <BRItemNotificationSending>
{
    BRCNotificationManager *_manager;
    int _watchKind;
    NSString *_watchNamePrefix;
    NSString *_watchForBundleID;
    NSMutableSet *_externalContainers;
    NSSet *_watchedContainers;
    NSSet *_watchedContainerIDs;
    unsigned int _watchedContainersFlags;
    id <BRItemNotificationReceiving> _receiver;
    BRNotificationQueue *_notifs;
    NSObject<OS_dispatch_queue> *_queue;
    BRCRelativePath *_root;
    CDUnknownBlockType _boostReply;
    BRCXPCClient *_client;
    unsigned short _watchItemOptions;
    BRCItemID *_oldWatchedAncestorItemID;
    BRCItemID *_watchedAncestorItemID;
    NSNumber *_watchedAncestorFileObjectID;
    NSString *_watchedAncestorFilenameToItem;
    BRCNotificationGatherer *_gatherer;
    BOOL _hasUpdatesInFlight;
    BOOL _volumeIsCaseSensitive;
}

- (void).cxx_destruct;
- (void)invalidateReceiverIfWatchingContainerID:(id)arg1;
- (void)watchItemInProcessAtURL:(id)arg1 options:(unsigned short)arg2 reply:(CDUnknownBlockType)arg3;
- (void)watchItemAtURL:(id)arg1 container:(id)arg2 lookup:(id)arg3 options:(unsigned short)arg4 reply:(CDUnknownBlockType)arg5;
- (void)watchScopes:(unsigned short)arg1 trustedContainerIDs:(id)arg2 gatheringDone:(CDUnknownBlockType)arg3;
- (void)close;
- (void)_stopWatchingItems;
- (void)_flush;
- (void)processUpdates:(id)arg1;
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg1 toArray:(id)arg2;
- (int)_isInterestingUpdate:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithReceiver:(id)arg1 root:(id)arg2 manager:(id)arg3;
- (id)initWithXPCReceiver:(id)arg1 client:(id)arg2 root:(id)arg3 manager:(id)arg4;
- (id)_initWithRoot:(id)arg1 manager:(id)arg2;
- (void)addDequeueCallback:(CDUnknownBlockType)arg1;
- (void)addNotification:(id)arg1 asDead:(BOOL)arg2;
- (void)dealloc;
- (oneway void)invalidate;
- (void)boostPriority:(CDUnknownBlockType)arg1;
- (void)watchScopes:(unsigned short)arg1 gatheringDone:(CDUnknownBlockType)arg2;
- (void)watchScopes:(unsigned short)arg1 containerIDs:(id)arg2 gatheringDone:(CDUnknownBlockType)arg3;
- (void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 containerIDs:(id)arg3 gatheringDone:(CDUnknownBlockType)arg4;
- (void)watchItemAtURL:(id)arg1 options:(unsigned short)arg2 reply:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

