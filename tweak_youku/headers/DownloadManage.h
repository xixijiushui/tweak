//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKUDDownloadManagerListener.h"

@class NSMutableArray, NSMutableDictionary, NSString, YKUDDownloadManager, YKUDDownloadScheduler;

@interface DownloadManage : NSObject <YKUDDownloadManagerListener>
{
    _Bool _isOpenBackgroundModel;
    _Bool _enableAutoStartDownlaod;
    _Bool _needPauseAllCallback;
    id <DownloadManageDelegate> _delegate;
    NSMutableArray *_listeners;
    YKUDDownloadManager *_downloadManager;
    NSMutableDictionary *_videoMapping;
    NSMutableDictionary *_taskModelMapping;
    YKUDDownloadScheduler *_scheduler;
}

+ (id)downloadManagerGetConfig;
+ (_Bool)isHaveEnoughSpace:(id)arg1;
+ (_Bool)hasEnoughSpaceWithFolder:(id)arg1;
+ (_Bool)hasEnoughSpaceWithFiles:(id)arg1;
+ (id)shareInstance;
@property _Bool needPauseAllCallback; // @synthesize needPauseAllCallback=_needPauseAllCallback;
@property(retain, nonatomic) YKUDDownloadScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) NSMutableDictionary *taskModelMapping; // @synthesize taskModelMapping=_taskModelMapping;
@property(retain, nonatomic) NSMutableDictionary *videoMapping; // @synthesize videoMapping=_videoMapping;
@property(retain, nonatomic) YKUDDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property(nonatomic) _Bool enableAutoStartDownlaod; // @synthesize enableAutoStartDownlaod=_enableAutoStartDownlaod;
@property(nonatomic) _Bool isOpenBackgroundModel; // @synthesize isOpenBackgroundModel=_isOpenBackgroundModel;
@property(nonatomic) __weak id <DownloadManageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloadManager:(id)arg1 didBecomeWaitingOfVideos:(id)arg2;
- (void)downloadManager:(id)arg1 didRemoveOfVideos:(id)arg2;
- (void)downloadManager:(id)arg1 willBeRemovedOfVideos:(id)arg2;
- (void)downloadManager:(id)arg1 didStartOfVideos:(id)arg2;
- (void)downloadManager:(id)arg1 didPauseOfVideos:(id)arg2;
- (void)downloadManager:(id)arg1 didAddOfVideos:(id)arg2;
- (void)downloadManager:(id)arg1 didFailWithError:(id)arg2 forVideo:(id)arg3;
- (void)downloadManager:(id)arg1 progressUpdate:(double)arg2 forVideo:(id)arg3 withBaseSpeed:(double)arg4 andExtraSpeed:(double)arg5 lastSegmentId:(long long)arg6;
- (void)downloadManager:(id)arg1 didFinishDownloadingVideo:(id)arg2;
- (void)downloadManager:(id)arg1 didFinishDownloadingSegmentWithId:(long long)arg2 ofVideo:(id)arg3;
- (void)downloadManager:(id)arg1 didResolvedOfVideo:(id)arg2;
@property(nonatomic) _Bool isStopDownloadWhenGprs;
@property(nonatomic) _Bool speedUpModeOn;
@property(nonatomic) long long speedUpDownloadingCount;
- (void)handleInconsistentState:(id)arg1;
- (void)handleExistVideosWhenAdded:(id)arg1;
- (id)transferTaskModelToVideo:(id)arg1 hasExist:(_Bool *)arg2;
- (long long)needSpacetoDownload;
- (_Bool)haveEnoughSpace;
- (void)setScreenOn:(_Bool)arg1;
- (void)startBetchDownloadTask:(_Bool)arg1;
- (id)getAllNeedDownload;
- (id)findTrueModel:(id)arg1;
- (void)notifyDecodeFinish:(id)arg1 videomodel:(id)arg2;
- (long long)getWaitCount;
- (_Bool)hasDownloadingVideo;
- (_Bool)isExistByRecordId:(id)arg1;
- (id)getShowModelOrWillShowModel;
- (id)getCurrentTaskModel;
- (void)startAllDownload;
- (void)pauseAllDownload;
- (void)stopDownload;
- (void)startDownload;
- (void)removeDownloadTasks:(id)arg1;
- (void)removeDownloadTask:(id)arg1;
- (void)startDownloadTask:(id)arg1;
- (void)pauseDownloadTask:(id)arg1;
- (void)addDownloadTaskWithTasks:(id)arg1;
- (void)addDownloadTaskWithTask:(id)arg1;
- (void)removeAllListeners;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)loadVideos;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

