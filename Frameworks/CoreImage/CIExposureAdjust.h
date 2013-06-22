/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIExposureAdjust : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputEV;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputEV; // @synthesize inputEV;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (BOOL)_isIdentity;
- (void)setDefaults;

@end
