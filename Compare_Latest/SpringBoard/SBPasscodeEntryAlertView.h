/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlertView.h"

@class UIView<SBUIPasscodeLockView>, _UIBackdropView, _UIBackdropViewSettings;

@interface SBPasscodeEntryAlertView : SBAlertView
{
    UIView<SBUIPasscodeLockView> *_passcodeView;
    _UIBackdropViewSettings *_backdropViewSettings;
    _UIBackdropView *_blurView;
    id <SBPasscodeEntryAlertViewDelegate> _delegate;
}

@property(nonatomic) id <SBPasscodeEntryAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView<SBUIPasscodeLockView> *passcodeLockView; // @synthesize passcodeLockView=_passcodeView;
- (void)_animatePasscodeViewsToVisible:(BOOL)arg1;
- (void)_dismissAnimationCompleted;
- (int)_backdropStyle;
- (id)_buildPasscodeView;
- (void)layoutForInterfaceOrientation:(int)arg1;
- (void)dismiss;
- (void)alertDisplayWillBecomeVisible;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
