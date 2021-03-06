//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, YKBarrageInteractiveProfile, YKBarrageVoteDisplay;

@interface YKBarrageWatchingSettings : NSObject
{
    _Bool _isWorldCup;
    NSDictionary *_defaultSettings;
    YKBarrageVoteDisplay *_voteDisplay;
    YKBarrageInteractiveProfile *_interactiveProfile;
    NSDictionary *_globalDefaultSettings;
}

+ (float)maximumFontSize;
+ (float)minimumFontSize;
+ (float)velocityValueFromDuration:(float)arg1;
+ (float)maximumVelocity;
+ (float)minimumVelocity;
+ (float)maximumDensity;
+ (float)minimumDensity;
+ (float)maximumTransparency;
+ (float)minimumTransparency;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *globalDefaultSettings; // @synthesize globalDefaultSettings=_globalDefaultSettings;
@property(nonatomic) _Bool isWorldCup; // @synthesize isWorldCup=_isWorldCup;
@property(retain, nonatomic) YKBarrageInteractiveProfile *interactiveProfile; // @synthesize interactiveProfile=_interactiveProfile;
@property(retain, nonatomic) YKBarrageVoteDisplay *voteDisplay; // @synthesize voteDisplay=_voteDisplay;
- (void).cxx_destruct;
- (_Bool)defaultSafaAreaEnable;
- (_Bool)defaultColorFilter;
- (_Bool)defaultKeyWordFilter;
- (_Bool)defaultBottomFilter;
- (_Bool)defaultTopFilter;
- (float)defaultFontSize;
- (float)defaultVelocity;
- (float)defaultDensity;
- (float)defaultTransparency;
@property(retain, nonatomic) NSDictionary *defaultSettings; // @synthesize defaultSettings=_defaultSettings;
- (id)init;

@end

