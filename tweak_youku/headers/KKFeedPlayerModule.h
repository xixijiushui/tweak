//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KKOverlayViewDelegate.h"
#import "KKRecPlayendViewDelegate.h"

@class KKRecOverlayView, KKRecPlayEndView, KKRecommendCardsViewController, NSString, OPPlayerAPI, UILabel, UIView;

@interface KKFeedPlayerModule : NSObject <KKRecPlayendViewDelegate, KKOverlayViewDelegate>
{
    _Bool _isPlayEnd;
    _Bool _isAutoPlay;
    _Bool _isEmbedPlyerStoped;
    _Bool _isWillEnterPurchaseUnicomView;
    _Bool _removePlayEndView;
    _Bool _isColseSwitchPlayWithNoWifi;
    KKRecommendCardsViewController *_superViewController;
    KKRecOverlayView *_overlayView;
    OPPlayerAPI *_embedPlayer;
    KKRecPlayEndView *_playEndView;
    long long _isauto;
    NSString *_currentVideoPicUrl;
    UIView *_mobileTrafficMessageView;
    UILabel *_mobileTrafficMessageLable;
}

@property(retain, nonatomic) UILabel *mobileTrafficMessageLable; // @synthesize mobileTrafficMessageLable=_mobileTrafficMessageLable;
@property(retain, nonatomic) UIView *mobileTrafficMessageView; // @synthesize mobileTrafficMessageView=_mobileTrafficMessageView;
@property(nonatomic) _Bool isColseSwitchPlayWithNoWifi; // @synthesize isColseSwitchPlayWithNoWifi=_isColseSwitchPlayWithNoWifi;
@property(retain, nonatomic) NSString *currentVideoPicUrl; // @synthesize currentVideoPicUrl=_currentVideoPicUrl;
@property(nonatomic) _Bool removePlayEndView; // @synthesize removePlayEndView=_removePlayEndView;
@property(nonatomic) _Bool isWillEnterPurchaseUnicomView; // @synthesize isWillEnterPurchaseUnicomView=_isWillEnterPurchaseUnicomView;
@property(nonatomic) _Bool isEmbedPlyerStoped; // @synthesize isEmbedPlyerStoped=_isEmbedPlyerStoped;
@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) _Bool isPlayEnd; // @synthesize isPlayEnd=_isPlayEnd;
@property(nonatomic) long long isauto; // @synthesize isauto=_isauto;
@property(retain, nonatomic) KKRecPlayEndView *playEndView; // @synthesize playEndView=_playEndView;
@property(nonatomic) __weak OPPlayerAPI *embedPlayer; // @synthesize embedPlayer=_embedPlayer;
@property(nonatomic) __weak KKRecOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak KKRecommendCardsViewController *superViewController; // @synthesize superViewController=_superViewController;
- (void).cxx_destruct;
- (id)keyWindow;
- (void)dpauseVideo;
- (void)stopVideo;
- (void)pauseVideo;
- (void)showPlayEndView;
- (id)getFeedContentView:(id)arg1;
- (void)embedPlayerPlay:(id)arg1 from:(float)arg2;
- (void)showOverlaysPlayingView;
- (double)getFeedVideoPlayed:(id)arg1;
- (void)saveFeedVideoPlayHistory:(id)arg1 played:(double)arg2 isoutpage:(_Bool)arg3;
- (void)videoEndWithUcStatistics:(id)arg1;
- (void)overlayViewClose;
- (void)overlayViewToFullscreen:(id)arg1;
- (void)overlayViewToDetailComment:(id)arg1;
- (void)overLayViewResume;
- (void)didClikUnLikeAction;
- (void)refreshAction;
- (void)dealloc;
- (void)KuKanFeedPlayEnd;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

