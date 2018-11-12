//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UUMessageCellDelegate.h"
#import "UUWorldCupInputFunctionViewDelegate.h"
#import "YKBCAVAudioPlayerDelegate.h"
#import "YKBCArtcManagerDelegate.h"
#import "YKBCCommentHeaderInputViewDelegate.h"
#import "YKBCWordCupBottomViewDelegate.h"
#import "YKBCWorldCupTeamViewDelegate.h"

@class CAGradientLayer, MtopExtRequest, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIAlertView, UIButton, UIImageView, UILabel, UITableView, UIView, YKBCAVAudioPlayer, YKBCArtcManager, YKBCChatModel, YKBCInputWindow, YKBCNewMsgBar, YKBCRoomController, YKBCStarMsgBar, YKBCVoiceButton, YKBCWordCupAirBubbleView, YKBCWordCupHintCancelView, YKBCWordCupVoiceSettingView, YKBCWorldCupBottomView, YKBCWorldCupInputFunctionView, YKBCWorldCupLiveMembersViewController, YKBCWorldCupTeamView, YKBCWorldCupUserInfoView, YKBC_ChatMessageFrame;

@interface YKBCWorldCupChatRootViewController : UIViewController <YKBCCommentHeaderInputViewDelegate, UUWorldCupInputFunctionViewDelegate, UUMessageCellDelegate, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, YKBCWorldCupTeamViewDelegate, YKBCWordCupBottomViewDelegate, UIAlertViewDelegate, YKBCArtcManagerDelegate, YKBCAVAudioPlayerDelegate>
{
    CAGradientLayer *_chatMaskLayer;
    double _keyboardHeight;
    YKBCWorldCupTeamView *teamView;
    YKBCWorldCupLiveMembersViewController *membersViewController;
    UIButton *exitBtn;
    NSMutableDictionary *avatarInfoDic;
    YKBC_ChatMessageFrame *longPressChatMessageFrame;
    _Bool artcIsConnect;
    YKBCAVAudioPlayer *_audio;
    _Bool _contentVoiceIsPlaying;
    _Bool isAutoLeaveChannel;
    _Bool autoLeaveChannelMuteState;
    _Bool isConnectArtcLogin;
    _Bool _isStarOnly;
    _Bool _inputFuncViewHide;
    _Bool _isChangeToTalk;
    _Bool _isuserLogin;
    _Bool _isaudioAuth;
    _Bool _isFirstTapOpenMike;
    _Bool _isFirstTapCloseArea;
    long long _participantCount;
    UIView *_chatTableViewBG;
    UITableView *_chatTableView;
    YKBCRoomController *_mainController;
    YKBCArtcManager *_artcManager;
    YKBCChatModel *_chatModel;
    YKBCInputWindow *_inputWindow;
    YKBCWorldCupInputFunctionView *_inputFuncView;
    YKBCStarMsgBar *_starMsgBar;
    YKBCWorldCupBottomView *_bottomRightView;
    UIButton *_starOnlyBtn;
    YKBCWordCupVoiceSettingView *_voiceSettingView;
    YKBCWordCupAirBubbleView *_airBubblevView;
    long long _wordCupType;
    YKBCWordCupHintCancelView *_hintCancelView;
    NSTimer *_audioAuthTimer;
    YKBCWorldCupUserInfoView *_userInfoView;
    NSString *_stringutdid;
    MtopExtRequest *_worldCupUserRoomRequest;
    YKBCVoiceButton *_btnVoice;
    YKBCNewMsgBar *_ykbcNewMsgBar;
    NSMutableArray *_starAlreadyShowArray;
    NSTimer *_comerMessageTimer;
    NSMutableArray *_comerMessageArray;
    UILabel *_roomExitLabel;
    UIImageView *_roomExitImgview;
    UIView *_roomExitRoundBg;
    UIAlertView *_alertExitRoom;
    UIAlertView *_alertRoomReport;
    struct CGRect _originFrame;
}

@property(retain, nonatomic) UIAlertView *alertRoomReport; // @synthesize alertRoomReport=_alertRoomReport;
@property(retain, nonatomic) UIAlertView *alertExitRoom; // @synthesize alertExitRoom=_alertExitRoom;
@property(retain, nonatomic) UIView *roomExitRoundBg; // @synthesize roomExitRoundBg=_roomExitRoundBg;
@property(retain, nonatomic) UIImageView *roomExitImgview; // @synthesize roomExitImgview=_roomExitImgview;
@property(retain, nonatomic) UILabel *roomExitLabel; // @synthesize roomExitLabel=_roomExitLabel;
@property(retain, nonatomic) NSMutableArray *comerMessageArray; // @synthesize comerMessageArray=_comerMessageArray;
@property(retain, nonatomic) NSTimer *comerMessageTimer; // @synthesize comerMessageTimer=_comerMessageTimer;
@property(retain, nonatomic) NSMutableArray *starAlreadyShowArray; // @synthesize starAlreadyShowArray=_starAlreadyShowArray;
@property(retain, nonatomic) YKBCNewMsgBar *ykbcNewMsgBar; // @synthesize ykbcNewMsgBar=_ykbcNewMsgBar;
@property(retain, nonatomic) YKBCVoiceButton *btnVoice; // @synthesize btnVoice=_btnVoice;
@property(retain, nonatomic) MtopExtRequest *worldCupUserRoomRequest; // @synthesize worldCupUserRoomRequest=_worldCupUserRoomRequest;
@property(retain, nonatomic) NSString *stringutdid; // @synthesize stringutdid=_stringutdid;
@property(retain, nonatomic) YKBCWorldCupUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) NSTimer *audioAuthTimer; // @synthesize audioAuthTimer=_audioAuthTimer;
@property(nonatomic) _Bool isFirstTapCloseArea; // @synthesize isFirstTapCloseArea=_isFirstTapCloseArea;
@property(nonatomic) _Bool isFirstTapOpenMike; // @synthesize isFirstTapOpenMike=_isFirstTapOpenMike;
@property(nonatomic) _Bool isaudioAuth; // @synthesize isaudioAuth=_isaudioAuth;
@property(nonatomic) _Bool isuserLogin; // @synthesize isuserLogin=_isuserLogin;
@property(nonatomic) _Bool isChangeToTalk; // @synthesize isChangeToTalk=_isChangeToTalk;
@property(retain, nonatomic) YKBCWordCupHintCancelView *hintCancelView; // @synthesize hintCancelView=_hintCancelView;
@property(nonatomic) _Bool inputFuncViewHide; // @synthesize inputFuncViewHide=_inputFuncViewHide;
@property(nonatomic) long long wordCupType; // @synthesize wordCupType=_wordCupType;
@property(retain, nonatomic) YKBCWordCupAirBubbleView *airBubblevView; // @synthesize airBubblevView=_airBubblevView;
@property(retain, nonatomic) YKBCWordCupVoiceSettingView *voiceSettingView; // @synthesize voiceSettingView=_voiceSettingView;
@property(retain, nonatomic) UIButton *starOnlyBtn; // @synthesize starOnlyBtn=_starOnlyBtn;
@property(retain, nonatomic) YKBCWorldCupBottomView *bottomRightView; // @synthesize bottomRightView=_bottomRightView;
@property(retain, nonatomic) YKBCStarMsgBar *starMsgBar; // @synthesize starMsgBar=_starMsgBar;
@property(retain, nonatomic) YKBCWorldCupInputFunctionView *inputFuncView; // @synthesize inputFuncView=_inputFuncView;
@property(retain, nonatomic) YKBCInputWindow *inputWindow; // @synthesize inputWindow=_inputWindow;
@property(retain, nonatomic) YKBCChatModel *chatModel; // @synthesize chatModel=_chatModel;
@property(nonatomic) _Bool isStarOnly; // @synthesize isStarOnly=_isStarOnly;
@property(retain, nonatomic) YKBCArtcManager *artcManager; // @synthesize artcManager=_artcManager;
@property(nonatomic) __weak YKBCRoomController *mainController; // @synthesize mainController=_mainController;
@property(retain, nonatomic) UITableView *chatTableView; // @synthesize chatTableView=_chatTableView;
@property(retain, nonatomic) UIView *chatTableViewBG; // @synthesize chatTableViewBG=_chatTableViewBG;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) long long participantCount; // @synthesize participantCount=_participantCount;
- (void).cxx_destruct;
- (void)YKBCAVAudioPlayerDidFinishPlay;
- (void)YKBCAVAudioPlayerBeiginPlay;
- (void)YKBCAVAudioPlayerBeiginLoadVoice;
- (void)showNickMoViewCallback:(CDUnknownBlockType)arg1;
- (void)voiceMemberChange:(id)arg1 isEnter:(_Bool)arg2;
- (void)refreshVoiceStatus:(id)arg1;
- (void)showArtcMessage:(id)arg1 isEnter:(_Bool)arg2 onlineNum:(long long)arg3;
- (void)YKBCArtcManager_onLineStatusChange:(id)arg1 isEnter:(_Bool)arg2;
- (void)YKBCArtcManager_OnLeaveChannelSuccess;
- (void)YKBCArtcManager_OnJoinChannelSuccess;
- (void)YKBCArtcManager_ShowToast:(id)arg1;
- (void)YKBCArtcManager_ShowMessage:(id)arg1;
- (void)YKBCArtcManager_MicroGranted;
- (void)YKBCArtcManager_MicroDenied;
- (void)storageJoinMikeRoomCount;
- (long long)gerJoinMikeRoomCount;
- (void)showUserInfoView:(long long)arg1 utdid:(id)arg2 icon:(id)arg3 name:(id)arg4;
- (void)changeUserInfoSuribeBtnState:(long long)arg1;
- (void)setUserInfoViewData:(id)arg1 message:(id)arg2 islogin:(_Bool)arg3;
- (void)chatCell:(id)arg1 headImageDidClick:(id)arg2;
- (void)ykbcSubscribeUser:(long long)arg1;
- (void)ykbcHideSettingView;
- (void)ykbcChangeViewState;
- (void)checkAudioVolum;
- (void)deallocAudioTimer;
- (void)createAudioAuthTimer;
- (void)ykbcSlipHintViewChange:(_Bool)arg1;
- (void)deallocNewComerMessageTimer;
- (void)checkNewComerMessage;
- (void)createNewComerMessageTimer;
- (void)ykbcLiveVaueChange:(double)arg1;
- (void)ykbcVoiceValueChange:(double)arg1;
- (void)showVoiceSettingView;
- (void)hideHintView;
- (void)ykbcTalkCountZero:(id)arg1;
- (void)ykbcLongPressEnd;
- (void)ykbcLongPressClick:(_Bool)arg1 outduration:(_Bool)arg2;
- (void)ykbcLongPressClickCancel;
- (void)ykbcLongPressClickBegin;
- (void)ykbcChangeInputClick;
- (void)ykbcChangeTalkClick;
- (_Bool)ykbcMuteClick:(_Bool)arg1;
- (void)ykbcTalkClick:(_Bool)arg1;
- (void)ykbcVoiceSettingClick;
- (void)chatViewHide:(_Bool)arg1;
- (void)h5Close;
- (void)showH5:(_Bool)arg1;
- (void)memberLeave:(id)arg1;
- (void)memberJoin:(id)arg1;
- (void)addComerParticipant:(id)arg1;
- (void)roomCreateOrJoin;
- (void)dealloc;
- (void)worldCupTeamView_EnterChatRoom:(long long)arg1 wcAttrType:(long long)arg2 wcAttrValue:(long long)arg3;
- (void)worldCupTeamView_InviteFriend;
- (void)worldCupTeamView_close;
- (void)triggleStarMessageBar;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)isFileExitsAtPath:(id)arg1;
- (void)analyticsPlayAudio;
- (void)cellButtonClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)starChatMessageFrame:(long long)arg1;
- (long long)starCount;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)handleDeleteCell:(id)arg1;
- (void)handleReportCell:(id)arg1;
- (void)cellLongPress:(id)arg1;
- (id)window;
- (void)dealTheFunctionData:(id)arg1;
- (void)voiceUploadSuccessWithFileID:(id)arg1 url:(id)arg2 finishType:(long long)arg3;
- (void)UUInputFunctionView:(id)arg1 sendVoice:(id)arg2 time:(long long)arg3;
- (void)UUInputFunctionView:(id)arg1 sendPicture:(id)arg2;
- (void)UUInputFunctionView:(id)arg1 sendMessage:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)sendMessage:(id)arg1;
- (void)talk_participant_exit:(id)arg1 participants:(id)arg2;
- (void)talk_participant_enter:(id)arg1 participants:(id)arg2;
- (void)remove_msg:(id)arg1;
- (void)sendNotice:(id)arg1 time:(long long)arg2 firstPostion:(_Bool)arg3 disp:(_Bool)arg4;
- (void)sendNotice:(id)arg1 time:(long long)arg2 firstPostion:(_Bool)arg3;
- (void)sendNotice:(id)arg1 time:(long long)arg2;
- (void)sendNoticeWithIcon:(id)arg1 name:(id)arg2 message:(id)arg3 time:(long long)arg4;
- (id)toTimestampStr:(long long)arg1;
- (void)handleDeviceOrientationDidChange:(long long)arg1;
- (void)appWillTerminate;
- (void)appDidBecomeActive;
- (void)appDidEnterBackground;
- (void)adjustCollectionViewLayout;
- (void)keyboardChange:(id)arg1;
- (_Bool)isTableviewBottom;
- (void)tableViewScrollToBottom:(_Bool)arg1 force:(_Bool)arg2;
- (void)reloadData:(_Bool)arg1;
- (void)loadBaseViewsAndData;
- (void)setViewController:(id)arg1;
- (void)roomMessageGet;
- (void)pullHistoryMessage;
- (void)ClickStarOnly;
- (void)wordCupTypeChanged:(long long)arg1;
- (void)inputFuncViewClick;
- (void)initBasicViews;
- (void)setImInputBg:(id)arg1;
- (void)setImBg:(id)arg1;
- (void)pullDownEvent;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)leaveRoom:(long long)arg1;
- (void)leaveCurrentRoom;
- (void)participantAdd:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)roomReport;
- (void)componentViewWillUnload;
- (_Bool)checkRealNameLogin;
- (void)showMore;
- (void)reportRoomMtop;
- (void)roomExit;
- (void)handleRoomExit:(id)arg1;
- (void)analyticsVoiceCallWithEventid:(id)arg1 arg1:(id)arg2 spm:(id)arg3 customDic:(id)arg4;
- (void)analyticsWithEventid:(id)arg1 arg1:(id)arg2 spm:(id)arg3 hasquitid:(_Bool)arg4 fromh5:(_Bool)arg5;
- (id)worldCupTeamView_CreateLiveChannel;
- (void)exitBtn_TouchupInside;
- (void)hideTableview:(_Bool)arg1;
- (void)ykbcNewMsgBarTapped;
- (void)viewDidLoad;
- (void)createCommentInputWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

