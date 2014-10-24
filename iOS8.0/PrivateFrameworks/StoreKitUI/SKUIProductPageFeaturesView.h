//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, SKUIClientContext, SKUIColorScheme, UILabel;

@interface SKUIProductPageFeaturesView : UIView
{
    UIView *_bottomBorderView;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    int _features;
    NSMutableArray *_featureViews;
    unsigned int _gameCenterFeatures;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}

@property(nonatomic) unsigned int gameCenterFeatures; // @synthesize gameCenterFeatures=_gameCenterFeatures;
@property(nonatomic) int features; // @synthesize features=_features;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (id)_gameCenterStringWithFeatures:(unsigned int)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setFeatures:(int)arg1 gameCenterFeatures:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
