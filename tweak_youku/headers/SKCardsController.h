//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SKCardControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, SKBaseLoadingView, SKCardTableView, SokuJSONClient, UIColor;

@interface SKCardsController : UIViewController <UITableViewDataSource, UITableViewDelegate, SKCardControllerDelegate>
{
    SKBaseLoadingView *_loadingView;
    SKBaseLoadingView *_requestLoadingView;
    _Bool _enableNetworkError;
    SokuJSONClient *_jsonClient;
    UIViewController *_superViewController;
    unsigned long long _refreshType;
    unsigned long long _clearType;
    SKCardTableView *_tableView;
    UIColor *_tableViewTopBgColor;
    NSMutableArray *_cardsArray;
    NSMutableArray *_cardControllersArray;
}

@property(nonatomic) _Bool enableNetworkError; // @synthesize enableNetworkError=_enableNetworkError;
@property(readonly, nonatomic) NSMutableArray *cardControllersArray; // @synthesize cardControllersArray=_cardControllersArray;
@property(readonly, nonatomic) NSMutableArray *cardsArray; // @synthesize cardsArray=_cardsArray;
@property(retain, nonatomic) UIColor *tableViewTopBgColor; // @synthesize tableViewTopBgColor=_tableViewTopBgColor;
@property(readonly, nonatomic) SKCardTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long clearType; // @synthesize clearType=_clearType;
@property(nonatomic) unsigned long long refreshType; // @synthesize refreshType=_refreshType;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController=_superViewController;
@property(retain, nonatomic) SokuJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
- (void).cxx_destruct;
- (id)getPageStatisticParams;
- (void)assembleCards;
- (void)stopRequestLoadingAnimation;
- (void)startRequestLoadingAnimation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshCardWithType:(long long)arg1;
- (void)refreshCardWithType:(long long)arg1 animation:(long long)arg2;
- (void)requestMoreData;
- (void)requestCardDataDidFailWithSKCardContext:(id)arg1 error:(id)arg2;
- (void)requestCardDataDidSucceedWithSKCardContext:(id)arg1;
- (void)requestCardDataWithController:(id)arg1;
- (void)requestCardsDidFailWithError:(id)arg1;
- (void)requestCardsDidSucceedWithCardsArray:(id)arg1;
- (void)requestCardsWillStart;
- (void)requestCards;
- (_Bool)isCardFooter:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)isCardHeader:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)isCardSpacing:(id)arg1 atIndexPath:(id)arg2;
- (id)cardControllerAtIndex:(long long)arg1;
- (void)touchInfoViewAction;
- (void)setupInfoView;
- (id)parseSKCardContext:(id)arg1 cardType:(long long)arg2;
- (void)hideInfoView;
- (void)showInfoViewWithText:(id)arg1 image:(id)arg2 selector:(SEL)arg3;
- (void)showDataErrorWithSelector:(SEL)arg1;
- (void)showNetworkErrorWithSelector:(SEL)arg1;
- (void)receiveCardsSuperViewDidDisappearNotification:(id)arg1;
- (void)receiveCardsSuperViewWillAppearNotification:(id)arg1;
- (void)cards_viewDidDisappear:(_Bool)arg1;
- (void)cards_viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (void)finishInfiniteScrollingAction;
- (void)triggerInfiniteScrollingAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
