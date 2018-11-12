//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseViewController.h"

#import "TTFPageTableViewCellDelegate.h"
#import "TTFPostReplyBaseTableViewCellDelegate.h"
#import "TTFPostReplyPictureTableViewCellDelegate.h"
#import "TTFReplyerViewDelegate.h"
#import "TTFansDetailViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "YKFContentStateDelegate.h"
#import "YKFFansNameplatesCheckerTipsEnablePage.h"
#import "YKFPostDetailScenePage.h"
#import "YKFRouterInterPageAction.h"
#import "YKFTaskExpMessageValidObject.h"

@class NSArray, NSError, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, RACSignal, TTFPostDetailService, TTFPostDetailViewModel, TTFPostReplyBaseTableViewCell, TTFPostReplyDetailViewModel, TTFPostReplyVideoTableViewCell, TTFRepliesPageViewModel, TTFansDetailViewModel, TTPFandomViewModel, TTPRecommendFandomListService, UIButton, UIScrollView, YKFActionSheetHelper, YKFCommunityFandomFansDetailPO, YKFCommunityPostPO, YKFModelResponsePagingPO, YKFTouchTableView;

@interface TTFPostDetailViewController : YKFBaseViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, TTFansDetailViewDelegate, YKFContentStateDelegate, TTFPostReplyPictureTableViewCellDelegate, TTFPageTableViewCellDelegate, TTFReplyerViewDelegate, YKFTaskExpMessageValidObject, TTFPostReplyBaseTableViewCellDelegate, YKFFansNameplatesCheckerTipsEnablePage, YKFRouterInterPageAction, YKFPostDetailScenePage>
{
    _Bool _showKeyboard;
    _Bool _scrollToComments;
    _Bool _hideFandom;
    _Bool _showEmptyReplyView;
    _Bool _isObserved;
    _Bool _isShowAlertWindow;
    _Bool _isAllRepliesLoaded;
    _Bool _isTableViewShowed;
    _Bool _isDesc;
    _Bool _isFirstLoad;
    _Bool _shouldAddCommentAfterReload;
    int _currentPage;
    YKFTouchTableView *_postDetailTableView;
    id <TTFPostDetailViewControllerDelegate> _delegate;
    TTFPostDetailService *_postDetailService;
    TTFansDetailViewModel *_fansDetailViewModel;
    TTFPostDetailViewModel *_postDetailViewModel;
    long long _postId;
    NSString *_sceneId;
    long long _sceneType;
    TTPFandomViewModel *_fandomViewModel;
    TTFRepliesPageViewModel *_pageViewModel;
    UIScrollView *_mainScrollView;
    UIButton *_joinFandomButton;
    TTPRecommendFandomListService *_service;
    NSLayoutConstraint *_bottomConstraintOfTableView;
    NSLayoutConstraint *_scrollBottomConstraint;
    YKFActionSheetHelper *_actionSheetHelper;
    YKFCommunityPostPO *_postModel;
    NSMutableArray *_votePhotoArray;
    NSArray *_totalPhotoArray;
    long long _photoIndex;
    NSMutableArray *_defaultOptionMArray;
    unsigned long long _maxFloor;
    TTFPostReplyVideoTableViewCell *_currentVideoCell;
    TTFPostReplyBaseTableViewCell *_prototypeCell;
    NSString *_tagName;
    NSArray *_postReplies;
    YKFModelResponsePagingPO *_page;
    TTFPostReplyDetailViewModel *_postReplyDetailViewModel;
    long long _impressionCount;
    NSError *_postDetailError;
    YKFCommunityFandomFansDetailPO *_fandomFansDetailPO;
    RACSignal *_combinedRequestSignal;
    NSMutableDictionary *_cellHeightsDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *cellHeightsDictionary; // @synthesize cellHeightsDictionary=_cellHeightsDictionary;
@property(retain, nonatomic) RACSignal *combinedRequestSignal; // @synthesize combinedRequestSignal=_combinedRequestSignal;
@property(nonatomic) _Bool shouldAddCommentAfterReload; // @synthesize shouldAddCommentAfterReload=_shouldAddCommentAfterReload;
@property(retain, nonatomic) YKFCommunityFandomFansDetailPO *fandomFansDetailPO; // @synthesize fandomFansDetailPO=_fandomFansDetailPO;
@property(retain, nonatomic) NSError *postDetailError; // @synthesize postDetailError=_postDetailError;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic) long long impressionCount; // @synthesize impressionCount=_impressionCount;
@property(retain, nonatomic) TTFPostReplyDetailViewModel *postReplyDetailViewModel; // @synthesize postReplyDetailViewModel=_postReplyDetailViewModel;
@property(nonatomic) _Bool isDesc; // @synthesize isDesc=_isDesc;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) YKFModelResponsePagingPO *page; // @synthesize page=_page;
@property(retain, nonatomic) NSArray *postReplies; // @synthesize postReplies=_postReplies;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(retain, nonatomic) TTFPostReplyBaseTableViewCell *prototypeCell; // @synthesize prototypeCell=_prototypeCell;
@property(retain, nonatomic) TTFPostReplyVideoTableViewCell *currentVideoCell; // @synthesize currentVideoCell=_currentVideoCell;
@property(nonatomic) _Bool isTableViewShowed; // @synthesize isTableViewShowed=_isTableViewShowed;
@property(nonatomic) _Bool isAllRepliesLoaded; // @synthesize isAllRepliesLoaded=_isAllRepliesLoaded;
@property(nonatomic) unsigned long long maxFloor; // @synthesize maxFloor=_maxFloor;
@property(nonatomic) _Bool isShowAlertWindow; // @synthesize isShowAlertWindow=_isShowAlertWindow;
@property(retain, nonatomic) NSMutableArray *defaultOptionMArray; // @synthesize defaultOptionMArray=_defaultOptionMArray;
@property(nonatomic) long long photoIndex; // @synthesize photoIndex=_photoIndex;
@property(retain, nonatomic) NSArray *totalPhotoArray; // @synthesize totalPhotoArray=_totalPhotoArray;
@property(retain, nonatomic) NSMutableArray *votePhotoArray; // @synthesize votePhotoArray=_votePhotoArray;
@property(retain, nonatomic) YKFCommunityPostPO *postModel; // @synthesize postModel=_postModel;
@property(retain, nonatomic) YKFActionSheetHelper *actionSheetHelper; // @synthesize actionSheetHelper=_actionSheetHelper;
@property(nonatomic) __weak NSLayoutConstraint *scrollBottomConstraint; // @synthesize scrollBottomConstraint=_scrollBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraintOfTableView; // @synthesize bottomConstraintOfTableView=_bottomConstraintOfTableView;
@property(retain, nonatomic) TTPRecommendFandomListService *service; // @synthesize service=_service;
@property(nonatomic) _Bool isObserved; // @synthesize isObserved=_isObserved;
@property(retain, nonatomic) UIButton *joinFandomButton; // @synthesize joinFandomButton=_joinFandomButton;
@property(nonatomic) __weak UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) TTFRepliesPageViewModel *pageViewModel; // @synthesize pageViewModel=_pageViewModel;
@property(retain, nonatomic) TTPFandomViewModel *fandomViewModel; // @synthesize fandomViewModel=_fandomViewModel;
@property(nonatomic) _Bool showEmptyReplyView; // @synthesize showEmptyReplyView=_showEmptyReplyView;
@property(nonatomic) _Bool hideFandom; // @synthesize hideFandom=_hideFandom;
@property(nonatomic) _Bool scrollToComments; // @synthesize scrollToComments=_scrollToComments;
@property(nonatomic) _Bool showKeyboard; // @synthesize showKeyboard=_showKeyboard;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(copy, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(retain, nonatomic) TTFPostDetailViewModel *postDetailViewModel; // @synthesize postDetailViewModel=_postDetailViewModel;
@property(retain, nonatomic) TTFansDetailViewModel *fansDetailViewModel; // @synthesize fansDetailViewModel=_fansDetailViewModel;
@property(retain, nonatomic) TTFPostDetailService *postDetailService; // @synthesize postDetailService=_postDetailService;
@property(nonatomic) __weak id <TTFPostDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak YKFTouchTableView *postDetailTableView; // @synthesize postDetailTableView=_postDetailTableView;
- (void).cxx_destruct;
- (long long)ykf_postSceneType;
- (id)ykf_postSceneId;
- (void)requestPostReplies;
- (void)preloadData;
- (void)ykf_interPageWillAppear:(_Bool)arg1 isPush:(_Bool)arg2;
- (void)postReplyCountNotification;
- (void)didDeleteOnePostReply:(long long)arg1;
- (void)didDeleteOnePostReplyFromNotification:(id)arg1;
- (void)optionSelectedForPostReplyerWithIndex:(long long)arg1 options:(id)arg2 viewModel:(id)arg3;
- (void)optionSelectedForPostReplyerWithIndexStar:(long long)arg1 options:(id)arg2 viewModel:(id)arg3;
- (void)likeButtonClickEventWithViewModel:(id)arg1 currentView:(id)arg2;
- (void)operationEventWithViewModel:(id)arg1 currentView:(id)arg2;
- (id)fandomerVMOWithPostReplyPOModel:(struct YKFCommunityPostReplyPO *)arg1;
- (void)picTouchedWithUserId:(long long)arg1 userIdentify:(long long)arg2;
- (void)scrollToStarReplySection;
- (id)viewModelForIndex:(long long)arg1;
- (void)sortTappedWithCell:(id)arg1;
- (id)tableView:(id)arg1 getVideoCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 getAudioCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 getTextCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 getPictureCellAtIndexPath:(id)arg2;
- (void)reloadDataWithTableView:(id)arg1;
- (_Bool)isAnimationFandom;
- (void)showMore:(id)arg1;
- (void)configReplyToolBar;
- (void)calculateTotalPhotoesPostReplyViewModel:(id)arg1 index:(long long)arg2;
- (void)jumpToOneFloor;
- (void)jumpToReplyDetail:(long long)arg1;
- (void)jumpToReplyDetail:(long long)arg1 withIndexPath:(id)arg2;
- (void)jumpToReplyDetail:(long long)arg1 withIndexPath:(id)arg2 spmCD:(id)arg3;
- (void)tryToShowKeyboard;
- (void)updatePostReplyViewModel:(id)arg1 withReplyModel:(id)arg2;
- (void)addCommentWithReplyModel:(id)arg1;
- (void)replyTextTappedWithViewModel:(id)arg1;
- (void)prependReplyWithReplyModel:(id)arg1;
- (void)superBack;
- (void)goBack:(id)arg1;
- (void)insertRowsAtBottom;
- (void)requestFirstPagePostRepiles;
- (void)configUTForPostReplies;
- (void)requestFirstPagePostRepilesWithSortButton:(id)arg1;
- (void)configReplies;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didUnfollowFandom:(id)arg1;
- (void)didFollowFandom:(id)arg1;
- (void)didClickPhotoForIndex:(long long)arg1 replyViewModol:(id)arg2;
- (void)didClickPhotoForIndex:(long long)arg1;
- (void)gotoFandomPageWithFandomId:(long long)arg1;
- (void)showBigPhotoForOption:(long long)arg1;
- (void)avatarTouchedWithUserId:(long long)arg1 userIdentify:(long long)arg2;
- (void)shareAction;
- (long long)userId;
- (_Bool)userHasLoggedIn;
- (void)contentStateViewChooseRefresh:(id)arg1;
- (void)sendDeletePostNotification:(long long)arg1;
- (void)adminDeletePostWithReason:(long long)arg1;
- (void)ownerDeletePost;
- (void)showDeletePostReason;
- (void)optionSelectedAction:(long long)arg1;
- (void)configTopRightOptions;
- (void)updateFandomInfo;
- (void)tableScrollToComments;
- (void)configPage;
- (void)handlePostDetail;
- (void)showTable;
- (void)handlePostDetailError;
- (void)requestPostDetailAPIOnly;
- (void)requestPostDetail;
- (_Bool)canDismissWithGesture;
- (void)appResignActive:(id)arg1;
- (void)addNotification;
- (void)reLoadStarReplyList;
- (void)reLoadHotReplyList;
- (void)joinFandomTouched;
- (void)setNavigatorBarFandomInfo:(id)arg1;
- (void)resetNavigatorBar;
- (void)initFandomInfo;
- (void)initiTableView;
- (void)setId:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)setupMediaPlayer;
- (void)autoPlayVideo;
- (void)viewDidFirstAppear;
- (void)viewDidLoad;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithPostId:(long long)arg1;
- (id)init;
- (void)dealloc;
- (id)spmB;
- (id)pageStatisticProperties;
- (id)pageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

