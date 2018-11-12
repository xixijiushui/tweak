//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYKUploadManagerDelegate.h"

@class DYKASecondUploadTask, DYKUploadManager, HYUser, NSNumber, NSString, YKSPHudView;

@interface YKSPUploadManager : NSObject <DYKUploadManagerDelegate>
{
    unsigned char _isUploading;
    DYKUploadManager *_uploadManager;
    id <DYKUploadManagerDelegate> _delegate;
    long long _topicId;
    NSString *_projectId;
    long long _materialId;
    NSNumber *_progress;
    NSNumber *_iswhite;
    NSNumber *_islocal;
    NSString *_videoPath;
    NSString *_coverPath;
    NSString *_framePath;
    HYUser *_user;
    DYKASecondUploadTask *_uploadTask;
    YKSPHudView *_hudView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) YKSPHudView *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) DYKASecondUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(retain, nonatomic) HYUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *framePath; // @synthesize framePath=_framePath;
@property(copy, nonatomic) NSString *coverPath; // @synthesize coverPath=_coverPath;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSNumber *islocal; // @synthesize islocal=_islocal;
@property(retain, nonatomic) NSNumber *iswhite; // @synthesize iswhite=_iswhite;
@property(nonatomic) unsigned char isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) NSNumber *progress; // @synthesize progress=_progress;
@property(nonatomic) long long materialId; // @synthesize materialId=_materialId;
@property(retain, nonatomic) NSString *projectId; // @synthesize projectId=_projectId;
@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(nonatomic) __weak id <DYKUploadManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) DYKUploadManager *uploadManager; // @synthesize uploadManager=_uploadManager;
- (void).cxx_destruct;
- (void)analyticsPublish:(id)arg1;
- (void)networkChanged:(id)arg1;
- (_Bool)isViaWWAN;
- (void)taskDidStart:(id)arg1;
- (void)taskUploadProgress:(id)arg1;
- (void)taskDidPause:(id)arg1;
- (void)taskDidFailed:(id)arg1;
- (void)taskDidSuccess:(id)arg1;
- (void)retry;
- (void)startUploadWithVideoPath:(id)arg1 coverPath:(id)arg2 videoFirstFramePath:(id)arg3 videoMilliseconds:(long long)arg4 desc:(id)arg5 width:(unsigned long long)arg6 height:(unsigned long long)arg7;
- (id)init;
- (void)initializeConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
