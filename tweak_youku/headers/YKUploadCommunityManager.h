//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKUploadCommunityManager : NSObject
{
    CDUnknownBlockType _searchCompletionHandler;
}

+ (id)cachedData;
+ (void)cacheThirdAppData:(id)arg1;
+ (id)cachePath;
+ (id)docmentPath;
+ (id)responseDictionaryWithResponseData:(id)arg1;
+ (id)errorWithJsonDic:(id)arg1;
+ (id)appModelsWithResponseDic:(id)arg1;
+ (void)getThirdAppListCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)getCommunitysWithVid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)generareSignWithParams:(id)arg1 key:(id)arg2;
- (void).cxx_destruct;
- (void)cancelLastSearch;

@end

