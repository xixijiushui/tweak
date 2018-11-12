//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KSInstance, NSDictionary, NSMutableDictionary, NSTimer, UITabBar, YKTabBarTip;

@interface YKTabBarTipsManager : NSObject
{
    UITabBar *_tabBar;
    NSMutableDictionary *_tips;
    NSDictionary *_tabKeyMap;
    NSTimer *_timer;
    KSInstance *_ksInstance;
    YKTabBarTip *_nearestTip;
}

+ (id)sharedInstance;
@property(retain, nonatomic) YKTabBarTip *nearestTip; // @synthesize nearestTip=_nearestTip;
@property(retain, nonatomic) KSInstance *ksInstance; // @synthesize ksInstance=_ksInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDictionary *tabKeyMap; // @synthesize tabKeyMap=_tabKeyMap;
@property(retain, nonatomic) NSMutableDictionary *tips; // @synthesize tips=_tips;
@property(nonatomic) __weak UITabBar *tabBar; // @synthesize tabBar=_tabBar;
- (void).cxx_destruct;
- (void)receiveTabBarSubviewChange:(id)arg1;
- (void)receiveWillEnterForeground:(id)arg1;
- (void)timeFire:(id)arg1;
- (void)clearTimer;
- (_Bool)sanityCheckTip:(id)arg1;
- (double)currentTime;
- (void)renderWithTip:(id)arg1;
- (double)parseTimeString:(id)arg1;
- (_Bool)isInTimeFrom:(id)arg1 to:(id)arg2;
- (double)centerXForTabKey:(unsigned long long)arg1;
- (void)appendTips:(id)arg1;
- (void)appendTip:(id)arg1;
- (void)clearAll;
- (void)clearTipsWithModuleName:(id)arg1;
- (void)showTipsIfNeeded;
- (id)init;
- (void)dealloc;

@end

