/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3Entity.h>

@class ML3Predicate, NSArray, NSString;

@interface ML3Container : ML3Entity
{
}

+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2 createBuiltinSmartPlaylists:(BOOL)arg3;
+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2;
+ (void)populateDynamicContainersInLibrary:(id)arg1 createBuiltinSmartPlaylists:(BOOL)arg2;
+ (void)populateDynamicContainersInLibrary:(id)arg1;
+ (void)populateStaticItemsOfDynamicContainersOnHandle:(struct sqlite3 *)arg1;
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1;
+ (BOOL)createMissingBuiltInSmartPlaylists:(id)arg1;
+ (void)_insertNewSmartPlaylist:(id)arg1 criteriaBlob:(id)arg2 limited:(BOOL)arg3 trackOrder:(unsigned long)arg4 distinguishedKind:(int)arg5 inLibrary:(id)arg6 cachedNameOrders:(id)arg7;
+ (id)predicateForCriteriaList:(struct OpaqueSearchCriteriaList *)arg1 dynamicCriteria:(BOOL)arg2;
+ (BOOL)hasCriterionInCriteriaList:(struct OpaqueSearchCriteriaList *)arg1 forITDBTrackField:(int)arg2;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (BOOL)smartCriteriaCanBeEvaluated:(id)arg1;
+ (id)nextFilepathForPlaylistType:(int)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)defaultOrderingProperties;
+ (int)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
- (BOOL)setTracksWithSwappedPersistentIDData:(id)arg1;
- (BOOL)setTracksWithPersistentIDs:(const long long *)arg1 count:(unsigned int)arg2 notify:(BOOL)arg3;
- (BOOL)setTracksWithPersistentIDs:(const long long *)arg1 count:(unsigned int)arg2;
- (BOOL)moveTrackFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (BOOL)addTracksWithPersistentIDs:(long long *)arg1 count:(unsigned int)arg2 notify:(BOOL)arg3;
- (BOOL)addTracksWithPersistentIDs:(long long *)arg1 count:(unsigned int)arg2;
- (BOOL)addTrackWithPersistentID:(long long)arg1;
- (BOOL)removeTracksWithPersistentIDs:(const long long *)arg1 atFilteredIndexes:(id)arg2;
- (BOOL)removeTracksAtIndexes:(id)arg1;
- (BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2;
- (BOOL)setContainsTrack:(BOOL)arg1 forPersistentID:(long long)arg2 notify:(BOOL)arg3;
- (BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2 indexesTransformBlock:(id)arg3;
- (void)_accessCurrentSwappedPersisentIDsUsingBlock:(id)arg1;
- (BOOL)removeAllTracks;
- (BOOL)_setSwappedItemPersistentIDs:(const long long *)arg1 size:(int)arg2;
- (BOOL)_setSwappedItemPersistentIDs:(const long long *)arg1 size:(int)arg2 notify:(BOOL)arg3;
- (void)bindPopulateStatement:(struct sqlite3_stmt *)arg1 withStaticTrackPersistentID:(id)arg2;
- (id)populateSQLWithStaticTrackPersistentID:(id)arg1;
- (void)getDisplayOrderingProperties:(id *)arg1 isDescending:(char *)arg2;
@property(readonly) long long limitValue;
@property(readonly) NSArray *limitOrderingDirectionality;
@property(readonly) NSArray *limitOrderingProperties;
@property(readonly) NSString *limitingProperty;
- (BOOL)isCustomContainerOrderingDescending;
@property(readonly, getter=isLimitOrderingDescending) BOOL limitOrderingDescending;
@property(readonly, getter=isLimitedByCount) BOOL limitedByCount;
@property(readonly) ML3Predicate *dynamicPredicate;
@property(readonly) ML3Predicate *staticPredicate;
- (struct OpaqueSearchCriteriaList *)importedCriteriaList;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;

@end

