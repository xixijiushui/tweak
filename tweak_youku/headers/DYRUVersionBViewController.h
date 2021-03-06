//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKDYRUBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DYRUVersionBEngine, NSString, UITableView;

@interface DYRUVersionBViewController : YKDYRUBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    DYRUVersionBEngine *_engine;
    UITableView *_tableView;
}

+ (void)flush;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) DYRUVersionBEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)resetHeaderView;
- (void)loadData:(id)arg1;
- (void)fetchData;
- (void)updateTableView:(long long)arg1 usingRequestInfo:(id)arg2;
- (void)actionWithError:(id)arg1;
- (void)handleNetErr:(id)arg1;
- (void)handleSubscribeShipChanged:(id)arg1;
- (void)handleMergeDataNotification:(id)arg1;
- (void)doInitTableView;
- (void)doInitEngine;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

