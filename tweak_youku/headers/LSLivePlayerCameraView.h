//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSCommponentView.h"

#import "LSLivePlayerExtensionEvent.h"

@class LSDetailPhoneMultiCameraView, LSLiveInfoModel, NSString;

@interface LSLivePlayerCameraView : LSCommponentView <LSLivePlayerExtensionEvent>
{
    _Bool _allowShowCameraView;
    LSDetailPhoneMultiCameraView *_multiCameraView;
    LSLiveInfoModel *_liveInfo;
}

@property(nonatomic) _Bool allowShowCameraView; // @synthesize allowShowCameraView=_allowShowCameraView;
@property(nonatomic) __weak LSLiveInfoModel *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) LSDetailPhoneMultiCameraView *multiCameraView; // @synthesize multiCameraView=_multiCameraView;
- (void).cxx_destruct;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)layout:(_Bool)arg1;
- (void)leaveVRMode;
- (void)enterVRMode;
- (void)lockScreenDidChange:(_Bool)arg1;
- (void)pluginWillHidden;
- (void)pluginWillShow;
- (void)toolBarDidShowAnimation;
- (void)toolBarDidHiddenAnimation;
- (void)live_endOldLive;
- (void)live_changeCamera:(id)arg1;
- (void)live_changeQuality:(id)arg1;
- (void)live_willBeiginNewLive;
- (void)openCameraList:(id)arg1;
- (_Bool)canShow;
- (void)initControls;
- (id)initWithPlayer:(id)arg1 viewManager:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)refreshDetailBy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

