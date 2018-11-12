//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseTableViewController.h"

#import "TTFansMemberResponseHandle.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YKFContentStateDelegate.h"
#import "YKFManagerGroupTableViewCellDelegate.h"

@class NSString, UIView, YKFManagerGroupViewModel;

@interface YKFManagerGroupViewController : YKFBaseTableViewController <UITableViewDataSource, UITableViewDelegate, YKFManagerGroupTableViewCellDelegate, YKFContentStateDelegate, TTFansMemberResponseHandle>
{
    YKFManagerGroupViewModel *_viewModel;
    long long _groupId;
    long long _maxCount;
    NSString *_groupName;
    UIView *_topMaskView;
    UIView *_bottomMaskView;
}

@property(retain, nonatomic) UIView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) YKFManagerGroupViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)buttonClickEventWithFandomId:(long long)arg1 groupId:(long long)arg2 ttpodxmid:(id)arg3;
- (id)pageStatisticProperties;
- (id)spmB;
- (id)pageName;
- (void)fansMemberViewController:(struct YKFBaseViewController *)arg1 commitWithSelectedUserIds:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (long long)maxSelectNumberOfUsers;
- (_Bool)isSelectedForUser:(id)arg1;
- (_Bool)allowSelectionForUser:(id)arg1;
- (long long)fansMemberOperateType;
- (_Bool)canDismissWithGesture;
- (void)contentStateViewChooseRefresh:(id)arg1;
- (void)removeMaskView;
- (void)addMaskViewOnCell:(id)arg1;
- (void)recallFunctionGroupWithGroupId:(long long)arg1 recallId:(long long)arg2;
- (void)relinquishFunctionGroupWithGroupId:(long long)arg1;
- (void)clickRetiereButton;
- (void)popToNaviPageWithViewsToPop:(long long)arg1;
- (void)jumpToPersonalPageWithModel:(id)arg1;
- (void)gotoAddMemberListPageWithGroupId:(long long)arg1 maxCount:(long long)arg2 groupName:(id)arg3;
- (void)gotoStatPage:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setId:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillFirstAppear;
- (void)dealloc;
- (void)refreshData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

