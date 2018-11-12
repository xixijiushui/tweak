//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPInterceptRecordShareViewDelegate.h"
#import "YKMediaEditorDelegate.h"

@class DetailActionManager, NSArray, NSString, SPInterceptRecordDataSource, SPInterceptRecordShareView, UIButton, UIImage, UIImageView, UILabel, UIProgressView, YKShareInfoItem;

@interface SPInterceptRecordView : UIView <SPInterceptRecordShareViewDelegate, YKMediaEditorDelegate>
{
    UIButton *_cancleButton;
    UIButton *_editButton;
    UIImageView *_captureImageView;
    UIProgressView *_progressView;
    UIImageView *_recordStateImageView;
    UILabel *_recordStateLabel;
    SPInterceptRecordShareView *_shareView;
    UIImageView *_backGroundImageView;
    UILabel *_netErrorLabel;
    UIImageView *_fanShareFloatingBubbleView;
    UIImage *_shareImage;
    YKShareInfoItem *_shareItem;
    _Bool _isLoopPlay;
    _Bool _shouldHideFanShareButton;
    _Bool _notNeedRecoverPlayState;
    id <SPInterceptRecordViewDelegate> _delegate;
    long long _interceptRecordType;
    SPInterceptRecordDataSource *_dataSource;
    long long _interceptRecordState;
    double _recordTime;
    double _lastSeekTime;
    NSString *_customContentForSinaWeibo;
    NSString *_videoID;
    NSString *_videoTitle;
    DetailActionManager *_actionManager;
    NSArray *_openPlatformArray;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSArray *openPlatformArray; // @synthesize openPlatformArray=_openPlatformArray;
@property(retain, nonatomic) DetailActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(copy, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(nonatomic) _Bool notNeedRecoverPlayState; // @synthesize notNeedRecoverPlayState=_notNeedRecoverPlayState;
@property(nonatomic) _Bool shouldHideFanShareButton; // @synthesize shouldHideFanShareButton=_shouldHideFanShareButton;
@property(copy, nonatomic) NSString *customContentForSinaWeibo; // @synthesize customContentForSinaWeibo=_customContentForSinaWeibo;
@property(nonatomic) double lastSeekTime; // @synthesize lastSeekTime=_lastSeekTime;
@property(nonatomic) _Bool isLoopPlay; // @synthesize isLoopPlay=_isLoopPlay;
@property(nonatomic) double recordTime; // @synthesize recordTime=_recordTime;
@property(nonatomic) long long interceptRecordState; // @synthesize interceptRecordState=_interceptRecordState;
@property(retain, nonatomic) SPInterceptRecordDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long interceptRecordType; // @synthesize interceptRecordType=_interceptRecordType;
@property(nonatomic) __weak id <SPInterceptRecordViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)netErrorLabelDisappear;
- (void)interShareViewButtonDidClickedWithPlatformId:(int)arg1;
- (void)interShareViewButtonDidFinishLayout:(id)arg1 titledButtons:(id)arg2;
- (void)interScrollViewDidEndDecelerating:(id)arg1 pageIndex:(long long)arg2;
- (void)interScrollViewWillBeginDragging:(id)arg1 pageIndex:(long long)arg2;
- (id)defaultTitle;
- (void)shareViewShow;
- (id)shareViewWithItemsWithType:(long long)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (_Bool)isSystemVersionAllowed;
- (void)synchronizeClickedFanShareGIF;
- (_Bool)hasClickedFanShareGIF;
- (void)saveCaptureImageToSystem:(id)arg1;
- (void)showRecordFailedView;
- (void)showRecordShareView;
- (void)showRecordProcessingView;
- (void)showRecordingView;
- (void)showRecordTooShortView;
- (void)clearSubviews;
- (void)mediaEditorDidCancel:(id)arg1;
- (void)mediaEditor:(id)arg1 didFinishEdittingWithGifPath:(id)arg2;
- (void)mediaEditor:(id)arg1 didFinishEdittingWithImage:(id)arg2;
- (void)editButtonClick;
- (void)dissmiss;
- (void)showCaptureShareViewWithCaptureImage:(id)arg1;
- (void)showRecordViewWithRecordDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
