//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationAttributes.h>

__attribute__((visibility("hidden")))
@interface KNBuildAttributes : KNAnimationAttributes
{
}

+ (id)delayAttributeKeyForTriggerType:(unsigned int)arg1;
+ (id)defaultAttributesForEffect:(id)arg1 buildType:(int)arg2;
+ (BOOL)customAttributeKeyIsValid:(id)arg1;
+ (id)supportedCustomAttributes;
- (void)p_writeBuildAttributesToArchive:(struct BuildAttributesArchive *)arg1;
- (void)p_writeSharedAttributesToArchive:(struct BuildAttributesArchive *)arg1;
- (void)p_readDeprecatedAttributesForArchive:(const struct BuildAttributesArchive *)arg1 intoDictionary:(id)arg2;
- (void)p_readBuildAttributesForArchive:(const struct BuildAttributesArchive *)arg1 intoDictionary:(id)arg2;
- (void)p_readSharedAttributesForArchive:(struct AnimationAttributesArchive *)arg1 intoDictionary:(id)arg2;
- (void)encodeToArchive:(struct BuildAttributesArchive *)arg1;
- (id)initFromBuildAttributesArchive:(const struct BuildAttributesArchive *)arg1;

@end
