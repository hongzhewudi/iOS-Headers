//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBApplication, UIView;

@interface SBUIStaticAnimationController : SBUIMainScreenAnimationController
{
    _Bool _relaunchExpected;
    _Bool _awaitingKeybagRefetch;
    _Bool _appWasActivating;
    UIView *_staticAppView;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (_Bool)_shouldDismissBanner;
- (void)_prepareAnimation;
- (_Bool)_animationShouldStart;
- (_Bool)_willAnimate;
@property(readonly, nonatomic) SBApplication *app;
- (void)dealloc;
- (id)initWithApp:(id)arg1;

@end
