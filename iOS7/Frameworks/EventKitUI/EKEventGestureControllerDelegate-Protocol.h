/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol EKEventGestureControllerDelegate <NSObject>
- (_Bool)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(_Bool)arg2 right:(_Bool)arg3 vertically:(_Bool)arg4 towardPoint:(struct CGPoint)arg5;
- (void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2;
- (void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(_Bool)arg3;
- (_Bool)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(_Bool)arg4 span:(int)arg5;
- (void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(_Bool)arg3;
- (void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(_Bool)arg3;
- (double)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(_Bool)arg3;
- (double)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2;
- (struct CGPoint)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(_Bool)arg3;
- (double)eventGestureController:(id)arg1 dateAtPoint:(struct CGPoint)arg2;
- (_Bool)eventGestureController:(id)arg1 isAllDayAtPoint:(struct CGPoint)arg2 requireInsistence:(_Bool)arg3;
- (void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(_Bool)arg3;
- (double)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(struct CGPoint)arg2;
- (id)createEventForEventGestureController:(id)arg1;
- (void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(_Bool)arg2;
- (id)createOccurrenceViewForEventGestureController:(id)arg1;
- (double)timedRegionOriginForEventGestureController:(id)arg1;
- (id)occurrenceViewSuperviewForEventGestureController:(id)arg1;
- (id)touchTrackingViewForEventGestureController:(id)arg1;

@optional
- (_Bool)eventGestureController:(id)arg1 shouldFadeOccurrenceAfterFling:(id)arg2;
- (_Bool)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1;
- (struct CGRect)marginFrameForEventGestureController:(id)arg1;
- (double)eventGestureController:(id)arg1 convertXForMargin:(double)arg2;
- (_Bool)eventGestureControllerShouldAllowLongPress:(id)arg1;
- (_Bool)moreThanOneDayVisibleForEventGestureController:(id)arg1;
- (double)computeXDragOffsetForEventGestureController:(id)arg1 currentX:(double)arg2 startX:(double)arg3;
- (double)horizontalOffsetForPagingForEventGestureController:(id)arg1;
- (double)pageChangeMarginForEventGestureController:(id)arg1;
@end

