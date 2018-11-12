//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSTimer, UIButton, UIImageView, UILabel, ZPDSendTopicBizModel;

@interface YKZPDSendTopicView : UIView
{
    int _successTime;
    _Bool _isOnesEdit;
    UIView *upperBack;
    ZPDSendTopicBizModel *_publishToolBizModel;
    long long _contentId;
    long long _stateType;
    NSString *_community_id;
    UIButton *_retryBtn;
    UIButton *_deleteBtn;
    UILabel *_titleLable;
    UIView *_lineView;
    UIImageView *_userImage;
    NSTimer *_timer;
    NSTimer *_timerSuccess;
}

+ (struct CGSize)viewSize;
@property(retain, nonatomic) NSTimer *timerSuccess; // @synthesize timerSuccess=_timerSuccess;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *userImage; // @synthesize userImage=_userImage;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIButton *retryBtn; // @synthesize retryBtn=_retryBtn;
@property(retain, nonatomic) NSString *community_id; // @synthesize community_id=_community_id;
@property(nonatomic) long long stateType; // @synthesize stateType=_stateType;
@property(nonatomic) long long contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) ZPDSendTopicBizModel *publishToolBizModel; // @synthesize publishToolBizModel=_publishToolBizModel;
- (void).cxx_destruct;
- (void)pageMiniappDataReportSpma:(id)arg1 Spmb:(id)arg2 Spmc:(id)arg3 Spmd:(id)arg4 eventId:(id)arg5;
- (void)stopTimer;
- (void)startTimer2;
- (void)startTimer1;
- (void)stopTimerSuccess;
- (void)startTimerSuccess;
- (void)loadTopicFileSuccess;
- (void)reSetLineViewWidth;
- (void)animoLineView;
- (void)loadTopicFile1;
- (void)loadTopicFile;
- (void)setTitleLableState;
- (void)deleteLocalData;
- (void)sendTopicInfoToNetwork:(id)arg1;
- (void)reTryUpload;
- (void)checkLocalData;
- (void)cliclOkBackZPDTostMessage;
- (void)cancelClickBtnZPDTostMessage;
- (void)clickDeteleBtn;
- (void)updateUserImage:(id)arg1;
- (void)setupUI;
- (void)updateContentID;
- (void)checkLocalDataNotifcation:(id)arg1;
- (void)setIsHasContentNotifcation:(id)arg1;
- (void)sendTopicStateNotifcation:(id)arg1;
- (void)zpdSendTopicNetworkSend:(id)arg1;
- (void)dealloc;
- (void)destroyThisClass;
- (id)initUploadView;

@end

