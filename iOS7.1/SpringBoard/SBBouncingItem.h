//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIDynamicItem.h"

@interface SBBouncingItem : NSObject <UIDynamicItem>
{
    struct CGRect _bounds;
    struct CGPoint _center;
    double _multiplier;
    CDUnknownBlockType _translateBlock;
}

@property(copy) CDUnknownBlockType translateBlock; // @synthesize translateBlock=_translateBlock;
@property double multiplier; // @synthesize multiplier=_multiplier;
@property(nonatomic) struct CGAffineTransform transform;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;
- (void)dealloc;

@end

