//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LFDownloadVideoCache : NSObject
{
}

+ (id)barrierQueue;
+ (void)saveDownloadVideoFilesize:(id)arg1 size:(unsigned long long)arg2;
+ (_Bool)isDownloadComplte:(id)arg1;
+ (id)newDucumentsPlayerDataPath;
+ (id)newDucumentsPlayerDataPath:(id)arg1;
+ (unsigned long long)getDiskFreeSize;
+ (_Bool)haveFreeSizeToCacheFileWithSize:(unsigned long long)arg1;
+ (void)deleteAllTempCache;
+ (id)cacheKeyForURL:(id)arg1;
+ (id)videoCacheTemporaryPathForKey:(id)arg1;
+ (id)newTempPlayerDirectory;

@end
