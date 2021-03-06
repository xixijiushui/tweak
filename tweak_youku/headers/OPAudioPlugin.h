//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class NSString, OPServiceMoreLayoutModel, PLCollectionManager, UIButton, UIImage, UILabel, YKJSONClient;

@interface OPAudioPlugin : OPPlugin
{
    OPServiceMoreLayoutModel *_landscapeMoreLModel;
    OPServiceMoreLayoutModel *_portraitMoreLModel;
    PLCollectionManager *_collectionManager;
    YKJSONClient *_jsonClient;
    UIImage *_lockScreenImage;
    NSString *_currentLockScreenImageURL;
    UIButton *_backVideoButton;
    UILabel *_audioModeLabel;
}

@property(retain, nonatomic) UILabel *audioModeLabel; // @synthesize audioModeLabel=_audioModeLabel;
@property(retain, nonatomic) UIButton *backVideoButton; // @synthesize backVideoButton=_backVideoButton;
@property(copy, nonatomic) NSString *currentLockScreenImageURL; // @synthesize currentLockScreenImageURL=_currentLockScreenImageURL;
@property(retain, nonatomic) UIImage *lockScreenImage; // @synthesize lockScreenImage=_lockScreenImage;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) PLCollectionManager *collectionManager; // @synthesize collectionManager=_collectionManager;
- (void).cxx_destruct;
- (void)audioPlayerAvailable:(id)arg1;
- (void)audioPlayerPrepareError;
- (void)backVideoAction;
- (void)removeBackVideoButton;
- (void)refreshBackVideoButton;
- (void)pauseAction;
- (void)playAction;
- (_Bool)isFavourite;
- (void)dislikeItemActionFromLocal:(id)arg1;
- (void)dislikeItemAction;
- (void)likeItemActionFromLocal:(id)arg1;
- (void)likeItemAction;
- (_Bool)isNormalLogin;
- (void)refreshLikeCommand;
- (void)removeAudioCommand;
- (void)remoteControlEventHandler;
- (_Bool)enableRemote;
- (void)refreshLockScreenInfo;
- (void)refreshAudioButtonStatus;
- (void)refreshAudioButtonDisableStatus;
- (void)switchAudioMode:(_Bool)arg1 isBackButton:(_Bool)arg2;
- (void)serviceEventAction:(id)arg1;
- (void)removeLayoutModel;
- (void)appendLayoutModel;
- (void)setupLayoutModel;
- (void)playStateDidChangeFromOldPlayStateToNewPlayState:(id)arg1;
- (void)playSceneDidChangeFromOldPlaySceneToNewPlayScene:(id)arg1;
- (void)playModeIsChangingFromOldModeToNewMode:(id)arg1;
- (void)playModeDidChangeFromOldPlayModeToNewPlayMode:(id)arg1;
- (void)playVideoInfoDidPrepare:(id)arg1;
- (void)playDidFinishInitConfiguration:(id)arg1;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;
- (void)dealloc;

@end

