//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, TBBizDownloadTask;

@interface AliNNResourceCenter : NSObject
{
    id <AliNNNetMonitorDelegate> _monitor;
    NSMutableDictionary *_cacheIndexDict;
    TBBizDownloadTask *_downloadTask;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TBBizDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) NSMutableDictionary *cacheIndexDict; // @synthesize cacheIndexDict=_cacheIndexDict;
@property(retain, nonatomic) id <AliNNNetMonitorDelegate> monitor; // @synthesize monitor=_monitor;
- (void).cxx_destruct;
- (void)prepareNetworkWithKey:(id)arg1 toolVersion:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)unzipAndUpdateCache:(id)arg1 zipPath:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (id)readCacheForKey:(id)arg1;
- (id)readCacheFromDiskForKey:(id)arg1;
- (void)writeCache:(id)arg1;
- (void)writeCacheToDisk:(id)arg1;
- (id)init;

@end
