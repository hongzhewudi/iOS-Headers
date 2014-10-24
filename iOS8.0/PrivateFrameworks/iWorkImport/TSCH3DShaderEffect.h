//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCH3DShaderEffectStateInfo.h"

__attribute__((visibility("hidden")))
@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>
{
}

+ (id)stateSharingID;
+ (Class)stateClass;
+ (id)effect;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2 updateCurrentStates:(id)arg3;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)updateState:(id)arg1 effectsStates:(id)arg2;
- (void)addVariables:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)alwaysUploadData;
- (id)stateSharingID;
- (Class)stateClass;

@end
