/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UIReflectingView.h"

@class UIImageView;

@interface MPReflectionImageView : _UIReflectingView
{
    UIImageView *_imageView;
    BOOL _squareImage;
}

+ (float)defaultReflectionHeight;
@property(nonatomic) BOOL squareImage; // @synthesize squareImage=_squareImage;
- (void)setReflectionVisible:(BOOL)arg1 withDuration:(float)arg2;
- (void)setFrame:(struct CGRect)arg1 withReflectionHeight:(float)arg2;
- (void)setAlbumArtImage:(id)arg1;
- (void)setAlbumVisible:(BOOL)arg1 reflectionVisible:(BOOL)arg2;
- (id)albumArtImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

