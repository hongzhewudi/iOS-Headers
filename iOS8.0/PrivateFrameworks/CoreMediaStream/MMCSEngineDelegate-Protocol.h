//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMCSEngine, MMCSRequestorContext, NSArray, NSError, NSString;

@protocol MMCSEngineDelegate <NSObject>
- (void)didFinishPuttingAllAssets;
- (void)MMCSEngine:(MMCSEngine *)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id <MMCSAsset>)arg4;
- (void)MMCSEngine:(MMCSEngine *)arg1 didCreateRequestorContext:(MMCSRequestorContext *)arg2 forAssets:(NSArray *)arg3;
- (void)MMCSEngine:(MMCSEngine *)arg1 didFinishPuttingAsset:(id <MMCSAsset>)arg2 putReceipt:(NSString *)arg3 error:(NSError *)arg4;
- (void)didFinishGettingAllAssets;
- (void)MMCSEngine:(MMCSEngine *)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id <MMCSAsset>)arg4;
- (void)MMCSEngine:(MMCSEngine *)arg1 didFinishGettingAsset:(id <MMCSAsset>)arg2 path:(NSString *)arg3 error:(NSError *)arg4;

@optional
- (void)MMCSEngine:(MMCSEngine *)arg1 logPerformanceMetrics:(NSString *)arg2;
- (void)MMCSEngine:(MMCSEngine *)arg1 logMessage:(NSString *)arg2 logLevel:(int)arg3;
- (BOOL)MMCSEngine:(MMCSEngine *)arg1 shouldLogAtLogLevel:(int)arg2;
- (id <MMCSAsset>)MMCSEngine:(MMCSEngine *)arg1 didRequestAssetWithItemID:(unsigned long long)arg2;
@end
