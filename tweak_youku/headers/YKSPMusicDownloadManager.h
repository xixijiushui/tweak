//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class AVFSCache, NSMutableDictionary, NSString, NSURLSessionDownloadTask;

@interface YKSPMusicDownloadManager : NSObject <NSURLSessionDelegate>
{
    NSMutableDictionary *_tasks;
    NSMutableDictionary *_sessionModels;
    NSURLSessionDownloadTask *_task;
    AVFSCache *_cache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AVFSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSURLSessionDownloadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSMutableDictionary *sessionModels; // @synthesize sessionModels=_sessionModels;
@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
- (void).cxx_destruct;
- (void)downMusic:(id)arg1;
- (void)getMusicUrlInfo:(id)arg1 progress:(CDUnknownBlockType)arg2 state:(CDUnknownBlockType)arg3;
- (id)getMusicInfoforKey:(id)arg1;
- (void)saveMusicInfo:(id)arg1 forKey:(id)arg2;
- (id)musicURLAndlodUrl:(id)arg1;
- (_Bool)copyFile:(id)arg1 topath:(id)arg2;
- (_Bool)isHasFileByPath:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelDownload;
- (void)deleteAllFile;
- (void)deleteFile:(id)arg1;
- (id)fileName:(id)arg1;
- (id)filePath:(id)arg1;
- (id)filePathUpdateFromBigGay:(id)arg1;
- (long long)fileTotalLength:(id)arg1;
- (double)progress:(id)arg1;
- (_Bool)isCompletion:(id)arg1;
- (id)getSessionModel:(unsigned long long)arg1;
- (id)getTask:(id)arg1;
- (void)pause:(id)arg1;
- (void)start:(id)arg1;
- (id)musicFormat:(id)arg1;
- (void)handle:(id)arg1;
- (void)download:(id)arg1 progress:(CDUnknownBlockType)arg2 state:(CDUnknownBlockType)arg3;
- (void)createCacheDirectory;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

