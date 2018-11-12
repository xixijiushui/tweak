//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, OPPlayerAPI, UILabel, YKFFanplayFanWorkPO, YKJSONClient, YKPHomePageService, YKPPlayerService;

@interface YKPARPlayView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isRequestingLikeAPI;
    NSIndexPath *_requestingLikeAPIIndexPath;
    YKFFanplayFanWorkPO *_work;
    _Bool _hasLocated;
    _Bool _firstLoad;
    int _from;
    OPPlayerAPI *_player;
    NSMutableArray *_items;
    NSString *_vid;
    long long _postId;
    long long _playId;
    long long _playMode;
    NSMutableArray *_originWorks;
    long long _startIndex;
    NSMutableDictionary *_requestInfo;
    YKPHomePageService *_homePageService;
    YKPPlayerService *_playerService;
    UILabel *_topTipLabel;
    UILabel *_bottomTipLabel;
    long long _myworksCount;
    double _lastContentOffsetY;
    NSIndexPath *_currentIndexPath;
    YKJSONClient *_jsonClient;
    NSDictionary *_requestParams;
    NSString *_shareUrl;
}

@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) double lastContentOffsetY; // @synthesize lastContentOffsetY=_lastContentOffsetY;
@property(nonatomic) long long myworksCount; // @synthesize myworksCount=_myworksCount;
@property(retain, nonatomic) UILabel *bottomTipLabel; // @synthesize bottomTipLabel=_bottomTipLabel;
@property(retain, nonatomic) UILabel *topTipLabel; // @synthesize topTipLabel=_topTipLabel;
@property(retain, nonatomic) YKPPlayerService *playerService; // @synthesize playerService=_playerService;
@property(retain, nonatomic) YKPHomePageService *homePageService; // @synthesize homePageService=_homePageService;
@property(retain, nonatomic) NSMutableDictionary *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) NSMutableArray *originWorks; // @synthesize originWorks=_originWorks;
@property(nonatomic) long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) long long playId; // @synthesize playId=_playId;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) int from; // @synthesize from=_from;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) __weak OPPlayerAPI *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)requestVideoList;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)hideBottomTip;
- (void)showBottomTip;
- (void)resetInfiniteScrollingView:(_Bool)arg1;
- (void)visitActivityPage;
- (void)visitUserHomePage;
- (void)downloadAction;
- (void)shareAction;
- (void)viewPostAction;
- (_Bool)pausedByUser;
- (void)replay;
- (void)resumePlay;
- (void)didTapInPlayerView;
- (void)handleStopEvent;
- (void)pausePlay;
- (_Bool)isViaWWAN;
- (void)startPlay;
- (id)currentCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)currentWorkPO;
- (void)analyticsPlayButtonClickEvent;
- (void)analytics;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refresh;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

