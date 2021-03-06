//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "LSLiveYTPlayerDelegate.h"

@class LSLivePlayer, LSNewLivePlayerViewManager, NSString;

@interface LSCommponentView : UIView <LSLiveYTPlayerDelegate>
{
    LSLivePlayer *_player;
    LSNewLivePlayerViewManager *_vpManager;
}

+ (id)createWithPlayer:(id)arg1;
@property(nonatomic) LSNewLivePlayerViewManager *vpManager; // @synthesize vpManager=_vpManager;
@property(nonatomic) __weak LSLivePlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)preload;
- (void)willDisappear;
- (void)willAppear;
- (void)willShow;
- (void)willHidden;
- (void)backToHomePage;
- (void)initControls;
- (id)initWithPlayer:(id)arg1 viewManager:(id)arg2;
- (id)initWithPlayer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

