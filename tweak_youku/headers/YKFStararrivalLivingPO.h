//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFStararrivalDateDurationPO;

@interface YKFStararrivalLivingPO : YKFAPIModel
{
    _Bool _subscribed;
    YKFStararrivalDateDurationPO *_duration;
    long long _gmtSubscribe;
    NSString *_introText;
    long long _liveId;
    NSString *_livePropagatingImageUrl;
    NSString *_liveStatusText;
    NSString *_liveUrl;
    long long _notifyType;
    NSString *_subscribeButtonText;
    NSString *_subscribeNotifyTitle;
    long long _subscribes;
}

@property(nonatomic) long long subscribes; // @synthesize subscribes=_subscribes;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSString *subscribeNotifyTitle; // @synthesize subscribeNotifyTitle=_subscribeNotifyTitle;
@property(retain, nonatomic) NSString *subscribeButtonText; // @synthesize subscribeButtonText=_subscribeButtonText;
@property(nonatomic) long long notifyType; // @synthesize notifyType=_notifyType;
@property(retain, nonatomic) NSString *liveUrl; // @synthesize liveUrl=_liveUrl;
@property(retain, nonatomic) NSString *liveStatusText; // @synthesize liveStatusText=_liveStatusText;
@property(retain, nonatomic) NSString *livePropagatingImageUrl; // @synthesize livePropagatingImageUrl=_livePropagatingImageUrl;
@property(nonatomic) long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *introText; // @synthesize introText=_introText;
@property(nonatomic) long long gmtSubscribe; // @synthesize gmtSubscribe=_gmtSubscribe;
@property(retain, nonatomic) YKFStararrivalDateDurationPO *duration; // @synthesize duration=_duration;
- (void).cxx_destruct;

@end

