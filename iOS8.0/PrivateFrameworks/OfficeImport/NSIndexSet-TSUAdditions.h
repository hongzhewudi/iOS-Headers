//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSIndexSet.h"

@interface NSIndexSet (TSUAdditions)
+ (id)indexSetWithIndices:(unsigned int *)arg1 count:(unsigned int)arg2;
- (id)indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)intersectsIndexesInIndexSet:(id)arg1;
@property(readonly, nonatomic) BOOL isSingleContiguousRange;
- (id)indexSetByAddingIndexes:(id)arg1;
- (id)initWithIndices:(unsigned int *)arg1 count:(unsigned int)arg2;
@end
