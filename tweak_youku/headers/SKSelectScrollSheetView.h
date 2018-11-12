//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SKPageScrollViewDelegate.h"
#import "SearchTabScrollerbarDelegate.h"

@class NSString, SKPageScrollView, SKShowSeriesDataModel, SearchTabScrollerbar, SearchViewController, SokuJSONClient, TVViewPointDataModel, UIButton, UILabel, UIScreenEdgePanGestureRecognizer;

@interface SKSelectScrollSheetView : UIView <SKPageScrollViewDelegate, SearchTabScrollerbarDelegate>
{
    id _showModel;
    unsigned long long _myListtype;
    CDUnknownBlockType _playBlock;
    CDUnknownBlockType _backBlock;
    UIView *_hideView;
    UIView *_showView;
    UIView *_lineOne;
    UIView *_lineTwo;
    UIButton *_closeButton;
    UILabel *_showLabel;
    UILabel *_subLabel;
    SearchTabScrollerbar *_mybar;
    long long _barSelectedIndex;
    SKPageScrollView *_pageScrollView;
    long long _myTagsCount;
    SearchViewController *_sController;
    NSString *_showTitle;
    NSString *_TV_View_Point_ShowID;
    SokuJSONClient *_jsonClient;
    TVViewPointDataModel *_tModel;
    UIScreenEdgePanGestureRecognizer *_recognizer;
    SKShowSeriesDataModel *_ssModel;
    NSString *_update_notice;
    NSString *_historyVid;
}

@property(retain, nonatomic) NSString *historyVid; // @synthesize historyVid=_historyVid;
@property(retain, nonatomic) NSString *update_notice; // @synthesize update_notice=_update_notice;
@property(retain, nonatomic) SKShowSeriesDataModel *ssModel; // @synthesize ssModel=_ssModel;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) TVViewPointDataModel *tModel; // @synthesize tModel=_tModel;
@property(retain, nonatomic) SokuJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) NSString *TV_View_Point_ShowID; // @synthesize TV_View_Point_ShowID=_TV_View_Point_ShowID;
@property(retain, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) __weak SearchViewController *sController; // @synthesize sController=_sController;
@property(nonatomic) long long myTagsCount; // @synthesize myTagsCount=_myTagsCount;
@property(retain, nonatomic) SKPageScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
@property(nonatomic) long long barSelectedIndex; // @synthesize barSelectedIndex=_barSelectedIndex;
@property(retain, nonatomic) SearchTabScrollerbar *mybar; // @synthesize mybar=_mybar;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *showLabel; // @synthesize showLabel=_showLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *lineTwo; // @synthesize lineTwo=_lineTwo;
@property(retain, nonatomic) UIView *lineOne; // @synthesize lineOne=_lineOne;
@property(retain, nonatomic) UIView *showView; // @synthesize showView=_showView;
@property(retain, nonatomic) UIView *hideView; // @synthesize hideView=_hideView;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(copy, nonatomic) CDUnknownBlockType playBlock; // @synthesize playBlock=_playBlock;
@property(nonatomic) unsigned long long myListtype; // @synthesize myListtype=_myListtype;
@property(retain, nonatomic) id showModel; // @synthesize showModel=_showModel;
- (void).cxx_destruct;
- (void)swipeBack;
- (void)addEdge;
- (void)hidedown:(_Bool)arg1;
- (void)hidedown;
- (void)showup;
- (void)show;
- (void)didScrollToPageIndex:(long long)arg1;
- (void)pageScrollViewDidScroll:(id)arg1;
- (void)pageScrollView:(id)arg1 willDisappearPage:(id)arg2 forPageAtIndexPath:(id)arg3;
- (void)pageScrollView:(id)arg1 willAppearPage:(id)arg2 forPageAtIndexPath:(id)arg3;
- (double)widthForPageInPageScrollView:(id)arg1;
- (id)pageScrollView:(id)arg1 pageViewAtIndexPath:(id)arg2;
- (long long)numberOfPagesInPageScrollView:(id)arg1;
- (struct CGRect)getPageScrollViewRect;
- (void)setupPagingScrollView;
- (void)selectView:(id)arg1 didSelectAtIndex:(long long)arg2;
- (double)getplayerMaxY;
- (double)getShowViewHeight;
- (double)getHideViewHeight;
- (void)refreshHeaderView;
- (_Bool)checkSpecialWithModel:(id)arg1;
- (void)refreshData;
- (void)layoutSubviews;
- (void)stopAnimationg;
- (void)startAnimating;
- (void)requestTV_View_Point_dataAgain;
- (void)requestShowSeriesMoreAgain;
- (void)requestShowSeriesMore;
- (void)requestTV_View_Point_datawithShowID:(id)arg1;
- (void)setupShowView;
- (void)setupHideView;
- (void)initComponent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
