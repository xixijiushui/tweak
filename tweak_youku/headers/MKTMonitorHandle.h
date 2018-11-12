//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKTGCDTimer, MKTMonitorDBHandle, NSMutableArray<MKTMonitorItem>;

@interface MKTMonitorHandle : NSObject
{
    _Bool _isUploading;
    _Bool _tableCreateSuccess;
    id <MKTMonitorConfig> _monitorConfig;
    NSMutableArray<MKTMonitorItem> *_uploadQueue;
    long long _uploadDurationSeconds;
    MKTGCDTimer *_uploadTimer;
    MKTMonitorDBHandle *_dbHandle;
    long long _emptyQueueTiker;
}

+ (id)monitorQueue;
@property(nonatomic) _Bool tableCreateSuccess; // @synthesize tableCreateSuccess=_tableCreateSuccess;
@property(nonatomic) long long emptyQueueTiker; // @synthesize emptyQueueTiker=_emptyQueueTiker;
@property(retain, nonatomic) MKTMonitorDBHandle *dbHandle; // @synthesize dbHandle=_dbHandle;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) MKTGCDTimer *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
@property(nonatomic) long long uploadDurationSeconds; // @synthesize uploadDurationSeconds=_uploadDurationSeconds;
@property(retain, nonatomic) NSMutableArray<MKTMonitorItem> *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(readonly, nonatomic) id <MKTMonitorConfig> monitorConfig; // @synthesize monitorConfig=_monitorConfig;
- (void).cxx_destruct;
- (long long)getDeviceNumber:(id)arg1 mod:(long long)arg2;
- (_Bool)needMonitor;
- (void)sendToServer:(id)arg1;
- (void)removeItemsFromDb:(id)arg1;
- (void)insertItemsToDb:(id)arg1;
- (id)dequeueWithCount:(long long)arg1;
- (void)enqueue:(id)arg1;
- (void)triggeUpload;
- (void)checkUploadTimer:(long long)arg1;
- (void)fireUpload:(long long)arg1 data:(id)arg2 skipFilter:(_Bool)arg3;
- (void)uploadResult:(id)arg1 itemList:(id)arg2;
- (void)monitor:(long long)arg1 data:(id)arg2;
- (void)uploadOverstockItems;
- (id)initWithConfig:(id)arg1;

@end

