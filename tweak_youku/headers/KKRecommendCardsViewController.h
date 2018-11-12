//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CardsController.h"

#import "KKRecPlayendViewDelegate.h"
#import "YKPageDelegate.h"

@class HLKKHotSpotMenuItem, KKFeedModule, KKFeedPlayerModule, KKYKHLMoreActionModule, NSString, NSTimer, YKKKHotSpotViewController;

@interface KKRecommendCardsViewController : CardsController <KKRecPlayendViewDelegate, YKPageDelegate>
{
    NSTimer *_playNextTime;
    _Bool _isActive;
    long long _lastRefreshIndex;
    double _lastRequestTime;
    HLKKHotSpotMenuItem *_hotSpotMenuItem;
    NSString *_SPM_A_B;
    NSString *_SPM_C;
    NSString *_prefixControlName;
    KKFeedPlayerModule *_playerModule;
    KKFeedModule *_feedModule;
    KKYKHLMoreActionModule *_moreModule;
    NSString *_uid;
    _Bool *_isFirstViedoPlay;
}

@property(nonatomic) _Bool *isFirstViedoPlay; // @synthesize isFirstViedoPlay=_isFirstViedoPlay;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) KKYKHLMoreActionModule *moreModule; // @synthesize moreModule=_moreModule;
@property(retain, nonatomic) KKFeedModule *feedModule; // @synthesize feedModule=_feedModule;
@property(retain, nonatomic) KKFeedPlayerModule *playerModule; // @synthesize playerModule=_playerModule;
@property(retain, nonatomic) NSString *prefixControlName; // @synthesize prefixControlName=_prefixControlName;
@property(retain, nonatomic) NSString *SPM_C; // @synthesize SPM_C=_SPM_C;
@property(retain, nonatomic) NSString *SPM_A_B; // @synthesize SPM_A_B=_SPM_A_B;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) HLKKHotSpotMenuItem *hotSpotMenuItem; // @synthesize hotSpotMenuItem=_hotSpotMenuItem;
@property(nonatomic) double lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(nonatomic) long long lastRefreshIndex; // @synthesize lastRefreshIndex=_lastRefreshIndex;
- (void).cxx_destruct;
- (void)gotoShowVideo:(id)arg1;
- (void)openShowVideo:(id)arg1;
- (void)openVideo:(id)arg1 shouldPopCommentView:(_Bool)arg2 continuePlay:(_Bool)arg3;
- (void)resetExposeStatistics;
- (void)scrollViewDidEndAutoPlay:(id)arg1 requestsucess:(_Bool)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)getCardIndexCurrent:(id)arg1;
- (id)getShareItemArray;
- (void)pageDidTriggerRefreshInPagesManager:(id)arg1;
- (void)pageDidDeactivateInPagesManager:(id)arg1;
- (void)pageWillDeactivateInPagesManager:(id)arg1;
- (void)pageDidActivateInPagesManager:(id)arg1;
- (void)pageWillActivateInPagesManager:(id)arg1;
- (void)pageEndReuseInPagesManager:(id)arg1;
- (void)pageBeginReuseInPagesManager:(id)arg1;
- (void)prepareForViewDidAppear;
- (void)prepareForViewWillAppear;
- (void)playNextVideo;
- (void)dissmissTimer;
- (void)setupTimer;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setFirstVideoPlayed;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setTableFooterView;
- (void)refreshUI:(long long)arg1;
- (void)requestMoreData;
- (void)requestCards;
- (void)viewDidLoad;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;
- (void)statistics_openShowDetail:(id)arg1;
- (void)statistics_endPlayViewExpose;
- (void)statistics_pageEnd;
- (void)statistics_pageStart;
- (void)statistics_sendStatictisClick:(id)arg1 spmc:(id)arg2 spmd:(id)arg3 arg1:(id)arg4 extension:(id)arg5;
- (void)statistics_openVideoInDetail:(id)arg1;
- (void)statistics_playVideoWithVid:(id)arg1 inCell:(id)arg2 animated:(_Bool)arg3;
- (void)statistics_didClikUnLikeAction;
- (void)statistics_refreshAction;
- (void)showLimitMessageBox;
- (void)limitReGetData;
- (_Bool)videoAutoplayExitInVideosarray:(id)arg1;
- (_Bool)videoExitInVideosarray:(id)arg1;
- (id)getParseArray:(id)arg1;
- (void)loadLocalData;
- (id)parseDailyCardContext:(id)arg1;
- (id)parseCardContext:(id)arg1;
- (void)landingPage_loadDataWithType:(unsigned long long)arg1;
- (void)loadDataWithType:(unsigned long long)arg1;
- (void)refreshmobileTrafficMessageViewLayout;
- (void)mobileTrafficMessageAnimate:(id)arg1;
- (_Bool)isOpenMobileTraffic;
- (id)getFeedContentView:(id)arg1;
- (_Bool)isVisiableCurrentView;
- (void)removeLisener;
- (void)setupBottomInset;
- (void)reachabilityChanged;
- (void)appDidChangeOrientation:(id)arg1;
- (void)appWillResignActiveNotification;
- (void)appDidBecomeActive;
- (void)appDidEnterBackground;
- (void)addLisener;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak YKKKHotSpotViewController *superViewController; // @dynamic superViewController;
@property(readonly) Class superclass;

@end

