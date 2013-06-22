/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <GameKit/GKTableSection-Protocol.h>

@class NSString;

@interface GKTableSectionHeaderBackgroundButton : NSObject <GKTableSection>
{
    Class _contentViewClass;
    SEL _action;
    NSString *_statusText;
}

@property(retain, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) Class contentViewClass; // @synthesize contentViewClass=_contentViewClass;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)allowsSelection;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (int)sectionRowCountInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (id)sectionHeaderViewInTableView:(id)arg1;
@property(readonly, nonatomic) BOOL isHidden;
- (void)dealloc;

// Remaining properties
@property(nonatomic, getter=isLoading) BOOL loading;

@end
