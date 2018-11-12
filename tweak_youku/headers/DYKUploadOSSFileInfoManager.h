//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DYKUploadOSSFileInfoManager : NSObject
{
    NSMutableDictionary *_fileInfoCache;
}

+ (_Bool)removeLocalOSSFileInfoForKey:(id)arg1;
+ (id)loadLocalOSSFileInfoForKey:(id)arg1;
+ (_Bool)storeLocalOSSFileInfo:(id)arg1 forKey:(id)arg2;
+ (id)targetFilePathForKey:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeCacheOSSFileInfoForKey:(id)arg1;
- (void)cacheLocalOSSFileInfo:(id)arg1 forKey:(id)arg2;
- (id)loadCacheLocalOSSFileInfoForKey:(id)arg1;
- (id)init;

@end

