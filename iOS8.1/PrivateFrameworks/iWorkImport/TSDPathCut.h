//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSDPathCut : NSObject
{
    int mSegment;
    float mT;
    float mSkew;
}

@property(readonly, nonatomic) float skew; // @synthesize skew=mSkew;
@property(readonly, nonatomic) float t; // @synthesize t=mT;
@property(readonly, nonatomic) int segment; // @synthesize segment=mSegment;
- (id)description;
- (id)initWithSegment:(int)arg1 atT:(float)arg2 withSkew:(float)arg3;

@end
