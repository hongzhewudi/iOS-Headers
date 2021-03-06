/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface PTPObjectInfoDataset : NSObject
{
    unsigned int _storageID;
    unsigned short _objectFormat;
    unsigned short _protectionStatus;
    unsigned long long _objectCompressedSize;
    unsigned short _thumbFormat;
    unsigned int _thumbCompressedSize;
    unsigned int _thumbOffset;
    unsigned int _thumbPixWidth;
    unsigned int _thumbPixHeight;
    unsigned int _imagePixWidth;
    unsigned int _imagePixHeight;
    unsigned int _imageBitDepth;
    unsigned int _parentObject;
    unsigned short _associationType;
    unsigned int _associationDesc;
    unsigned int _sequenceNumber;
    NSString *_filename;
    NSString *_captureDate;
    NSString *_modificationDate;
    NSString *_keywords;
    unsigned int _thmFileSize;
    unsigned int _objectHandle;
}

- (void)setObjectHandle:(unsigned int)arg1;
- (unsigned int)objectHandle;
- (void)setKeywords:(id)arg1;
- (id)keywords;
- (void)setModificationDate:(id)arg1;
- (id)modificationDate;
- (void)setCaptureDate:(id)arg1;
- (id)captureDate;
- (void)setFilename:(id)arg1;
- (id)filename;
- (void)setSequenceNumber:(unsigned int)arg1;
- (unsigned int)sequenceNumber;
- (void)setAssociationDesc:(unsigned int)arg1;
- (unsigned int)associationDesc;
- (void)setAssociationType:(unsigned short)arg1;
- (unsigned short)associationType;
- (void)setParentObject:(unsigned int)arg1;
- (unsigned int)parentObject;
- (void)setImageBitDepth:(unsigned int)arg1;
- (unsigned int)imageBitDepth;
- (void)setImagePixHeight:(unsigned int)arg1;
- (unsigned int)imagePixHeight;
- (void)setImagePixWidth:(unsigned int)arg1;
- (unsigned int)imagePixWidth;
- (void)setThumbPixHeight:(unsigned int)arg1;
- (unsigned int)thumbPixHeight;
- (void)setThumbPixWidth:(unsigned int)arg1;
- (unsigned int)thumbPixWidth;
- (void)setThumbOffset:(unsigned int)arg1;
- (unsigned int)thumbOffset;
- (void)setThmFileSize:(unsigned int)arg1;
- (unsigned int)thmFileSize;
- (void)setThumbCompressedSize:(unsigned int)arg1;
- (unsigned int)thumbCompressedSize;
- (void)setThumbFormat:(unsigned short)arg1;
- (unsigned short)thumbFormat;
- (void)setObjectCompressedSize:(unsigned long long)arg1;
- (unsigned int)objectCompressedSize;
- (unsigned long long)objectCompressedSize64;
- (void)setProtectionStatus:(unsigned short)arg1;
- (unsigned short)protectionStatus;
- (void)setObjectFormat:(unsigned short)arg1;
- (unsigned short)objectFormat;
- (void)setStorageID:(unsigned int)arg1;
- (unsigned int)storageID;
- (id)description;
- (id)content64;
- (id)content;
- (void)dealloc;
- (id)initWithData64:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

