//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSString;

@interface ALiConfigService : NSObject
{
    NSMutableDictionary *localConfig;
    NSMutableDictionary *remoteConfig;
    NSDate *configUpdateTime;
    NSString *localConfigFile;
    NSString *_isvVersion;
    NSString *_channelName;
    NSString *_channelType;
    NSString *_alizfRequestSender;
}

+ (id)sharedConfig;
@property(retain, nonatomic) NSString *alizfRequestSender; // @synthesize alizfRequestSender=_alizfRequestSender;
@property(copy, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(retain, nonatomic) NSString *isvVersion; // @synthesize isvVersion=_isvVersion;
- (void).cxx_destruct;
- (_Bool)checkIsConfigLegal:(id)arg1;
- (id)configUrl;
- (void)refleshSomeConfig;
- (void)loadRemoteConfig;
- (void)loadLocalConfig;
- (_Bool)configFromRemoteAndLocal:(id)arg1;
- (id)remoteConfigValueForKey:(id)arg1;
- (_Bool)configFromPublicAndRemoteAndLocal:(id)arg1;
@property(readonly, nonatomic) NSString *ttid;
- (_Bool)isAuthVip;
- (void)setIsAuthVip:(_Bool)arg1;
@property(readonly, nonatomic) NSString *channel;
- (id)isvConfigForKey:(id)arg1;
- (void)setIsvConfig:(id)arg1 forKey:(id)arg2;
- (void)setIsSyncForTaoke:(_Bool)arg1;
@property(nonatomic) _Bool isForceH5;
- (void)setShowTypeByRemote:(id)arg1;
- (_Bool)isLoginDegarade;
- (_Bool)isSyncForTaoke;
- (void)appBecomeActive:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)updateConfig;

@end

