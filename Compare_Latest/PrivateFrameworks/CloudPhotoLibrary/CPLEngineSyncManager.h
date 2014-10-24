//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"
#import "CPLBackgroundDownloadsTaskDelegate.h"
#import "CPLBackgroundUploadsTaskDelegate.h"
#import "CPLEngineComponent.h"
#import "CPLEngineSyncEmergencyTaskDelegate.h"
#import "CPLMinglePulledChangesTaskDelegate.h"
#import "CPLPullFromTransportTaskDelegate.h"
#import "CPLPushToTransportTaskDelegate.h"

@class CPLBackgroundDownloadsTask, CPLBackgroundUploadsTask, CPLEngineLibrary, CPLEngineSyncEmergencyTask, CPLGetAssetCountsTask, CPLMinglePulledChangesTask, CPLPlatformObject, CPLPullFromTransportTask, CPLPushToTransportTask, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CPLEngineSyncManager : NSObject <CPLEngineSyncEmergencyTaskDelegate, CPLPushToTransportTaskDelegate, CPLPullFromTransportTaskDelegate, CPLMinglePulledChangesTaskDelegate, CPLBackgroundUploadsTaskDelegate, CPLBackgroundDownloadsTaskDelegate, CPLAbstractObject, CPLEngineComponent>
{
    id <CPLEngineStoreUserIdentifier> _transportUserIdentifier;
    BOOL _setupIsDone;
    id <CPLEngineTransportSetupTask> _setupTask;
    NSMutableArray *_setupBarriers;
    CDUnknownBlockType _closingCompletionHandler;
    NSObject<OS_dispatch_queue> *_lock;
    NSError *_lastError;
    CPLEngineSyncEmergencyTask *_managementTask;
    NSMutableArray *_archivedManagementTasks;
    NSMutableDictionary *_completionHandlerPerTaskIdentifier;
    CPLPushToTransportTask *_pushTask;
    CPLGetAssetCountsTask *_getAssetCountsTask;
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
    CPLBackgroundUploadsTask *_backgroundUploadsTask;
    CPLBackgroundDownloadsTask *_backgroundDownloadsTask;
    unsigned int _shouldRestartSessionFromState;
    NSMutableArray *_lastErrors;
    BOOL _foreground;
    BOOL _hasTransactionForSyncSession;
    BOOL _shouldTryToMingleImmediately;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    unsigned int _state;
}

+ (id)platformImplementationProtocol;
+ (id)shortDescriptionForState:(unsigned int)arg1;
+ (id)descriptionForState:(unsigned int)arg1;
@property(nonatomic) BOOL shouldTryToMingleImmediately; // @synthesize shouldTryToMingleImmediately=_shouldTryToMingleImmediately;
@property(nonatomic, setter=_setState:) unsigned int state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)endClientWork:(id)arg1;
- (void)beginClientWork:(id)arg1;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)task:(id)arg1 didProgress:(float)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (BOOL)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForBackgroundDownloads;
- (BOOL)_launchNecessaryTasksForBackgroundDownloads;
- (id)_descriptionForBackgroundDownloadsTasks;
- (BOOL)_didFinishBackgroundUploadsTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForBackgroundUploadsTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForBackgroundUploads;
- (BOOL)_launchNecessaryTasksForBackgroundUploads;
- (id)_descriptionForBackgroundUploadsTasks;
- (id)task:(id)arg1 wantsToDownloadBatchesFromSyncAnchor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForPullTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPull;
- (BOOL)_launchNecessaryTasksForPull;
- (id)_descriptionForPullTasks;
- (BOOL)_didFinishGetAssetCountsTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForGetAssetCountsTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForGetAssetCounts;
- (BOOL)_launchNecessaryTasksForGetAssetCounts;
- (id)_descriptionForGetAssetCountsTasks;
- (id)task:(id)arg1 wantsToPushBatch:(id)arg2 continuationBlock:(CDUnknownBlockType)arg3;
- (BOOL)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForPushTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPush;
- (BOOL)_launchNecessaryTasksForPush;
- (id)_descriptionForPushTasks;
- (BOOL)_didFinishManagementTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (void)_cancelAllTasksForManagement;
- (BOOL)_launchManagementTask;
- (void)_loadManagementTasks;
- (void)_saveManagementTasks;
- (id)_descriptionForManagementTasks;
- (BOOL)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(char *)arg2;
- (void)_cancelAllTasksForSetup;
- (BOOL)_launchSetupTask;
- (id)_descriptionForSetupTasks;
- (BOOL)_prepareAndLaunchSyncTask:(id *)arg1;
- (void)setSyncSessionShouldBeForeground:(BOOL)arg1;
- (void)addSetupBarrier:(CDUnknownBlockType)arg1;
- (void)startEmergencyTask:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resetTransportUserIdentifierAndRestartSync:(BOOL)arg1;
- (void)cancelCurrentSyncSession;
- (void)kickOffSyncSession;
- (void)startSyncSessionWithMinimalPhase:(unsigned int)arg1;
- (void)_restartSyncSessionFromStateLocked:(unsigned int)arg1 cancelIfNecessary:(BOOL)arg2;
- (void)_advanceToNextStateLocked;
- (void)_notifyEndOfSyncSession;
- (BOOL)_launchNecessaryTasksForCurrentStateLocked;
- (id)_descriptionForLaunchedTasks;
- (id)_descriptionForCurrentState;
- (void)_moveAllTasksToBackgroundLocked;
- (void)_cancelAllTasksLocked;
- (void)_resetErrorForSyncSession;
- (void)_setErrorForSyncSession:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
