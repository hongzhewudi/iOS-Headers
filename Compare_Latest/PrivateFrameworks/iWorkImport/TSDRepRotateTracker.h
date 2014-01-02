/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSDDecorator-Protocol.h"
#import "TSDLayoutManipulatingTracker-Protocol.h"

@class CAShapeLayer, TSDRep;

// Not exported
@interface TSDRepRotateTracker : NSObject <TSDDecorator, TSDLayoutManipulatingTracker>
{
    TSDRep *mRep;
    _Bool mDidBeginRotation;
    _Bool mMovedMinimumDistance;
    struct CGPoint mCenterForRotation;
    double mSnapThreshold;
    double mRotateDeltaInRadians;
    double mCurrentLogicalAngleInDegrees;
    double mCurrentPhysicalAngleInDegrees;
    double mPreviousSnap;
    double mOriginalAngleInDegrees;
    CAShapeLayer *mGuideLayer;
    _Bool mHaveSproingedHUD;
    _Bool mShouldShowHUD;
    id <TSDRepTrackerDelegate> mDelegate;
    TSDRep *mOriginalNonFloatingRep;
}

@property(nonatomic) double snapThreshold; // @synthesize snapThreshold=mSnapThreshold;
@property(readonly, nonatomic) double currentLogicalAngleInDegrees; // @synthesize currentLogicalAngleInDegrees=mCurrentLogicalAngleInDegrees;
@property(nonatomic) struct CGPoint centerForRotation; // @synthesize centerForRotation=mCenterForRotation;
@property(nonatomic) _Bool shouldShowHUD; // @synthesize shouldShowHUD=mShouldShowHUD;
@property(retain, nonatomic) TSDRep *rep; // @synthesize rep=mRep;
- (void)p_makeSiblingRepsPerformBlock:(id)arg1;
- (_Bool)p_shouldApplyRotateToSiblingsOfRep;
- (void)p_hideGuideLayer;
- (void)p_updateGuideLayerWithAngle:(double)arg1 didSnap:(_Bool)arg2;
- (void)p_hideHUD;
- (void)p_sproingHUD;
- (void)p_updateHUDWithAngle:(double)arg1;
- (void)p_begin;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)decoratorOverlayLayers;
- (_Bool)operationShouldBeDynamic;
- (_Bool)supportsAlignmentGuides;
- (void)commitChangesForReps:(id)arg1;
- (_Bool)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (struct CGAffineTransform)rotateTransform;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (void)addRotateDelta:(double)arg1;
- (void)dealloc;
- (id)initWithRep:(id)arg1;

@end
