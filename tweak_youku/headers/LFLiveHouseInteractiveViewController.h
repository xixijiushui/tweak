//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class LFInteractiveGiftViewController, LFInteractivePullGuideView, LFInteractiveTopView, LFMessageDispatcher, LFNewVoteController, LFRoomConfig, LFRoomModel, LFSocketConnection, LFVoteService, LFWebViewController, NSMutableArray, NSString, UIScrollView, UIView;

@interface LFLiveHouseInteractiveViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _isSetTopArray;
    LFRoomModel *_roomModel;
    LFRoomConfig *_roomConfig;
    CDUnknownBlockType _goRecharge;
    CDUnknownBlockType _getMic;
    CDUnknownBlockType _sdkNeedLogin;
    LFInteractiveTopView *_topView;
    LFInteractivePullGuideView *_pullGuideView;
    UIScrollView *_bgScrollView;
    long long _defaultPosition;
    LFInteractiveGiftViewController *_gift;
    LFNewVoteController *_voteNewController;
    LFMessageDispatcher *_dispatcher;
    LFSocketConnection *_socketConnection;
    long long _defaultConf;
    NSMutableArray *_topArray;
    LFVoteService *_voteService;
    LFWebViewController *_webController;
    UIView *_v;
}

@property(nonatomic) _Bool isSetTopArray; // @synthesize isSetTopArray=_isSetTopArray;
@property(retain, nonatomic) UIView *v; // @synthesize v=_v;
@property(retain, nonatomic) LFWebViewController *webController; // @synthesize webController=_webController;
@property(retain, nonatomic) LFVoteService *voteService; // @synthesize voteService=_voteService;
@property(retain, nonatomic) NSMutableArray *topArray; // @synthesize topArray=_topArray;
@property(nonatomic) long long defaultConf; // @synthesize defaultConf=_defaultConf;
@property(retain, nonatomic) LFSocketConnection *socketConnection; // @synthesize socketConnection=_socketConnection;
@property(retain, nonatomic) LFMessageDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) LFNewVoteController *voteNewController; // @synthesize voteNewController=_voteNewController;
@property(retain, nonatomic) LFInteractiveGiftViewController *gift; // @synthesize gift=_gift;
@property(nonatomic) long long defaultPosition; // @synthesize defaultPosition=_defaultPosition;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(retain, nonatomic) LFInteractivePullGuideView *pullGuideView; // @synthesize pullGuideView=_pullGuideView;
@property(retain, nonatomic) LFInteractiveTopView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType sdkNeedLogin; // @synthesize sdkNeedLogin=_sdkNeedLogin;
@property(copy, nonatomic) CDUnknownBlockType getMic; // @synthesize getMic=_getMic;
@property(copy, nonatomic) CDUnknownBlockType goRecharge; // @synthesize goRecharge=_goRecharge;
@property(retain, nonatomic) LFRoomConfig *roomConfig; // @synthesize roomConfig=_roomConfig;
@property(retain, nonatomic) LFRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)interactiveViewIsShowOrHide:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)setH5View:(id)arg1 tag:(int)arg2;
- (id)setVoteView:(id)arg1 tag:(int)arg2;
- (id)setGiftView:(id)arg1 tag:(int)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDispatcher:(id)arg1 socketConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

