//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SUMediaItemCellConfiguration.h"

@interface MSTrackListCellConfiguration : SUMediaItemCellConfiguration
{
    CDStruct_b08558f4 _position;
}

+ (float)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (id)copyDefaultContext;
@property(nonatomic) CDStruct_b08558f4 position; // @synthesize position=_position;
- (BOOL)showContentRating;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (void)reloadImages;
- (unsigned int)indexOfLabelForPurchaseAnimation;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (void)drawBackgroundWithModifiers:(unsigned int)arg1;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)init;

@end

