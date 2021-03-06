//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABFMFActionButtonsDelegate.h"

@class ABUnknownPersonViewController, UIButton;

@interface ABFMFActionButtons : NSObject <ABFMFActionButtonsDelegate>
{
    ABUnknownPersonViewController *_upvc;
    UIButton *_messageButton;
    UIButton *_facetimeButton;
    UIButton *_callButton;
}

- (void)showFMFCallButton:(BOOL)arg1 withAction:(id)arg2;
- (void)showFMFFacetimeButton:(BOOL)arg1 withAction:(id)arg2;
- (void)showFMFMessageButton:(BOOL)arg1 withAction:(id)arg2;
@property(readonly, nonatomic) BOOL hasTelephonyCapability;
@property(nonatomic) void *displayedPerson;
- (void)dealloc;
- (id)initWithMessageButton:(id)arg1 facetimeButton:(id)arg2 callButton:(id)arg3;
- (id)init;

@end

