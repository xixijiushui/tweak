//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIPComponentCardsController.h"

@class UIButton, UIImageView, VIPHomeWelfareTips, VIPNewHomeViewController, YKVIPCMSHomePopItem, YKVIPCMSHomePopsModel, YKVIPHomePopInfoModel;

@interface VIPSelectionController : VIPComponentCardsController
{
    _Bool _isLoadSignImage;
    _Bool _isScroll;
    _Bool _pageActivate;
    _Bool _isResetOffset;
    _Bool _isAnimation;
    _Bool _isDownDirection;
    unsigned long long _secondState;
    UIButton *_signButton;
    UIImageView *_signImgView;
    UIImageView *_smallSignImgView;
    long long _signImgComplete;
    long long _smallSignImgComplete;
    YKVIPCMSHomePopItem *_signPopItem;
    YKVIPCMSHomePopsModel *_tipsModel;
    VIPHomeWelfareTips *_welfareTips;
    YKVIPHomePopInfoModel *_popInfoModel;
    struct CGPoint _previousPoint;
}

@property(nonatomic) struct CGPoint previousPoint; // @synthesize previousPoint=_previousPoint;
@property(nonatomic) _Bool isDownDirection; // @synthesize isDownDirection=_isDownDirection;
@property(retain, nonatomic) YKVIPHomePopInfoModel *popInfoModel; // @synthesize popInfoModel=_popInfoModel;
@property(retain, nonatomic) VIPHomeWelfareTips *welfareTips; // @synthesize welfareTips=_welfareTips;
@property(retain, nonatomic) YKVIPCMSHomePopsModel *tipsModel; // @synthesize tipsModel=_tipsModel;
@property(retain, nonatomic) YKVIPCMSHomePopItem *signPopItem; // @synthesize signPopItem=_signPopItem;
@property(nonatomic) long long smallSignImgComplete; // @synthesize smallSignImgComplete=_smallSignImgComplete;
@property(nonatomic) long long signImgComplete; // @synthesize signImgComplete=_signImgComplete;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(nonatomic) _Bool isResetOffset; // @synthesize isResetOffset=_isResetOffset;
@property(nonatomic) _Bool pageActivate; // @synthesize pageActivate=_pageActivate;
@property(nonatomic) _Bool isScroll; // @synthesize isScroll=_isScroll;
@property(nonatomic) _Bool isLoadSignImage; // @synthesize isLoadSignImage=_isLoadSignImage;
@property(retain, nonatomic) UIImageView *smallSignImgView; // @synthesize smallSignImgView=_smallSignImgView;
@property(retain, nonatomic) UIImageView *signImgView; // @synthesize signImgView=_signImgView;
@property(retain, nonatomic) UIButton *signButton; // @synthesize signButton=_signButton;
@property(nonatomic) unsigned long long secondState; // @synthesize secondState=_secondState;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateDirection;
- (void)fetchData;
- (void)addTipsView;
- (void)setupWelfareTipsView;
- (void)showALiCustomEventSign;
- (void)signButtonAction:(id)arg1;
- (struct CGRect)setSignBtnFrameWith:(double)arg1;
- (struct CGRect)setSignSubviewFrameWith:(double)arg1;
- (void)starFrameBigAnimation;
- (void)isStarFrameBigAnimation;
- (void)starFrameSmallAnimation;
- (void)scrollViewDidEnd:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setSignViewData;
- (long long)preferredStatusBarStyle;
- (void)networkChange:(id)arg1;
- (void)pageWillDeactivateInPagesManager:(id)arg1;
- (void)pageDidActivateInPagesManager:(id)arg1;
- (void)pageWillActivateInPagesManager:(id)arg1;
- (void)requestCardsDidFailWithError:(id)arg1;
- (void)requestCardsSuccess:(id)arg1;
- (void)requestCardsWillStart;
- (void)receiveUserLoginStateChangedNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(nonatomic) __weak VIPNewHomeViewController *superViewController; // @dynamic superViewController;

@end
