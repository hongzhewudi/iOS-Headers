/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLAlbumListChangeNotification.h>

@class NSIndexSet, PLFilteredAlbumList, PLIndexMapper;

@interface PLFilteredAlbumListChangeNotification : PLAlbumListChangeNotification
{
    PLFilteredAlbumList *_albumList;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAlbumListChangeNotification *_backingNotification;
}

+ (id)notificationForFilteredAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)_diffDescription;
- (id)description;
- (BOOL)countDidChange;
- (BOOL)shouldReload;
- (id)albumList;
- (id)object;
- (void)dealloc;
- (id)initWithFilteredAlbumList:(id)arg1 albumListChangeNotification:(id)arg2;
- (id)init;

@end

