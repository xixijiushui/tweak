//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZCacheConfigMeta.h"

@class NSDictionary, NSObject<OS_dispatch_queue>;

@interface ZCachePackageConfigMeta : ZCacheConfigMeta
{
    NSDictionary *_zcacheMap;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy) NSDictionary *zcacheMap; // @synthesize zcacheMap=_zcacheMap;
- (void).cxx_destruct;
- (void)resetConfig;
- (id)updatePackageConfigUnsafe:(CDUnknownBlockType)arg1;
- (unsigned long long)updateConfig:(id)arg1 needSave:(_Bool)arg2 withError:(id *)arg3;
- (void)readConfigFromDisk;
- (id)initWithName:(id)arg1 index:(long long)arg2 checkVersion:(_Bool)arg3 configClass:(Class)arg4;

@end
