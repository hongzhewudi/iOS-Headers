//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPTransportControls.h"

@class MPQueueFeeder;

@interface MPUNowPlayingTransportControls : MPTransportControls
{
    MPQueueFeeder *_feeder;
    id <MPUNowPlayingTransportControlsDelegate> _delegate;
}

+ (Class)buttonClass;
+ (int)buttonType;
+ (unsigned long long)defaultVisibleParts;
+ (BOOL)buttonImagesUseBackgroundImage;
@property(nonatomic) __weak id <MPUNowPlayingTransportControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateItemRelatedParts;
@property(readonly, nonatomic) float _playPauseBottomVInset;
@property(readonly, nonatomic) float _outterControlMargin;
@property(readonly, nonatomic) float _nextButtonVInset;
@property(readonly, nonatomic) float _innerControlMargin;
- (void)_skipLimitDidChangeNotification:(id)arg1;
- (BOOL)usesTintColorForControls;
- (id)tintColorForPart:(unsigned long long)arg1;
- (void)setItem:(id)arg1;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end

