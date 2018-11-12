//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AIALikeViewUTProtocal.h"
#import "AIASLoginProtocol.h"
#import "AIASPlatformProtocol.h"
#import "LSCommentHeaderInputViewDelegate.h"
#import "LSDetailTabControllerDelegate.h"
#import "LSWebSocketDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YKShareCenterDelegate.h"
#import "YYMediaPlayerEvents.h"

@class AIALikeComponent, AIALikeView, CAGradientLayer, LSChatView, LSCommentHeaderInputView, LSInteractiveManager, LSJSONClient, LSLivePlayerDataManager, LSMessageCommandAD, LSTipsView, NSMutableDictionary, NSString, UIButton, YKShareCenter, YYMediaPlayer;

@interface LSLiveDetailCommentWeexController : UIViewController <YKShareCenterDelegate, UITableViewDelegate, UITableViewDataSource, LSCommentHeaderInputViewDelegate, LSWebSocketDelegate, AIASLoginProtocol, AIASPlatformProtocol, AIALikeViewUTProtocal, YYMediaPlayerEvents, LSDetailTabControllerDelegate>
{
    CAGradientLayer *_chatMaskLayer;
    int _likeCount;
    int _likeComboCount;
    YKShareCenter *_shareCenter;
    LSLivePlayerDataManager *_dataManager;
    LSCommentHeaderInputView *_commentInputView;
    UIButton *_commentButton;
    UIButton *_sendGiftButton;
    LSJSONClient *_jsonclient;
    LSChatView *_chatView;
    LSMessageCommandAD *_interactionAD;
    AIALikeView *_likeView;
    AIALikeComponent *_likeCom;
    LSTipsView *_tipsView;
    NSMutableDictionary *_liveDict;
    LSInteractiveManager *_interactiveManager;
    double _lastLikeComboTimeStamp;
    struct CGRect _originFrame;
}

@property(nonatomic) double lastLikeComboTimeStamp; // @synthesize lastLikeComboTimeStamp=_lastLikeComboTimeStamp;
@property(nonatomic) int likeComboCount; // @synthesize likeComboCount=_likeComboCount;
@property(nonatomic) int likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) LSInteractiveManager *interactiveManager; // @synthesize interactiveManager=_interactiveManager;
@property(retain, nonatomic) NSMutableDictionary *liveDict; // @synthesize liveDict=_liveDict;
@property(retain, nonatomic) LSTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) AIALikeComponent *likeCom; // @synthesize likeCom=_likeCom;
@property(retain, nonatomic) AIALikeView *likeView; // @synthesize likeView=_likeView;
@property(retain, nonatomic) LSMessageCommandAD *interactionAD; // @synthesize interactionAD=_interactionAD;
@property(retain, nonatomic) LSChatView *chatView; // @synthesize chatView=_chatView;
@property(retain, nonatomic) LSJSONClient *jsonclient; // @synthesize jsonclient=_jsonclient;
@property(retain, nonatomic) UIButton *sendGiftButton; // @synthesize sendGiftButton=_sendGiftButton;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) LSCommentHeaderInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) __weak LSLivePlayerDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) YKShareCenter *shareCenter; // @synthesize shareCenter=_shareCenter;
- (void).cxx_destruct;
- (id)getCurrentVC;
- (void)onLeaveWithTotalClickCount:(long long)arg1;
- (void)onFirstClick;
- (void)closeTips;
- (id)utdid;
- (id)appKey;
- (void)loginWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)isLogin;
- (id)getUserId;
- (void)tabController:(id)arg1 didScrollToCurrentVCWithIndex:(long long)arg2;
- (void)relayoutSubviews;
- (void)clearControls;
- (void)tabController:(id)arg1 configData:(id)arg2 index:(long long)arg3;
- (id)tabControllerTabTitle;
- (void)commentButtonTapped:(id)arg1;
- (void)sendByPowermsg:(id)arg1;
- (void)commentHeadetInputView:(id)arg1 didCommitComments:(id)arg2;
- (void)weakTypeFrame;
- (void)doLoginSuccess;
- (id)fetchLiveStateStr:(unsigned long long)arg1;
- (void)close;
- (id)playerController;
- (void)refreshDataManager:(id)arg1;
- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)makeImageViewRound:(id)arg1;
- (void)loadUserAvatarForCommentButton:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateCommentPosition;
- (void)refreshUserAvatar;
- (void)viewDidLoad;
- (void)shareLive;
- (void)startCommentListener;
- (id)initWithFrame:(struct CGRect)arg1 dataManager:(id)arg2;
- (id)tabUrl;
- (long long)tabType;
- (void)shareDidSendToOpenPlatform:(int)arg1 result:(int)arg2;
- (void)shareWillSendToOpenPlatform:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak YYMediaPlayer *player;
@property(readonly) Class superclass;

@end

