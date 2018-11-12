//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseDialogueView.h"

#import "HYDialogueProtocol.h"

@class HYDialogueAvatarView, HYDialogueButtonView, HYDialogueTitleView, HYRecommendLoginInfo, NSString;

@interface HYChangeAccountDiaglogue : HYBaseDialogueView <HYDialogueProtocol>
{
    CDUnknownBlockType _comfirmChangeLogin;
    HYDialogueAvatarView *_avatarView;
    HYDialogueTitleView *_titleView;
    HYDialogueTitleView *_subtitleView;
    HYDialogueButtonView *_submitView;
    HYRecommendLoginInfo *_recommendLoginInfo;
    long long _titleHeight;
    long long _subtitleHeight;
}

@property(nonatomic) long long subtitleHeight; // @synthesize subtitleHeight=_subtitleHeight;
@property(nonatomic) long long titleHeight; // @synthesize titleHeight=_titleHeight;
@property(retain, nonatomic) HYRecommendLoginInfo *recommendLoginInfo; // @synthesize recommendLoginInfo=_recommendLoginInfo;
@property(retain, nonatomic) HYDialogueButtonView *submitView; // @synthesize submitView=_submitView;
@property(retain, nonatomic) HYDialogueTitleView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) HYDialogueTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) HYDialogueAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) CDUnknownBlockType comfirmChangeLogin; // @synthesize comfirmChangeLogin=_comfirmChangeLogin;
- (void).cxx_destruct;
- (id)mailString;
- (id)mobileString;
- (_Bool)isBindMobile;
- (id)passportName;
- (_Bool)disableEdge;
- (double)dialogueWidth;
- (double)dialogueHeight;
- (id)pageName;
- (id)spm;
- (void)closeButtonTapped;
- (void)handleOAuthLoginSuccess;
- (void)handleChangeAccount;
- (void)submitButtonTap;
- (void)layoutSubviews;
- (void)setLoginInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *backgroundImageUrl;
@property(copy, nonatomic) NSString *closeIconImageUrl;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HYDialogueContainerViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
