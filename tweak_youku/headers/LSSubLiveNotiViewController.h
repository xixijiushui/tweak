//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LSMtopService, LSSubscribeManager, NSString, UITableView;

@interface LSSubLiveNotiViewController : LSBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    LSSubscribeManager *_subscribeManager;
    LSMtopService *_mtopService;
    NSString *_userPhoneNum;
}

@property(copy, nonatomic) NSString *userPhoneNum; // @synthesize userPhoneNum=_userPhoneNum;
@property(retain, nonatomic) LSMtopService *mtopService; // @synthesize mtopService=_mtopService;
@property(retain, nonatomic) LSSubscribeManager *subscribeManager; // @synthesize subscribeManager=_subscribeManager;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)bindPhoneNum;
- (void)changePhoneNum;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)requestUserPhoneNum;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

