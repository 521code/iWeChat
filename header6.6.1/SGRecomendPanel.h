//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WAContactMgrExtension-Protocol.h"

@class MMScrollView, MMUILabel, NSMutableArray, NSString, UIButton;
@protocol SGRecommendDelegate;

@interface SGRecomendPanel : UIView <WAContactMgrExtension, UIScrollViewDelegate>
{
    NSMutableArray *_arrItems;
    NSString *_title;
    unsigned int _strategyId;
    MMScrollView *_contentScrollView;
    MMUILabel *_titleLabel;
    NSMutableArray *_arrButton;
    UIButton *_moreButton;
    _Bool _bBeginInterativePush;
    double _fInterativePushStartX;
    id <SGRecommendDelegate> _panelDelegate;
}

@property(nonatomic) __weak id <SGRecommendDelegate> panelDelegate; // @synthesize panelDelegate=_panelDelegate;
- (void).cxx_destruct;
- (void)onModifyWeAppContact:(id)arg1;
- (void)reportDisplayKV;
- (void)layoutButton;
- (void)layoutSubviews;
- (void)updateSelfHeight;
- (void)updateWAContactCache;
- (void)setWeAppInfo:(id)arg1;
- (void)updatePanelView;
- (void)updateTitleView;
- (id)makeButtonWithItem:(id)arg1;
- (void)onClickWeAppItem:(id)arg1;
- (void)onClickMore:(id)arg1;
- (void)handlePanG:(id)arg1;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

