//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, UIView;

@interface BPModuleTask : NSObject
{
    NSMutableDictionary *_hidePointInfo;
    NSMutableDictionary *_showPointInfo;
    _Bool _adaptShowPoint;
    _Bool _isExecutable;
    _Bool _hideWhenLocked;
    _Bool _hideWhenPureMode;
    _Bool _unregisterWhenVideoChanged;
    id <BPModuleTaskDelegate> _delegate;
    NSString *_groupIdentifier;
    unsigned long long _priority;
    long long _state;
    long long _viewState;
    UIView *_moduleView;
    unsigned long long _moduleViewLevel;
    long long _animation;
    long long _startTime;
    long long _endTime;
    long long _duration;
    long long _showTime;
    long long _hideTime;
    NSArray *_supportedModes;
    NSDictionary *_userInfo;
}

@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool unregisterWhenVideoChanged; // @synthesize unregisterWhenVideoChanged=_unregisterWhenVideoChanged;
@property(nonatomic) _Bool hideWhenPureMode; // @synthesize hideWhenPureMode=_hideWhenPureMode;
@property(nonatomic) _Bool hideWhenLocked; // @synthesize hideWhenLocked=_hideWhenLocked;
@property(nonatomic) _Bool isExecutable; // @synthesize isExecutable=_isExecutable;
@property(retain, nonatomic) NSArray *supportedModes; // @synthesize supportedModes=_supportedModes;
@property(nonatomic) long long hideTime; // @synthesize hideTime=_hideTime;
@property(nonatomic) long long showTime; // @synthesize showTime=_showTime;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool adaptShowPoint; // @synthesize adaptShowPoint=_adaptShowPoint;
@property(nonatomic) long long animation; // @synthesize animation=_animation;
@property(nonatomic) unsigned long long moduleViewLevel; // @synthesize moduleViewLevel=_moduleViewLevel;
@property(retain, nonatomic) UIView *moduleView; // @synthesize moduleView=_moduleView;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(nonatomic) __weak id <BPModuleTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setShowPoint:(struct CGPoint)arg1 forMode:(id)arg2;
- (void)setHidePoint:(struct CGPoint)arg1 forMode:(id)arg2;
- (struct CGPoint)queryShowPointWithMode:(id)arg1;
- (struct CGPoint)queryHidePointWithMode:(id)arg1;
- (id)initWithGroupIdentifier:(id)arg1;

@end

