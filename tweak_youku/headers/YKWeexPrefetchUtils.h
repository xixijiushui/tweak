//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKWeexPrefetchUtils : NSObject
{
}

+ (id)storageQueue:(id)arg1 class:(Class)arg2;
+ (void)fireEvent:(id)arg1 key:(id)arg2 data:(id)arg3 result:(_Bool)arg4;
+ (void)actuallySaveItem:(id)arg1 value:(id)arg2 StorageModuleClass:(Class)arg3 storageModule:(id)arg4 queue:(id)arg5 setItemSel:(SEL)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)saveToStorage:(id)arg1 key:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)notifyWeexViewControllerGotDataWithCacheKey:(id)arg1 key:(id)arg2 andData:(id)arg3;
+ (id)tryFetchApiDataWithUrl:(id)arg1 initProperty:(id)arg2;

@end

