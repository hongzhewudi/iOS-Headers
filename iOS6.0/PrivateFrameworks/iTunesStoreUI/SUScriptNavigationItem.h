/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, UINavigationItem;

@interface SUScriptNavigationItem : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)_rootScriptObjectForObject:(id)arg1;
+ (void)_disconnectNavigationItem:(id)arg1 scriptObject:(id)arg2;
+ (void)disconnectNavigationItem:(id)arg1 forScriptObject:(id)arg2;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_copyScriptObjectForButtonItem:(id)arg1;
- (id)_copyScriptButtonForButtonItem:(id)arg1;
- (void)setRightItems:(id)arg1 animated:(BOOL)arg2;
- (void)setRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftMostItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftItem:(id)arg1 animated:(BOOL)arg2;
@property(retain) id titleView;
@property(retain) NSString *title;
- (void)setRightItems:(id)arg1;
@property(retain) id <SUScriptNavigationItem> rightItem;
@property(retain) NSString *prompt;
@property(retain) id <SUScriptNavigationItem> leftMostItem;
@property id leftItemsSupplementBackButton;
- (void)setLeftItems:(id)arg1;
@property(retain) id <SUScriptNavigationItem> leftItem;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
@property id hidesBackButton;
@property(copy) NSString *backButtonTitle;
- (id)rightItems;
- (id)leftItems;
- (id)_className;
- (void)tearDownUserInterface;
@property(readonly, nonatomic) UINavigationItem *nativeNavigationItem;
- (id)initWithNativeNavigationItem:(id)arg1;
- (id)init;

@end

