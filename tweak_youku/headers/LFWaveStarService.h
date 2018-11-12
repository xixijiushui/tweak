//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFGiftService, LFWaveStarInfoModel, NSTimer;

@interface LFWaveStarService : NSObject
{
    id <LFWaveStarDelegate> _starDelegate;
    NSTimer *_starPresentTimer;
    NSTimer *_getStarPresentTimer;
    LFWaveStarInfoModel *_starPresentInfo;
    long long _starPresentTodayPoolSize;
    long long _getStarPresentRetryTimes;
    long long _presentStarCount;
    LFGiftService *_giftService;
}

+ (id)shareInstance;
@property(retain, nonatomic) LFGiftService *giftService; // @synthesize giftService=_giftService;
@property long long presentStarCount; // @synthesize presentStarCount=_presentStarCount;
@property(nonatomic) long long getStarPresentRetryTimes; // @synthesize getStarPresentRetryTimes=_getStarPresentRetryTimes;
@property(nonatomic) long long starPresentTodayPoolSize; // @synthesize starPresentTodayPoolSize=_starPresentTodayPoolSize;
@property(retain, nonatomic) LFWaveStarInfoModel *starPresentInfo; // @synthesize starPresentInfo=_starPresentInfo;
@property(retain, nonatomic) NSTimer *getStarPresentTimer; // @synthesize getStarPresentTimer=_getStarPresentTimer;
@property(retain, nonatomic) NSTimer *starPresentTimer; // @synthesize starPresentTimer=_starPresentTimer;
@property(nonatomic) __weak id <LFWaveStarDelegate> starDelegate; // @synthesize starDelegate=_starDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearMemory;
- (long long)getStarPresentTodayPoolSize;
- (void)reloadStar;
- (long long)getStarPresentCount;
- (void)updateStarPresentCount:(long long)arg1;
- (void)updateStarPresent:(long long)arg1;
- (void)onStarPresentTimer:(id)arg1;
- (void)onGetStarPresentTimer:(id)arg1;
- (void)restartNextStarTimer:(long long)arg1;
- (id)init;

@end
