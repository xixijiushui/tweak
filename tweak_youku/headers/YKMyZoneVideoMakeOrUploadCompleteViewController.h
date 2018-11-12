//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

@class TRFUploadTask, UIButton, UIImageView, UILabel, UIView, YKMyZoneShareManager, YKMyZoneUnderLineTextField, YKMyZoneVideoUploadView;

@interface YKMyZoneVideoMakeOrUploadCompleteViewController : UIBaseViewController
{
    _Bool _needUploadWhenLoginSuccess;
    long long _completeType;
    double _upload_start;
    UIView *_bgContentView;
    UIImageView *_videoAlbumImageView;
    UIButton *_previewButton;
    UIButton *_makeBackButton;
    UIButton *_makeActionButton;
    UIButton *_uploadBackButton;
    UIButton *_uploadCancelButton;
    UIButton *_uploadActionButton;
    UIView *_touchView;
    UILabel *_tipsTitleLabel;
    YKMyZoneUnderLineTextField *_titleTextField;
    UILabel *_joinTitleLabel;
    YKMyZoneShareManager *_shareManager;
    TRFUploadTask *_task;
    YKMyZoneVideoUploadView *_uploadView;
}

@property(retain, nonatomic) YKMyZoneVideoUploadView *uploadView; // @synthesize uploadView=_uploadView;
@property(retain, nonatomic) TRFUploadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) YKMyZoneShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) UILabel *joinTitleLabel; // @synthesize joinTitleLabel=_joinTitleLabel;
@property(retain, nonatomic) YKMyZoneUnderLineTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) UILabel *tipsTitleLabel; // @synthesize tipsTitleLabel=_tipsTitleLabel;
@property(retain, nonatomic) UIView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) UIButton *uploadActionButton; // @synthesize uploadActionButton=_uploadActionButton;
@property(retain, nonatomic) UIButton *uploadCancelButton; // @synthesize uploadCancelButton=_uploadCancelButton;
@property(retain, nonatomic) UIButton *uploadBackButton; // @synthesize uploadBackButton=_uploadBackButton;
@property(retain, nonatomic) UIButton *makeActionButton; // @synthesize makeActionButton=_makeActionButton;
@property(retain, nonatomic) UIButton *makeBackButton; // @synthesize makeBackButton=_makeBackButton;
@property(retain, nonatomic) UIButton *previewButton; // @synthesize previewButton=_previewButton;
@property(retain, nonatomic) UIImageView *videoAlbumImageView; // @synthesize videoAlbumImageView=_videoAlbumImageView;
@property(retain, nonatomic) UIView *bgContentView; // @synthesize bgContentView=_bgContentView;
@property(nonatomic) double upload_start; // @synthesize upload_start=_upload_start;
@property(nonatomic) long long completeType; // @synthesize completeType=_completeType;
- (void).cxx_destruct;
- (void)userLoginStateDidChanged:(id)arg1;
- (void)taskNotMatch:(id)arg1;
- (void)taskDidCancel:(id)arg1;
- (void)taskSendData:(id)arg1;
- (void)taskDidAdd:(id)arg1;
- (void)taskDidSuccess:(id)arg1;
- (void)taskDidChanged:(id)arg1;
- (void)taskDidStart:(id)arg1;
- (void)taskDidFailed:(id)arg1;
- (void)updateProgress:(id)arg1;
- (void)keyboardChangedWithTransition:(CDStruct_902a08d0)arg1;
- (void)textFiledEditChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)preferredStatusBarStyle;
- (void)uploadSuccessedNextAction;
- (void)onTag:(id)arg1;
- (void)previewButtonPressed:(id)arg1;
- (void)doActionButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)setupUploadSubviews;
- (void)setupMakeSubviews;
- (void)viewWillLayoutSubviews;
- (void)setupSubviews;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

@end
