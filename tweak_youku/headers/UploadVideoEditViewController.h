//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUploadBaseViewController.h"

#import "HPGrowingTextViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UploadCategoryActionSheetDelegate.h"
#import "UploadPrivacySettingActionSheetDelegate.h"
#import "UploadSelectAlbumActionSheetDelegate.h"

@class HPGrowingTextView, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSURL, TRFUploadTask, UIButton, UILabel, UITableView, UploadAlbumModel, UploadSelectAlbumActionSheet, UploadVideoEditBannerHeaderView, UploadVideoModel, UploadVideoThumbnailModel, YKNewVideoTipView;

@interface UploadVideoEditViewController : YKUploadBaseViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, UploadSelectAlbumActionSheetDelegate, HPGrowingTextViewDelegate, UploadCategoryActionSheetDelegate, UploadPrivacySettingActionSheetDelegate>
{
    _Bool _assetsVideo;
    _Bool _fromAlbum;
    UploadSelectAlbumActionSheet *_albumActionSheet;
    YKNewVideoTipView *_addCommunitySuccessedtipView;
    _Bool _moreOpened;
    _Bool _isBackupUploadMovieToDocumentFolderFinished;
    CDUnknownBlockType _OnUpdateVideo;
    CDUnknownBlockType _OnMove2OtherAlbum;
    UploadVideoModel *_videoModel;
    UITableView *_tableView;
    NSMutableArray *_tableViewCellTypes;
    UIButton *_uploadVideoButton;
    NSMutableDictionary *_cellHeightDic;
    HPGrowingTextView *_titleTextView;
    HPGrowingTextView *_descTextView;
    TRFUploadTask *_task;
    NSURL *_videoURL;
    UploadVideoEditBannerHeaderView *_headerView;
    NSString *_colaText;
    NSString *_communityAlbumText;
    UILabel *_communityAlbumLabel;
    UploadAlbumModel *_selectedAlbumModel;
    NSString *_titleText;
    NSString *_descriptionText;
    NSString *_category;
    long long _categoryid;
    NSString *_public_type;
    NSString *_watch_password;
    UploadVideoThumbnailModel *_thumbnailModel;
    NSMutableArray *_communitys;
    long long _addCommunityMaxCount;
    NSDate *_viewDidLoadDate;
}

@property(retain, nonatomic) NSDate *viewDidLoadDate; // @synthesize viewDidLoadDate=_viewDidLoadDate;
@property(nonatomic) long long addCommunityMaxCount; // @synthesize addCommunityMaxCount=_addCommunityMaxCount;
@property(retain, nonatomic) NSMutableArray *communitys; // @synthesize communitys=_communitys;
@property(nonatomic) _Bool isBackupUploadMovieToDocumentFolderFinished; // @synthesize isBackupUploadMovieToDocumentFolderFinished=_isBackupUploadMovieToDocumentFolderFinished;
@property(retain, nonatomic) UploadVideoThumbnailModel *thumbnailModel; // @synthesize thumbnailModel=_thumbnailModel;
@property(retain, nonatomic) NSString *watch_password; // @synthesize watch_password=_watch_password;
@property(retain, nonatomic) NSString *public_type; // @synthesize public_type=_public_type;
@property(nonatomic) long long categoryid; // @synthesize categoryid=_categoryid;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UploadAlbumModel *selectedAlbumModel; // @synthesize selectedAlbumModel=_selectedAlbumModel;
@property(retain, nonatomic) UILabel *communityAlbumLabel; // @synthesize communityAlbumLabel=_communityAlbumLabel;
@property(retain, nonatomic) NSString *communityAlbumText; // @synthesize communityAlbumText=_communityAlbumText;
@property(retain, nonatomic) NSString *colaText; // @synthesize colaText=_colaText;
@property(retain, nonatomic) UploadVideoEditBannerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) TRFUploadTask *task; // @synthesize task=_task;
@property(nonatomic) __weak HPGrowingTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(nonatomic) __weak HPGrowingTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) NSMutableDictionary *cellHeightDic; // @synthesize cellHeightDic=_cellHeightDic;
@property(retain, nonatomic) UIButton *uploadVideoButton; // @synthesize uploadVideoButton=_uploadVideoButton;
@property(retain, nonatomic) NSMutableArray *tableViewCellTypes; // @synthesize tableViewCellTypes=_tableViewCellTypes;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UploadVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(copy, nonatomic) CDUnknownBlockType OnMove2OtherAlbum; // @synthesize OnMove2OtherAlbum=_OnMove2OtherAlbum;
@property(copy, nonatomic) CDUnknownBlockType OnUpdateVideo; // @synthesize OnUpdateVideo=_OnUpdateVideo;
- (void).cxx_destruct;
- (void)showH5ControllerWithUrl:(id)arg1 andParam:(id)arg2 andIsPush:(_Bool)arg3;
- (void)sendEditPVStatistics;
- (void)sendCreatePVStatistics;
- (id)topicInfoWithCommunitys:(id)arg1;
- (void)setCommunityAlbumLabelText;
- (void)reloadCategoryCell;
- (void)showCategoryActionSheet;
- (void)categoryButtonClick:(id)arg1;
- (id)thumbnailImageForVideo:(id)arg1 atTime:(double)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)addObservers;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)categoryDidSelectIndex:(id)arg1 index:(long long)arg2;
- (void)privacySettingDidSelect:(id)arg1 model:(id)arg2;
- (void)albumActionSheetDidSelect:(id)arg1 model:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (id)tableViewCell:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)doUploadVideoButtonClick;
- (void)doBackAction;
- (void)backAction;
- (_Bool)checkDescriptionLength;
- (_Bool)checkTitleLength;
- (_Bool)checkTitle;
- (_Bool)checkFileExist;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tapGestureRecognizer:(id)arg1;
- (void)setListenKeyboard;
- (void)resolveShareVideoDict;
- (void)updateTaskInfo;
- (void)swipeBack;
- (void)backViaGesture;
- (int)getThumbnailSeq;
- (void)uploadVideoButtonClick:(id)arg1;
- (void)setVideoCover:(id)arg1;
- (void)buildTableView;
- (struct CGRect)tableViewRect;
- (void)setupView;
- (void)hideMore;
- (void)showMore;
- (void)initTableViewCellTypes;
- (void)getAlbumModelIfNeed;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)appWillTerminate:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;
- (void)setupTask;
- (id)initWithTask:(id)arg1;
- (id)initWithVideoURL:(id)arg1;
- (_Bool)isScreen3_5;
- (void)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
