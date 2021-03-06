//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DownloadModelSequence, DownloadTaskModel, NSArray, YKUDConfigModel;

@protocol DownloadManageDelegate <NSObject>

@optional
- (void)downloadmanagerDidBecomeWaiting:(NSArray *)arg1;
- (void)downloadmanagerDidBecomeEmpty;
- (YKUDConfigModel *)downloadManagerGetConfigWithModel:(DownloadTaskModel *)arg1;
- (void)downloadManagerDidStartForAnalytics:(DownloadTaskModel *)arg1;
- (void)downloadmanagerDidDecodeFinish:(id)arg1;
- (void)downloadManagerDidUpldateTSArray:(DownloadTaskModel *)arg1 TSArray:(NSArray *)arg2;
- (void)downloadManagerDidError:(DownloadTaskModel *)arg1 Error:(long long)arg2;
- (void)downloadmanagerDidReceiveBytes:(DownloadTaskModel *)arg1 PartSequence:(DownloadModelSequence *)arg2;
- (void)downloadManagerDownLoadingWithModel:(DownloadTaskModel *)arg1 finishedSequence:(DownloadModelSequence *)arg2;
- (void)downloadmanagerDidFinish:(DownloadTaskModel *)arg1;
- (void)downloadManagerDidRemoveArray:(NSArray *)arg1;
- (void)downloadManagerWillRemoveArray:(NSArray *)arg1;
- (void)downloadManagerDidStart:(DownloadTaskModel *)arg1;
- (void)downloadManagerDidPauseAll:(NSArray *)arg1;
- (void)downloadManagerDidPause:(DownloadTaskModel *)arg1;
- (void)downloadManagerDidAddTasks:(NSArray *)arg1;
- (void)downloadManagerDidAddTask:(DownloadTaskModel *)arg1;
@end

