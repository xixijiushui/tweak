//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class LFRPGrabDetailView, LFRPGrabResponseModel, LFRPTransition, LFSocketConnection, LFUserModel, NSString, UIButton;

@interface LFRPGrabDetailViewController : UIViewController
{
    _Bool _isFollowedAnchor;
    _Bool _isPLURedPacket;
    LFRPGrabDetailView *_detailView;
    LFSocketConnection *_socketConnection;
    CDUnknownBlockType _closeBlock;
    LFRPGrabResponseModel *_grabResponse;
    NSString *_roomId;
    LFUserModel *_anchor;
    UIButton *_backButton;
    LFRPTransition *_transition;
}

@property(retain, nonatomic) LFRPTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool isPLURedPacket; // @synthesize isPLURedPacket=_isPLURedPacket;
@property(nonatomic) _Bool isFollowedAnchor; // @synthesize isFollowedAnchor=_isFollowedAnchor;
@property(retain, nonatomic) LFUserModel *anchor; // @synthesize anchor=_anchor;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) LFRPGrabResponseModel *grabResponse; // @synthesize grabResponse=_grabResponse;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) LFSocketConnection *socketConnection; // @synthesize socketConnection=_socketConnection;
@property(retain, nonatomic) LFRPGrabDetailView *detailView; // @synthesize detailView=_detailView;
- (void).cxx_destruct;
- (id)sutupDetailView;
- (void)backButtonClicked:(id)arg1;
- (void)fillInfomationWithErrorHeader:(id)arg1;
- (void)fillInfomationWithAnchorHeader:(id)arg1;
- (void)fillInfomationWithDefaultHeader:(id)arg1;
- (id)shortPrice:(long long)arg1;
- (id)imageWithCornerRadius:(double)arg1 image:(id)arg2;
- (id)userInfomationWithNickname:(id)arg1 avatar:(id)arg2;
- (void)didUnFollowedUserNotification:(id)arg1;
- (void)didFollowedUserNotification:(id)arg1;
- (void)close;
- (void)grabButtonClicked:(id)arg1;
- (void)followButtonClicked:(id)arg1;
- (void)showInViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRoomId:(id)arg1 anchor:(id)arg2 followedAnchor:(_Bool)arg3 grabResponse:(id)arg4 isPLURedPacket:(_Bool)arg5;

@end

