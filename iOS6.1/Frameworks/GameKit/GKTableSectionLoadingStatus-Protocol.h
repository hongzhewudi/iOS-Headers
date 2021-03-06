/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSError;

@protocol GKTableSectionLoadingStatus <NSObject>
@property(nonatomic) BOOL loaded;
@property(nonatomic) BOOL loading;

@optional
@property(nonatomic) BOOL needsRedisplay;
@property(nonatomic) BOOL hasContent;
@property(retain, nonatomic) NSError *loadError;
- (void)stopLoading;
- (void)startLoading;
- (void)setNeedsDisplay;
@end

