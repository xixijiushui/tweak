//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, NSTimer, UIButton, UITableView, UIWindow, YKNDFrameLoadingView;

@interface YKHLFollowGuideView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    id <YKHLFollowGuideViewDelegate> _followGuidedelegate;
    long long _subCount;
    long long _subTalCount;
    UITableView *_tableView;
    UIView *_topHeaderView;
    UIView *_tapBackView;
    NSArray *_listArray;
    UIView *_alertBgView;
    YKNDFrameLoadingView *_loadingView;
    UIButton *_followAllBtn;
    UIWindow *_targetWindow;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIWindow *targetWindow; // @synthesize targetWindow=_targetWindow;
@property(nonatomic) __weak UIButton *followAllBtn; // @synthesize followAllBtn=_followAllBtn;
@property(retain, nonatomic) YKNDFrameLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *alertBgView; // @synthesize alertBgView=_alertBgView;
@property(retain, nonatomic) NSArray *listArray; // @synthesize listArray=_listArray;
@property(retain, nonatomic) UIView *tapBackView; // @synthesize tapBackView=_tapBackView;
@property(retain, nonatomic) UIView *topHeaderView; // @synthesize topHeaderView=_topHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long subTalCount; // @synthesize subTalCount=_subTalCount;
@property(nonatomic) long long subCount; // @synthesize subCount=_subCount;
@property(nonatomic) __weak id <YKHLFollowGuideViewDelegate> followGuidedelegate; // @synthesize followGuidedelegate=_followGuidedelegate;
- (void).cxx_destruct;
- (void)pageBaoGuangMiniappDataReportSpm:(id)arg1 andArg1:(id)arg2;
- (void)pageBaoGuangFollowListSelected;
- (void)pageMiniappDataReportSpm:(id)arg1 andArg1:(id)arg2 andUids:(id)arg3;
- (void)pageMiniappDataReportSpm:(id)arg1 andArg1:(id)arg2;
- (void)subscribeClickWith:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)subscribeWithUid:(id)arg1;
- (void)clickOneFollow;
- (long long)hasSelecedFollowCount;
- (void)updateFollowAllBtn;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clickJumpBtn;
- (id)createImageWithColor:(id)arg1;
- (void)setupUI;
- (void)hideView;
- (void)hideViewFromTapBackView;
- (void)showWithArray:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

