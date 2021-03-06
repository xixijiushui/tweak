//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseViewController.h"

#import "TTFCommunityBlacklistCellDelegate.h"
#import "TTFansMemberResponseHandle.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YKFContentStateDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSString, TTFCommunityBlacklistViewModel, UIButton, UITableView, UIView, YKFCommunityFandomMgmtServiceAddBlackAPI, YKFCommunityUserPageListPO, YKFModelResponsePagingPO;

@interface TTFCommunityBlacklistViewController : YKFBaseViewController <UITableViewDelegate, UITableViewDataSource, YKFContentStateDelegate, TTFCommunityBlacklistCellDelegate, TTFansMemberResponseHandle>
{
    _Bool _isEdit;
    _Bool _isFirstRequest;
    _Bool _isPullDownRequest;
    _Bool _isPullUpRequest;
    UIView *_containerView;
    UITableView *_tableView;
    UIView *_bottomView;
    UIButton *_removeButton;
    UIButton *_addButton;
    UIView *_bottomViewTopLine;
    UIView *_bottomViewSeparatorLine;
    UIView *_topMaskView;
    TTFCommunityBlacklistViewModel *_blacklistViewModel;
    YKFCommunityUserPageListPO *_listPOModel;
    YKFModelResponsePagingPO *_pageModel;
    NSMutableArray *_userMArray;
    unsigned long long _currentPage;
    NSLayoutConstraint *_containerTopConstraints;
    YKFCommunityFandomMgmtServiceAddBlackAPI *_addBlackApi;
}

@property(retain, nonatomic) YKFCommunityFandomMgmtServiceAddBlackAPI *addBlackApi; // @synthesize addBlackApi=_addBlackApi;
@property(nonatomic) __weak NSLayoutConstraint *containerTopConstraints; // @synthesize containerTopConstraints=_containerTopConstraints;
@property(nonatomic) _Bool isPullUpRequest; // @synthesize isPullUpRequest=_isPullUpRequest;
@property(nonatomic) _Bool isPullDownRequest; // @synthesize isPullDownRequest=_isPullDownRequest;
@property(nonatomic) _Bool isFirstRequest; // @synthesize isFirstRequest=_isFirstRequest;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *userMArray; // @synthesize userMArray=_userMArray;
@property(retain, nonatomic) YKFModelResponsePagingPO *pageModel; // @synthesize pageModel=_pageModel;
@property(retain, nonatomic) YKFCommunityUserPageListPO *listPOModel; // @synthesize listPOModel=_listPOModel;
@property(retain, nonatomic) TTFCommunityBlacklistViewModel *blacklistViewModel; // @synthesize blacklistViewModel=_blacklistViewModel;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(retain, nonatomic) UIView *bottomViewSeparatorLine; // @synthesize bottomViewSeparatorLine=_bottomViewSeparatorLine;
@property(retain, nonatomic) UIView *bottomViewTopLine; // @synthesize bottomViewTopLine=_bottomViewTopLine;
@property(nonatomic) __weak UIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)fansMemberViewController:(struct YKFBaseViewController *)arg1 commitWithSelectedUserIds:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (long long)maxSelectNumberOfUsers;
- (_Bool)isSelectedForUser:(id)arg1;
- (_Bool)allowSelectionForUser:(id)arg1;
- (long long)fansMemberOperateType;
- (void)setId:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshData;
- (void)removeBlackWithUserId:(long long)arg1;
- (void)jumpToPersonalPage:(id)arg1;
- (void)insertRowsAtBottom;
- (void)reloadRowsAtTop;
- (void)handleRequestFail:(id)arg1;
- (void)handleRequestSuccess:(id)arg1;
- (void)loadRemoteDate;
- (void)requestData;
- (double)topMarginForContentView;
- (void)contentStateViewChooseRefresh:(id)arg1;
- (void)removeMaskView;
- (void)addMaskView;
- (void)addButtonAction:(id)arg1;
- (void)removeButtonAction:(id)arg1;
- (void)registerNibs;
- (void)initView;
- (_Bool)canDismissWithGesture;
- (void)viewDidLoad;
- (id)init;
- (id)spmB;
- (id)pageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

