//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComponentCardsController.h"

@class UIImageView, YKSTFeedBaseHeaderView, YKSTFeedHeaderModel;

@interface YKFeedContainerCardsController : ComponentCardsController
{
    _Bool _isTopIsCanNotMoveTabView;
    _Bool _isTopIsCanNotMoveTabViewPre;
    _Bool _IcanScroll;
    _Bool _SubCanScroll;
    _Bool _tabContentInitialized;
    float _totalTopHeight;
    YKSTFeedHeaderModel *_feedHeaderModel;
    YKSTFeedBaseHeaderView *_feedHeaderView;
    UIImageView *_loadingBgView;
}

@property(retain, nonatomic) UIImageView *loadingBgView; // @synthesize loadingBgView=_loadingBgView;
@property(retain, nonatomic) YKSTFeedBaseHeaderView *feedHeaderView; // @synthesize feedHeaderView=_feedHeaderView;
@property(nonatomic) float totalTopHeight; // @synthesize totalTopHeight=_totalTopHeight;
@property(nonatomic) _Bool tabContentInitialized; // @synthesize tabContentInitialized=_tabContentInitialized;
@property(nonatomic) _Bool SubCanScroll; // @synthesize SubCanScroll=_SubCanScroll;
@property(nonatomic) _Bool IcanScroll; // @synthesize IcanScroll=_IcanScroll;
@property(nonatomic) _Bool isTopIsCanNotMoveTabViewPre; // @synthesize isTopIsCanNotMoveTabViewPre=_isTopIsCanNotMoveTabViewPre;
@property(nonatomic) _Bool isTopIsCanNotMoveTabView; // @synthesize isTopIsCanNotMoveTabView=_isTopIsCanNotMoveTabView;
@property(retain, nonatomic) YKSTFeedHeaderModel *feedHeaderModel; // @synthesize feedHeaderModel=_feedHeaderModel;
- (void).cxx_destruct;
- (void)notifyForceScrollToTop:(CDUnknownBlockType)arg1;
- (void)notifyRefreshHeadView;
- (void)notifyParseOverHeadModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)notifyTableViewCellInited;
- (void)setNavigationBarAlpha:(float)arg1;
- (void)shouldResumeSlider;
- (void)shouldPauseSlider;
- (void)handleScrollView:(id)arg1;
- (void)scrollToTop;
- (void)absorbMenuToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)hasHeaderView;
- (float)getContainerCardOffset;
- (void)acceptMsg:(id)arg1;
- (void)requestCardsDidSucceedWithCardsArray:(id)arg1;
- (void)requestCards;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

@end
