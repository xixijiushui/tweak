//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class LFCustomServiceBar, LFPurchasesContentView, LFPurchasesHeaderView, LFPurchasesTopBar;

@interface LFPurchasesView : UIScrollView
{
    CDUnknownBlockType _purchaseBlock;
    LFPurchasesHeaderView *_headerView;
    LFPurchasesTopBar *_topBar;
    LFPurchasesContentView *_contentView;
    LFCustomServiceBar *_bottomBar;
    struct CGRect _viewFrame;
}

@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(retain, nonatomic) LFCustomServiceBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) LFPurchasesContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) LFPurchasesTopBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) LFPurchasesHeaderView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType purchaseBlock; // @synthesize purchaseBlock=_purchaseBlock;
- (void).cxx_destruct;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)updateCoins;
- (void)updateUserInfo:(id)arg1 name:(id)arg2;
- (void)layoutSubviews;
- (void)reloadProducts:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 products:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

