//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "LSDetailTabControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LSLivePlayerDataManager, NSArray, NSString, UITableView;

@interface LSPhonePreliveController : UIViewController <UITableViewDelegate, UITableViewDataSource, LSDetailTabControllerDelegate>
{
    UIViewController *_viewControllers;
    LSLivePlayerDataManager *_dataManager;
    UITableView *_tableView;
    NSArray *_items;
    struct CGRect _originFrame;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) LSLivePlayerDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UIViewController *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (long long)tabController:(id)arg1 priorityHighlightLevel:(id)arg2 index:(long long)arg3;
- (id)formatTimeDuration:(double)arg1;
- (void)relayoutSubviews;
- (void)clearControls;
- (void)tabController:(id)arg1 configData:(id)arg2 index:(long long)arg3;
- (id)tabControllerTabTitle;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)videosForSection:(long long)arg1;
- (void)refreshDataByItems:(id)arg1;
- (void)removeAllSelectedEffect;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dataManager:(id)arg2;
- (id)tabUrl;
- (long long)tabType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

