//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSLivePlayerChatView.h"

#import "LSCommentHeaderInputViewDelegate.h"
#import "LSLivePlayerExtensionEvent.h"
#import "LSLivePlayerPhoneChatViewsDelegate.h"

@class LSChatView, LSCommentHeaderInputView, LSDetailCommentChatInputBtn, NSString, UIButton;

@interface LSLivePlayerPhoneChatView : LSLivePlayerChatView <LSCommentHeaderInputViewDelegate, LSLivePlayerExtensionEvent, LSLivePlayerPhoneChatViewsDelegate>
{
    _Bool _chatEnable;
    _Bool _chatDisplay;
    LSChatView *_chatView;
    LSCommentHeaderInputView *_commentInputView;
    UIButton *_chatableBtn;
    LSDetailCommentChatInputBtn *_chatInputBtn;
}

@property(nonatomic) _Bool chatDisplay; // @synthesize chatDisplay=_chatDisplay;
@property(retain, nonatomic) LSDetailCommentChatInputBtn *chatInputBtn; // @synthesize chatInputBtn=_chatInputBtn;
@property(retain, nonatomic) UIButton *chatableBtn; // @synthesize chatableBtn=_chatableBtn;
@property(retain, nonatomic) LSCommentHeaderInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(retain, nonatomic) LSChatView *chatView; // @synthesize chatView=_chatView;
- (void)setChatEnable:(_Bool)arg1;
- (_Bool)chatEnable;
- (void).cxx_destruct;
- (void)setChatInputShow:(_Bool)arg1;
- (void)chatBtnEvent:(id)arg1 selectState:(_Bool)arg2;
- (void)commentButtonTapped:(id)arg1;
- (void)refreshUserAvatar;
- (void)makeImageViewRound:(id)arg1;
- (void)loadUserAvatarForCommentButton:(id)arg1;
- (void)sendByPowermsg:(id)arg1;
- (void)commentHeadetInputView:(id)arg1 didCommitComments:(id)arg2;
- (void)weakTypeFrame;
- (void)doLoginSuccess;
- (void)chatButtonTapped:(id)arg1;
- (void)updateChatViewLocationWhenFullScreen;
- (void)leaveVRMode;
- (void)enterVRMode;
- (void)toolBarDidHiddenAnimation;
- (void)pluginWillShow;
- (_Bool)canShow;
- (void)endPlayCode:(long long)arg1;
- (void)preload;
- (void)layout:(_Bool)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)initControls;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
