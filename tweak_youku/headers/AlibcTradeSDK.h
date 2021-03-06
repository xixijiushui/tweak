//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AlibcTradeSDK : NSObject
{
}

+ (id)sharedInstance;
- (id)getLogFilePath;
- (_Bool)handleOpenURL:(id)arg1;
- (id)tradeService;
- (void)checkResoucesAndConfigure;
- (void)asyncInitWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)enableAuthVipMode;
- (void)setChannel:(id)arg1 name:(id)arg2;
- (void)setDebugLogOpen:(_Bool)arg1;
- (void)setIsForceH5:(_Bool)arg1;
- (void)setIsvVersion:(id)arg1;
- (void)setIsSyncForTaoke:(_Bool)arg1;
- (void)setTaokeParams:(id)arg1;
- (void)setISVCode:(id)arg1;
- (long long)getEnv;
- (void)setEnv:(long long)arg1;

@end

