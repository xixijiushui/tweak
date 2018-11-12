//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString, NWPolicyModel;

@interface NWPolicyInternel : NSObject
{
    NSString *_currentNettype;
    NSRecursiveLock *_lock;
    _Bool _inited;
    NSMutableDictionary *_schemeDict;
    NWPolicyModel *_currentPolicyMode;
    NSMutableDictionary *_failOverDict;
    NSMutableDictionary *_config;
}

+ (_Bool)isWiFiPolicyFile:(id)arg1;
+ (id)configFilePath;
+ (id)schemeFilePath;
+ (id)strategyDoc;
+ (void)checkStrategyDir;
+ (id)stratgyPathWithEnviroment;
+ (id)currentStrategyPath:(id)arg1;
+ (id)shareInstance;
@property(readonly, nonatomic) NSMutableDictionary *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSMutableDictionary *failOverDict; // @synthesize failOverDict=_failOverDict;
@property(readonly, nonatomic) NWPolicyModel *currentPolicyMode; // @synthesize currentPolicyMode=_currentPolicyMode;
@property(readonly, nonatomic) NSMutableDictionary *schemeDict; // @synthesize schemeDict=_schemeDict;
- (void).cxx_destruct;
- (void)clearFlowControlBeginTime;
- (void)setFlowControlBeginTime:(_Bool)arg1;
- (double)flowControlBegintime;
- (void)setFlowControlTime:(id)arg1;
- (int)flowControlTime;
- (void)setFlowControLevel:(id)arg1;
- (int)flowControlLevel:(_Bool)arg1;
- (_Bool)isLoading;
- (_Bool)isNoNetwork;
- (void)setCv:(id)arg1;
- (id)currentNettypeString:(unsigned long long)arg1;
- (id)currentNettypeString;
- (id)currentPolicyConfiguration;
- (id)colletExpiredHosts:(id)arg1 modificationTime:(double)arg2 maxCount:(unsigned long long)arg3;
- (void)resetFailoverTimestamp:(id)arg1;
- (void)eliminateSchemesLRU;
- (void)updateSchemeModelWithOrigin:(id)arg1;
- (void)writePolicies2Disk;
- (void)onAppEnterBackground;
- (void)onEnvironmentChanged;
- (void)onNetworkStatusChanged;
- (void)deleteExpiredWiFiPolicyFiles;
- (void)buildHotDomainPolices;
- (void)loadBuiltinPoliciesWithHost:(id)arg1 withIPs:(id)arg2 withPublickey:(id)arg3 withProtocol:(id)arg4;
- (void)loadPoliciesWithNettype:(id)arg1;
- (void)loadSchemes;
- (void)loadConfig;
- (void)reloadWithSerialize:(_Bool)arg1;
- (void)removeAll;
- (_Bool)syncRefreshForHost:(id)arg1 withForce:(_Bool)arg2;
- (void)asyncRefreshForHost:(id)arg1 withForce:(_Bool)arg2;
- (void)failoverRefreshForHost:(id)arg1;
- (void)updateConfig:(id)arg1 fcl:(id)arg2 fct:(id)arg3;
- (void)updatePolicy:(id)arg1 withStatus:(_Bool)arg2;
- (void)updatePoliciesWithOrigins:(id)arg1 withNetType:(unsigned long long)arg2;
- (id)searchPoliciesWithHost:(id)arg1;
- (id)createBuiltinAccsPoliciesWithHost:(id)arg1 withType:(int)arg2;
- (id)searchPoliciesWithHost:(id)arg1 withScheme:(id)arg2 withType:(int)arg3;
- (id)currentHostScheme:(id)arg1;
- (id)currentHostCname:(id)arg1;
- (unsigned int)cv;
- (void)dealloc;
- (id)init;

@end
