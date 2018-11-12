//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPDataSource.h"

@class NSMutableDictionary, OPMode;

@interface OPPlayModeDataSource : OPDataSource
{
    _Bool _lockScreen;
    _Bool _enableAutorotate;
    _Bool _disableOrientation;
    _Bool _modeIsChanging;
    _Bool _nextModeAnimated;
    OPMode *_suspendFromMode;
    OPMode *_fromMode;
    OPMode *_currentMode;
    unsigned long long _supportedOrientations;
    long long _previousOrientation;
    long long _currentOrientation;
    double _rotateDuration;
    NSMutableDictionary *_modesDictionary;
    OPMode *_nextMode;
    NSMutableDictionary *_sizeDictionary;
    NSMutableDictionary *_rectDictionary;
    NSMutableDictionary *_edgeDictionary;
    struct UIEdgeInsets _suspendEdgeInsets;
}

@property(retain, nonatomic) NSMutableDictionary *edgeDictionary; // @synthesize edgeDictionary=_edgeDictionary;
@property(retain, nonatomic) NSMutableDictionary *rectDictionary; // @synthesize rectDictionary=_rectDictionary;
@property(retain, nonatomic) NSMutableDictionary *sizeDictionary; // @synthesize sizeDictionary=_sizeDictionary;
@property(nonatomic) _Bool nextModeAnimated; // @synthesize nextModeAnimated=_nextModeAnimated;
@property(retain, nonatomic) OPMode *nextMode; // @synthesize nextMode=_nextMode;
@property _Bool modeIsChanging; // @synthesize modeIsChanging=_modeIsChanging;
@property(retain, nonatomic) NSMutableDictionary *modesDictionary; // @synthesize modesDictionary=_modesDictionary;
@property(readonly, nonatomic) struct UIEdgeInsets suspendEdgeInsets; // @synthesize suspendEdgeInsets=_suspendEdgeInsets;
@property(nonatomic) double rotateDuration; // @synthesize rotateDuration=_rotateDuration;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(nonatomic) unsigned long long supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) _Bool disableOrientation; // @synthesize disableOrientation=_disableOrientation;
@property(nonatomic) _Bool enableAutorotate; // @synthesize enableAutorotate=_enableAutorotate;
@property(retain, nonatomic) OPMode *currentMode; // @synthesize currentMode=_currentMode;
@property(retain, nonatomic) OPMode *fromMode; // @synthesize fromMode=_fromMode;
@property(retain, nonatomic) OPMode *suspendFromMode; // @synthesize suspendFromMode=_suspendFromMode;
@property(nonatomic) _Bool lockScreen; // @synthesize lockScreen=_lockScreen;
- (void).cxx_destruct;
- (void)receiveDeviceOrientationDidChangeNotification:(id)arg1;
- (struct UIEdgeInsets)queryPlayerViewEdgeInsetsforMode:(id)arg1;
- (void)updatePlayerViewEdgeInsetsForMode:(id)arg1 contentEdgeInsets:(struct UIEdgeInsets)arg2;
- (struct CGAffineTransform)layerViewTransformForMode:(id)arg1;
- (struct CGRect)safeLayerViewFrameForMode:(id)arg1;
- (struct CGRect)layerViewFrameForMode:(id)arg1;
- (void)setLayerViewFrameForMode:(id)arg1 frame:(struct CGRect)arg2;
- (struct CGSize)containerSizeWithMode:(id)arg1;
- (void)updateSuspendEdgeInsets:(struct UIEdgeInsets)arg1;
- (_Bool)switchModeWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (id)queryModeWithIdentifier:(id)arg1;
- (_Bool)registerModeWithIdentifier:(id)arg1 type:(long long)arg2;
- (void)dealloc;
- (void)switchMode:(id)arg1;
- (void)registerMode;
- (id)init;

@end
