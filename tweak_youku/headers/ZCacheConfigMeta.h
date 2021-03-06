//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ZCacheConfig;

@interface ZCacheConfigMeta : NSObject
{
    _Bool _checkVersion;
    NSString *_name;
    long long _index;
    ZCacheConfig *_defaultConfig;
    ZCacheConfig *_currentConfig;
    Class _configClass;
}

+ (id)getValidABT:(id)arg1;
+ (id)target;
@property(retain, nonatomic) Class configClass; // @synthesize configClass=_configClass;
@property(retain) ZCacheConfig *currentConfig; // @synthesize currentConfig=_currentConfig;
@property(readonly, nonatomic) ZCacheConfig *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
@property(readonly, nonatomic) _Bool checkVersion; // @synthesize checkVersion=_checkVersion;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)createLoader:(id)arg1 withTrigger:(long long)arg2;
- (void)resetConfig;
- (unsigned long long)updateConfig:(id)arg1 needSave:(_Bool)arg2 withError:(id *)arg3;
- (void)readConfigFromDisk;
- (id)initWithName:(id)arg1 index:(long long)arg2 checkVersion:(_Bool)arg3 configClass:(Class)arg4;

@end

