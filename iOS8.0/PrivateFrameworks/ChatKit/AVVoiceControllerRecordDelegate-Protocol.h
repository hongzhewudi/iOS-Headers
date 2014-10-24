//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVVCAudioBuffer, AVVoiceController, NSError;

@protocol AVVoiceControllerRecordDelegate <NSObject>
- (void)voiceControllerRecordBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;

@optional
- (void)voiceControllerLPCMRecordBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)voiceControllerEndRecordInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerBeginRecordInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(AVVoiceController *)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerEncoderErrorDidOccur:(AVVoiceController *)arg1 error:(NSError *)arg2;
- (void)voiceControllerDidDetectEndpoint:(AVVoiceController *)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerDidDetectEndpoint:(AVVoiceController *)arg1 ofType:(int)arg2;
- (void)voiceControllerDidDetectStartpoint:(AVVoiceController *)arg1;
- (void)voiceControllerDidStopRecording:(AVVoiceController *)arg1 forReason:(int)arg2;
- (void)voiceControllerDidStartRecording:(AVVoiceController *)arg1 successfully:(BOOL)arg2;
@end
