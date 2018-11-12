//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

#import "VideoEpisodeContentViewControllerDelegate.h"

@class CMSComponent, CardList, CardsController, DetailCardsController, DetailEpisodeTabView, DetailEposideIntroduceController, NSString, UIButton, UIImageView, UIView, VideoEpisodeContentViewController;

@interface YKDetailRelateMoreListViewController : UIBaseViewController <VideoEpisodeContentViewControllerDelegate>
{
    CardList *_cardListData;
    CardsController *_ownerController;
    NSString *_titleText;
    id <YKDetailRelateMoreListViewControllerDelegate> _delegate;
    DetailCardsController *_cardsController;
    CMSComponent *_component;
    DetailEpisodeTabView *_episodeTabView;
    NSString *_vid;
    VideoEpisodeContentViewController *_contentViewController;
    UIView *_headerView;
    UIButton *_episodeBtn;
    UIButton *_introduceBtn;
    UIButton *_choiceBtn;
    UIImageView *_arrowView;
    UIView *_lineView;
    DetailEposideIntroduceController *_introduceController;
    long long _selectIndex;
}

@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) DetailEposideIntroduceController *introduceController; // @synthesize introduceController=_introduceController;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIButton *choiceBtn; // @synthesize choiceBtn=_choiceBtn;
@property(retain, nonatomic) UIButton *introduceBtn; // @synthesize introduceBtn=_introduceBtn;
@property(retain, nonatomic) UIButton *episodeBtn; // @synthesize episodeBtn=_episodeBtn;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) VideoEpisodeContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) __weak DetailEpisodeTabView *episodeTabView; // @synthesize episodeTabView=_episodeTabView;
@property(nonatomic) __weak CMSComponent *component; // @synthesize component=_component;
@property(nonatomic) __weak DetailCardsController *cardsController; // @synthesize cardsController=_cardsController;
@property(nonatomic) __weak id <YKDetailRelateMoreListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) __weak CardsController *ownerController; // @synthesize ownerController=_ownerController;
@property(retain, nonatomic) CardList *cardListData; // @synthesize cardListData=_cardListData;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)videoEpisodeContentViewControllerCollectionDidScroll:(id)arg1;
- (void)videoEpisodeContentViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)back;
- (void)swipeBack;
- (void)backViaGesture;
- (void)refreshWithVidChange:(id)arg1;
- (void)scrollToCurrentPlay;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)choiceViewChanged:(long long)arg1;
- (void)choiceBtnClicked:(id)arg1;
- (void)introduceBtnClicked:(id)arg1;
- (void)episodeBtnClicked:(id)arg1;
- (void)exposeHeaderStatic;
- (void)initComponent;
- (long long)getIndexOfCurrentVid;
- (id)initWithCardList:(id)arg1 vid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
