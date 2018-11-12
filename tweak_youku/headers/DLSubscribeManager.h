//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKJSONClient;

@interface DLSubscribeManager : NSObject
{
    YKJSONClient *_jsonClient;
    YKJSONClient *_mtopJsonClient;
}

+ (_Bool)subscribeDownloadEnabled;
+ (id)manager;
@property(retain, nonatomic) YKJSONClient *mtopJsonClient; // @synthesize mtopJsonClient=_mtopJsonClient;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
- (void).cxx_destruct;
- (void)handleDownloadError:(id)arg1;
- (_Bool)subscribeDownloadConditionSatisfied;
- (void)addDownloadTask:(id)arg1 paused:(_Bool)arg2 error:(id *)arg3;
- (id)downloadTaskWithVid:(id)arg1 detailModel:(id)arg2;
- (void)downloadVideo:(id)arg1 detailModel:(id)arg2 paused:(_Bool)arg3 error:(id *)arg4;
- (void)downloadVideo:(id)arg1 sid:(id)arg2 paused:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadVideoWithSubcribeVideo:(id)arg1 paused:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadVideoWithSubcribeVideos:(id)arg1 finishedCount:(inout long long *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveSidsToLocalConfigIfNeeded:(id)arg1;
- (id)init;

@end

