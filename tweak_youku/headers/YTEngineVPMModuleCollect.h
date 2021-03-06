//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface YTEngineVPMModuleCollect : NSObject
{
    NSMutableDictionary *_playActions;
    double _imageAdStartTime;
    double _imageAdDuration;
    NSString *_session;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
@property(nonatomic) double imageAdDuration; // @synthesize imageAdDuration=_imageAdDuration;
@property(nonatomic) double imageAdStartTime; // @synthesize imageAdStartTime=_imageAdStartTime;
@property(retain, nonatomic) NSMutableDictionary *playActions; // @synthesize playActions=_playActions;
- (void).cxx_destruct;
- (id)onePlayAction;
- (id)onePlayActionWithSession:(id)arg1;
@property(readonly, nonatomic) double performancePeriod;
- (void)addPlayActionEvent:(id)arg1 seesion:(id)arg2 userInfo:(id)arg3;
- (void)addPlayActionEvent:(id)arg1;
- (id)getSessionWithParam:(id)arg1;
- (void)setSessionId:(id)arg1;
- (id)init;

@end

