//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZCacheConfig.h"

@class NSDictionary, NSString;

@interface ZCacheCommonConfig : ZCacheConfig
{
    _Bool _isAutoRegisterApp;
    _Bool _isCheckCleanup;
    _Bool _isOpenCombo;
    _Bool _supportAppDecryption;
    NSString *_customsConfigPrefix;
    NSString *_packageZipPreviewPrefix;
    NSString *_packageZipPrefix;
    long long _configUpdateInterval;
    long long _packageAccessInterval;
    long long _packageRemoveInterval;
    long long _recoveryInterval;
    unsigned long long _customsDirectQueryLimit;
    long long _packageDownloadLimit;
    unsigned long long _packageMaxAppCount;
    double _packagePriorityWeight;
    NSDictionary *_verifySampleRate;
}

+ (id)currentConfig;
+ (id)defaultConfig;
+ (id)meta;
@property(copy, nonatomic) NSDictionary *verifySampleRate; // @synthesize verifySampleRate=_verifySampleRate;
@property(nonatomic) _Bool supportAppDecryption; // @synthesize supportAppDecryption=_supportAppDecryption;
@property(nonatomic) double packagePriorityWeight; // @synthesize packagePriorityWeight=_packagePriorityWeight;
@property(nonatomic) unsigned long long packageMaxAppCount; // @synthesize packageMaxAppCount=_packageMaxAppCount;
@property(nonatomic) long long packageDownloadLimit; // @synthesize packageDownloadLimit=_packageDownloadLimit;
@property(nonatomic) _Bool isOpenCombo; // @synthesize isOpenCombo=_isOpenCombo;
@property(nonatomic) _Bool isCheckCleanup; // @synthesize isCheckCleanup=_isCheckCleanup;
@property(nonatomic) _Bool isAutoRegisterApp; // @synthesize isAutoRegisterApp=_isAutoRegisterApp;
@property(nonatomic) unsigned long long customsDirectQueryLimit; // @synthesize customsDirectQueryLimit=_customsDirectQueryLimit;
@property(nonatomic) long long recoveryInterval; // @synthesize recoveryInterval=_recoveryInterval;
@property(nonatomic) long long packageRemoveInterval; // @synthesize packageRemoveInterval=_packageRemoveInterval;
@property(nonatomic) long long packageAccessInterval; // @synthesize packageAccessInterval=_packageAccessInterval;
@property(nonatomic) long long configUpdateInterval; // @synthesize configUpdateInterval=_configUpdateInterval;
@property(copy, nonatomic) NSString *packageZipPrefix; // @synthesize packageZipPrefix=_packageZipPrefix;
@property(copy, nonatomic) NSString *packageZipPreviewPrefix; // @synthesize packageZipPreviewPrefix=_packageZipPreviewPrefix;
@property(copy, nonatomic) NSString *customsConfigPrefix; // @synthesize customsConfigPrefix=_customsConfigPrefix;
- (void).cxx_destruct;
- (id)init;

@end
