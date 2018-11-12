//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "LFRoomInteractiveProtocol.h"

@class LFLivePlayerController, LFRContainerViewController, LFRoomConfig, LFRoomModel, NSString, UIImageView;

@interface LFRLiveViewController : UIViewController <LFRoomInteractiveProtocol>
{
    long long __holdStatusBarStyle;
    _Bool _roomTypeFromRequest;
    _Bool _willPushToDisplay;
    LFRoomModel *_roomModel;
    LFRoomConfig *_roomConfig;
    LFRContainerViewController *_containerViewController;
    LFLivePlayerController *_playerController;
    double _duration;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) LFLivePlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) __weak LFRContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) _Bool willPushToDisplay; // @synthesize willPushToDisplay=_willPushToDisplay;
@property(nonatomic) _Bool roomTypeFromRequest; // @synthesize roomTypeFromRequest=_roomTypeFromRequest;
@property(retain, nonatomic) LFRoomConfig *roomConfig; // @synthesize roomConfig=_roomConfig;
@property(retain, nonatomic) LFRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (id)setupPlayerController;
- (void)setupTipAlertView;
- (void)netWorkStatusChange:(id)arg1;
- (void)didEnterForeground;
- (void)didEnterBackground;
- (void)didResumeCurrentRoomStatus;
- (void)didStopCurrentRoomStatus;
- (void)didFreshRoomStatus;
- (void)jumpWithRouterUrl:(id)arg1 userInfo:(id)arg2 transition:(unsigned long long)arg3 animated:(_Bool)arg4 toViewController:(id *)arg5;
- (void)jumpWithRouterUrl:(id)arg1 userInfo:(id)arg2 toViewController:(id *)arg3;
- (void)jumpWithRouterUrl:(id)arg1 userInfo:(id)arg2 transition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)jumpWithRouterUrl:(id)arg1 userInfo:(id)arg2;
- (void)didAnalyticsCurrentLiveRoom:(_Bool)arg1;
- (void)updatePlayerMuteOrNot:(_Bool)arg1;
- (void)refreshPlayer;
- (void)shutDownPlayer;
- (void)preparePlayerController;
- (void)didLeaveRoom;
- (void)startEnterRoom;
- (void)liveRoomDidClose;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContainerViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

