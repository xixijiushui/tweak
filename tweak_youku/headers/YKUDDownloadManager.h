//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, YKUDDownloadScheduler, YKUDVideoManager;

@interface YKUDDownloadManager : NSObject
{
    YKUDDownloadScheduler *_scheduler;
    NSMutableArray *_listeners;
    NSMutableDictionary *_allVideos;
    YKUDVideoManager *_videoManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) YKUDVideoManager *videoManager; // @synthesize videoManager=_videoManager;
@property(retain, nonatomic) NSMutableDictionary *allVideos; // @synthesize allVideos=_allVideos;
@property(retain, nonatomic) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) YKUDDownloadScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (void)clearResumingFileForVideos:(id)arg1;
- (void)setBackgroundCompletionHandler:(CDUnknownBlockType)arg1 andIdentifier:(id)arg2;
- (void)removeListenr:(id)arg1;
- (void)addListener:(id)arg1;
- (void)resetNetworkConfig;
- (void)enterForegroud;
- (void)enterBackgroud;
@property long long speedUpDownloadingCount;
@property _Bool speedUpModeOn;
@property _Bool allowsCellularDownload;
- (id)getAllUnfinishedVideos;
- (void)doResumeDownloadVideos:(id)arg1;
- (void)doPauseDownloadVideos:(id)arg1;
- (void)doRemoveDownloadVideos:(id)arg1;
- (void)doAddDownloadVideos:(id)arg1;
- (id)filterForNonExistence:(id)arg1;
- (id)filterForExistence:(id)arg1;
- (void)resumeAll;
- (void)resumeVideos:(id)arg1;
- (void)pasusAll;
- (void)pauseVideos:(id)arg1;
- (void)removeVideos:(id)arg1;
- (void)addVideos:(id)arg1;
- (void)loadVideos;
- (id)init;
- (void)checkGlobalDownloadingStatus;
- (void)notifyOnMainThreadWithBlock:(CDUnknownBlockType)arg1;
- (void)notifyDownloadVideosDidBecomeWaiting:(id)arg1;
- (void)notifyDownloadVideosDidRemove:(id)arg1;
- (void)notifyDownloadVideosWillBeRemoved:(id)arg1;
- (void)notifyDownloadVideosStarted:(id)arg1;
- (void)notifyDownloadVideosPaused:(id)arg1;
- (void)notifyDownloadVideosAdded:(id)arg1;
- (void)notifyCompleteOfVideo:(id)arg1;
- (void)notifyCompleteOfSegmentId:(long long)arg1 ofVideo:(id)arg2;
- (void)notifyProgress:(double)arg1 andBaseSpeed:(double)arg2 extraSpeed:(double)arg3 ofVideo:(id)arg4 lastSegmentId:(long long)arg5;
- (void)notifyResolvedSegmentResolved:(id)arg1 ofVideo:(id)arg2;
- (void)notifyError:(id)arg1 ofVideo:(id)arg2;

@end

