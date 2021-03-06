//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseViewController.h"

#import "TTFPostReplyBaseTableViewCellDelegate.h"
#import "TTFReplyerViewDelegate.h"
#import "UITextViewDelegate.h"
#import "YKFContentStateDelegate.h"
#import "YKFTaskExpMessageValidObject.h"
#import "YYTextViewDelegate.h"

@class NSLayoutConstraint, NSString, TTFPostDetailService, TTFPostReplyBaseTableViewCell, TTFPostReplyViewModel, UITableView, YKFDanmakuDetailViewModel, YKFModelResponsePagingPO, YKFPostCommentCell;

@interface YKFDanmakuDetailViewController : YKFBaseViewController <TTFPostReplyBaseTableViewCellDelegate, YKFContentStateDelegate, YYTextViewDelegate, YKFTaskExpMessageValidObject, UITextViewDelegate, TTFReplyerViewDelegate>
{
    _Bool _isSendingMsg;
    _Bool _showKeyboard;
    _Bool _isFirstLoad;
    _Bool _canDealKeyboradShowEvent;
    int _starcomingStatus;
    long long _danmakuId;
    long long _starArrivalId;
    long long _refUserId;
    long long _commentId;
    NSString *_refUserName;
    id <TTFPostReplyDetailViewControllerDelegate> _delegate;
    YKFDanmakuDetailViewModel *_viewModel;
    UITableView *_danmakuDetailTableView;
    TTFPostDetailService *_postDetailService;
    YKFPostCommentCell *_readyToDeleteCell;
    TTFPostReplyBaseTableViewCell *_prototypeCell;
    YKFPostCommentCell *_commentCell;
    unsigned long long _currentPage;
    YKFModelResponsePagingPO *_page;
    TTFPostReplyViewModel *_replyViewModel;
    NSLayoutConstraint *_bottomConstraintOfTableView;
}

@property(nonatomic) __weak NSLayoutConstraint *bottomConstraintOfTableView; // @synthesize bottomConstraintOfTableView=_bottomConstraintOfTableView;
@property(nonatomic) _Bool canDealKeyboradShowEvent; // @synthesize canDealKeyboradShowEvent=_canDealKeyboradShowEvent;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) TTFPostReplyViewModel *replyViewModel; // @synthesize replyViewModel=_replyViewModel;
@property(retain, nonatomic) YKFModelResponsePagingPO *page; // @synthesize page=_page;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) YKFPostCommentCell *commentCell; // @synthesize commentCell=_commentCell;
@property(retain, nonatomic) TTFPostReplyBaseTableViewCell *prototypeCell; // @synthesize prototypeCell=_prototypeCell;
@property(retain, nonatomic) YKFPostCommentCell *readyToDeleteCell; // @synthesize readyToDeleteCell=_readyToDeleteCell;
@property(nonatomic) _Bool showKeyboard; // @synthesize showKeyboard=_showKeyboard;
@property(retain, nonatomic) TTFPostDetailService *postDetailService; // @synthesize postDetailService=_postDetailService;
@property(nonatomic) _Bool isSendingMsg; // @synthesize isSendingMsg=_isSendingMsg;
@property(nonatomic) __weak UITableView *danmakuDetailTableView; // @synthesize danmakuDetailTableView=_danmakuDetailTableView;
@property(retain, nonatomic) YKFDanmakuDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <TTFPostReplyDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *refUserName; // @synthesize refUserName=_refUserName;
@property(nonatomic) int starcomingStatus; // @synthesize starcomingStatus=_starcomingStatus;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
@property(nonatomic) long long refUserId; // @synthesize refUserId=_refUserId;
@property(nonatomic) long long starArrivalId; // @synthesize starArrivalId=_starArrivalId;
@property(nonatomic) long long danmakuId; // @synthesize danmakuId=_danmakuId;
- (void).cxx_destruct;
- (void)commentReplyMoreOperationWithModel:(id)arg1;
- (void)operationEventWithViewModel:(id)arg1 currentView:(id)arg2;
- (id)spmB;
- (id)pageStatisticProperties;
- (id)pageName;
- (void)didDeleteOneComment;
- (void)optionSelectedAction:(long long)arg1;
- (void)deletePost;
- (void)configTopRightOptions;
- (void)showMore:(id)arg1;
- (void)popReplyTextViewWithCommentPOModel:(id)arg1;
- (void)replyTextTappedWithViewModel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 getVideoCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 getTextCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 getPictureCellAtIndexPath:(id)arg2;
- (void)setId:(long long)arg1;
- (void)requestNextPageComments;
- (void)reloadTableViewData;
- (void)requestFirstPageComments;
- (void)requestDanmakuDetail;
- (void)contentStateViewChooseRefresh:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)unregisterKeyboardObservers;
- (void)registerKeyboardObservers;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidFirstAppear;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

