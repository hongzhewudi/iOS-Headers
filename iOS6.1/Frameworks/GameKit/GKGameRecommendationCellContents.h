/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKPurchasableGameCellContents.h>

@class NSString;

@interface GKGameRecommendationCellContents : GKPurchasableGameCellContents
{
    NSString *_reasonForRecommending;
}

+ (id)gameRecommendationCellContents;
@property(retain, nonatomic) NSString *reasonForRecommending; // @synthesize reasonForRecommending=_reasonForRecommending;
- (void)prepareForReuse;
- (void)updateLines;
- (void)dealloc;

@end

