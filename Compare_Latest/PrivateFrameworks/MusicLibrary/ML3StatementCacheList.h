//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3StatementCacheNode;

__attribute__((visibility("hidden")))
@interface ML3StatementCacheList : NSObject
{
    ML3StatementCacheNode *_firstNode;
    ML3StatementCacheNode *_lastNode;
}

@property(readonly, nonatomic) ML3StatementCacheNode *lastNode; // @synthesize lastNode=_lastNode;
@property(readonly, nonatomic) ML3StatementCacheNode *firstNode; // @synthesize firstNode=_firstNode;
- (void).cxx_destruct;
- (void)deleteAllNodes;
- (void)deleteOldestNode;
- (id)oldestNode;
- (void)promoteNodeWithDictionaryKey:(id)arg1;
- (void)appendNode:(id)arg1;
@property(readonly, nonatomic) unsigned int count;
- (id)description;

@end

