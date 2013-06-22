/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

@interface ADAdEvent : PBCodable
{
    BOOL _hasTimestampEvent;
    unsigned long long _timestampEvent;
    NSString *_context;
    BOOL _hasDeviceOrientation;
    int _deviceOrientation;
    BOOL _hasConnectionType;
    int _connectionType;
}

@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) BOOL hasConnectionType; // @synthesize hasConnectionType=_hasConnectionType;
@property(nonatomic) int deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic) BOOL hasDeviceOrientation; // @synthesize hasDeviceOrientation=_hasDeviceOrientation;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long timestampEvent; // @synthesize timestampEvent=_timestampEvent;
@property(nonatomic) BOOL hasTimestampEvent; // @synthesize hasTimestampEvent=_hasTimestampEvent;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasContext;
- (void)dealloc;

@end
