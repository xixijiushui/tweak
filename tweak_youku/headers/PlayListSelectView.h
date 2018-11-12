//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SKTableViewCellClickedDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, SKBaseLoadingView, SokuJSONClient, UIButton, UILabel, UIScreenEdgePanGestureRecognizer, UITableView, ViewType7Model, ViewTypeBaseModel;

@interface PlayListSelectView : UIView <UITableViewDelegate, UITableViewDataSource, SKTableViewCellClickedDelegate>
{
    ViewType7Model *_vModel;
    id _superCell;
    CDUnknownBlockType _backBlock;
    NSString *_jump_type;
    UIView *_hideView;
    UIView *_showView;
    UIView *_lineOne;
    UIView *_lineTwo;
    UIButton *_closeButton;
    UILabel *_showLabel;
    long long _barSelectedIndex;
    long long _myTagsCount;
    NSString *_showTitle;
    UITableView *_myTableview;
    NSMutableArray *_myArr;
    ViewType7Model *_myV7;
    SokuJSONClient *_jsonClient;
    SKBaseLoadingView *_loadingView;
    NSString *_playlistID;
    NSString *_SCG_ID;
    long long _SCG_ID_num;
    NSString *_pl_type;
    NSString *_playlistVID;
    long long _selectedIndex;
    ViewTypeBaseModel *_originModel;
    UIScreenEdgePanGestureRecognizer *_recognizer;
}

@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) ViewTypeBaseModel *originModel; // @synthesize originModel=_originModel;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSString *playlistVID; // @synthesize playlistVID=_playlistVID;
@property(retain, nonatomic) NSString *pl_type; // @synthesize pl_type=_pl_type;
@property(nonatomic) long long SCG_ID_num; // @synthesize SCG_ID_num=_SCG_ID_num;
@property(retain, nonatomic) NSString *SCG_ID; // @synthesize SCG_ID=_SCG_ID;
@property(retain, nonatomic) NSString *playlistID; // @synthesize playlistID=_playlistID;
@property(retain, nonatomic) SKBaseLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SokuJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) ViewType7Model *myV7; // @synthesize myV7=_myV7;
@property(retain, nonatomic) NSMutableArray *myArr; // @synthesize myArr=_myArr;
@property(retain, nonatomic) UITableView *myTableview; // @synthesize myTableview=_myTableview;
@property(retain, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) long long myTagsCount; // @synthesize myTagsCount=_myTagsCount;
@property(nonatomic) long long barSelectedIndex; // @synthesize barSelectedIndex=_barSelectedIndex;
@property(retain, nonatomic) UILabel *showLabel; // @synthesize showLabel=_showLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *lineTwo; // @synthesize lineTwo=_lineTwo;
@property(retain, nonatomic) UIView *lineOne; // @synthesize lineOne=_lineOne;
@property(retain, nonatomic) UIView *showView; // @synthesize showView=_showView;
@property(retain, nonatomic) UIView *hideView; // @synthesize hideView=_hideView;
@property(retain, nonatomic) NSString *jump_type; // @synthesize jump_type=_jump_type;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(nonatomic) __weak id superCell; // @synthesize superCell=_superCell;
@property(retain, nonatomic) ViewType7Model *vModel; // @synthesize vModel=_vModel;
- (void).cxx_destruct;
- (void)notifySearchResultPageClickWithModel:(id)arg1 anddType:(int)arg2 andParamDic:(id)arg3;
- (void)nofityEnterCelebrityDetailCellModel:(id)arg1 userid:(id)arg2;
- (void)notifyPlayingCellModel:(id)arg1 h5:(id)arg2 source_id:(long long)arg3;
- (void)notifyPlayingCellModel:(id)arg1 showid:(id)arg2;
- (void)notifyPlayingCellModel:(id)arg1 videoid:(id)arg2;
- (void)notifyReloadData;
- (void)stopAnimationg;
- (void)startAnimating;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)hidedown;
- (void)showup;
- (void)show;
- (double)getplayerMaxY;
- (double)getMyCollectionviewHeight;
- (double)getShowViewHeight;
- (double)getHideViewHeight;
- (void)setupmyColor;
- (void)refreshData;
- (void)requestDataAgain;
- (void)sendPlayListButtonClickLog;
- (void)setupModelsPrams;
- (void)getDataError;
- (void)requestPlaylistDataWithScgID:(id)arg1 andModel:(id)arg2;
- (void)requestPlaylistDataWithplaylistID:(id)arg1 andVid:(id)arg2 andPltype:(id)arg3 andModel:(id)arg4;
- (void)requestPlaylistDataWithplaylistID:(id)arg1 andVid:(id)arg2 andModel:(id)arg3;
- (void)requestPlaylistDataWithplaylistID:(id)arg1 andVid:(id)arg2 andPltype:(id)arg3 scgid:(id)arg4 andModel:(id)arg5;
- (void)layoutSubviews;
- (void)swipeBack;
- (void)addEdge;
- (void)initComponent;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

