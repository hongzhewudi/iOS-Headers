/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFPGraphicsState : NSObject
{
    struct CGAffineTransform mPageTransform;
    struct CGAffineTransform mWorldTransform;
}

- (id).cxx_construct;
- (void)multiplyWorldTransformBy:(struct CGAffineTransform)arg1 order:(int)arg2;
- (void)setWorldTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)worldTransform;
- (void)setPageTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)pageTransform;
- (void)removeTransform:(struct CGAffineTransform)arg1;
- (void)dealloc;
- (id)initWithGraphicsState:(id)arg1;
- (id)initWithDefaults;

@end
