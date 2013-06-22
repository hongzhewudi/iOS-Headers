/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQWrapPointGenerator-Protocol.h"

@class GQDRoot, GQDSStylesheet, GQPProcessor, GQSTable, GQZArchive;

@interface GQSDocument : NSObject <GQWrapPointGenerator>
{
    GQPProcessor *mProcessor;
    GQDRoot *mRoot;
    struct __CFURL *mBundleUrl;
    GQZArchive *mArchive;
    id <GQUOutputBundle> mOutputBundle;
    struct __CFArray *mObjectStack;
    id mGeneratorState;
    GQSTable *mTableState;
    Class mCurrentDrawablesGenerator;
    Class mCurrentTableGenerator;
    id <GQWrapPointGenerator> mCurrentWrapPointGenerator;
    BOOL mMustRegisterDrawables;
    BOOL mGeneratorBeginWasCalled;
    BOOL mShouldStreamTables;
    BOOL mDoExternalTextWrap;
    BOOL mGeneratingThumbnail;
    BOOL mThumbnailGenerationDone;
    unsigned int mTextScale;
    set_e74177a8 *mWrapPoints;
    struct __CFDictionary *mBundleResourceUriMap;
    GQDSStylesheet *mStylesheet;
    BOOL mIsReadingStorageAttachments;
    struct __CFString *mFilename;
}

- (id)initWithRoot:(id)arg1 processor:(id)arg2 outputBundle:(id)arg3 filename:(struct __CFString *)arg4;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 bundleUrl:(struct __CFURL *)arg3 outputBundle:(id)arg4;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 archive:(id)arg3 outputBundle:(id)arg4 filename:(struct __CFString *)arg5;
- (void)dealloc;
- (id)processor;
- (id)root;
- (struct __CFURL *)createUriToDocumentBundleResource:(struct __CFString *)arg1;
- (id)outputBundle;
- (id)peekObject;
- (id)topObjectOfClass:(Class)arg1;
- (id)popRetainedObject;
- (void)pushObject:(id)arg1;
- (int)objectStackDepth;
- (id)tableState;
- (void)setTableState:(id)arg1;
- (id)generatorState;
- (void)setGeneratorState:(id)arg1;
- (Class)currentDrawablesGenerator;
- (void)setCurrentDrawablesGenerator:(Class)arg1;
- (Class)currentTableGenerator;
- (void)setCurrentTableGenerator:(Class)arg1;
- (BOOL)mustRegisterDrawables;
- (void)setMustRegisterDrawables:(BOOL)arg1;
- (BOOL)shouldStreamTables;
- (void)setShouldStreamTables:(BOOL)arg1;
- (BOOL)doExternalTextWrap;
- (void)setDoExternalTextWrap:(BOOL)arg1;
- (BOOL)generatorBeginWasCalled;
- (void)setGeneratorBeginWasCalled;
- (BOOL)isGeneratingThumbnail;
- (void)setGeneratingThumbnail:(BOOL)arg1;
- (BOOL)isThumbnailGenerationDone;
- (void)setThumbnailGenerationDone:(BOOL)arg1;
- (void)addWrapPoint:(id)arg1;
- (const set_e74177a8 *)wrapPoints;
- (vector_8a2ced25 *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (void)clearWrapPoints;
- (struct __CFString *)uriForBundleResource:(struct __CFString *)arg1 ofType:(struct __CFString *)arg2;
- (id)currentWrapPointGenerator;
- (void)setCurrentWrapPointGenerator:(id)arg1;
- (id)stylesheet;
- (void)setStylesheet:(id)arg1;
- (void)setIsReadingStorageAttachments:(BOOL)arg1;
- (BOOL)isReadingStorageAttachments;
- (struct __CFString *)filename;

@end
