//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIPBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView, UIView;

@interface VIPMyActivitiesController : VIPBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isEdit;
    NSMutableArray *_deleteArray;
    CDUnknownBlockType _deleteActivityHandler;
    CDUnknownBlockType _deleteActivityCompleted;
    CDUnknownBlockType _getActivityCount;
    long long _box_id;
    UITableView *_activityTableView;
    NSMutableArray *_activityArray;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableArray *activityArray; // @synthesize activityArray=_activityArray;
@property(retain, nonatomic) UITableView *activityTableView; // @synthesize activityTableView=_activityTableView;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(nonatomic) long long box_id; // @synthesize box_id=_box_id;
@property(copy, nonatomic) CDUnknownBlockType getActivityCount; // @synthesize getActivityCount=_getActivityCount;
@property(copy, nonatomic) CDUnknownBlockType deleteActivityCompleted; // @synthesize deleteActivityCompleted=_deleteActivityCompleted;
@property(copy, nonatomic) CDUnknownBlockType deleteActivityHandler; // @synthesize deleteActivityHandler=_deleteActivityHandler;
@property(retain, nonatomic) NSMutableArray *deleteArray; // @synthesize deleteArray=_deleteArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)activityEditAction;
- (void)deleteSelectItems;
- (void)selectActivity:(id)arg1 status:(_Bool)arg2;
- (void)selectAllActivity:(_Bool)arg1;
- (void)activityStatusChanged:(id)arg1;
- (void)setupCountDown;
- (void)removeDeletedActivity:(id)arg1;
- (long long)getActivityDataCount;
- (_Bool)isActivityEmpty;
- (void)jsonToModel:(id)arg1 key:(id)arg2;
- (void)setData:(id)arg1;
- (void)loadActivityData;
- (void)setUpSectionHeader:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

