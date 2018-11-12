//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYKUploadQueueDelegate.h"

@class DYKUploadQueue, NSDate, NSMutableArray, NSMutableSet, NSString, UIAlertController, UIAlertView;

@interface DYKUploadManager : NSObject <DYKUploadQueueDelegate>
{
    _Bool _needTip;
    _Bool _isCreateState;
    _Bool _continueUnderWWAN;
    id <DYKUploadManagerDelegate> _delegate;
    NSMutableArray *_list;
    NSDate *_lastAlertDate;
    NSString *_tags;
    NSString *_sliceLength;
    DYKUploadQueue *_uploadQueue;
    NSMutableSet *_observers;
    UIAlertView *_uploadAlertView;
    UIAlertController *_uploadAlertVC;
}

+ (id)sharedInstance;
+ (_Bool)isLoaded;
@property(retain, nonatomic) UIAlertController *uploadAlertVC; // @synthesize uploadAlertVC=_uploadAlertVC;
@property(retain, nonatomic) UIAlertView *uploadAlertView; // @synthesize uploadAlertView=_uploadAlertView;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) DYKUploadQueue *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(nonatomic) _Bool continueUnderWWAN; // @synthesize continueUnderWWAN=_continueUnderWWAN;
@property(nonatomic) _Bool isCreateState; // @synthesize isCreateState=_isCreateState;
@property(copy, nonatomic) NSString *sliceLength; // @synthesize sliceLength=_sliceLength;
@property(nonatomic) _Bool needTip; // @synthesize needTip=_needTip;
@property(copy, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSDate *lastAlertDate; // @synthesize lastAlertDate=_lastAlertDate;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(nonatomic) __weak id <DYKUploadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)uploadQueue:(id)arg1 uploadOperationExitCreate:(id)arg2;
- (void)uploadQueue:(id)arg1 uploadOperationEnterCreate:(id)arg2;
- (void)uploadQueue:(id)arg1 uploadDidChange:(id)arg2;
- (void)uploadQueue:(id)arg1 uploadProgress:(id)arg2;
- (void)uploadQueue:(id)arg1 uploadFinish:(id)arg2;
- (void)uploadQueue:(id)arg1 uploadFail:(id)arg2;
- (void)uploadQueue:(id)arg1 uploadCancel:(id)arg2;
- (void)uploadQueue:(id)arg1 uploadPause:(id)arg2;
- (void)uploadQueue:(id)arg1 uploadStarted:(id)arg2;
- (void)taskUploadProgress:(id)arg1;
- (void)taskDidChanged:(id)arg1;
- (void)taskNotMatch:(id)arg1;
- (void)taskDidCancel:(id)arg1;
- (void)taskDidFail:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (void)taskDidSendData:(id)arg1;
- (void)taskDidContinue:(id)arg1;
- (void)taskDidPause:(id)arg1;
- (void)taskDidStart:(id)arg1;
- (void)taskDidAdd:(id)arg1;
- (void)setTipSwitch:(_Bool)arg1;
- (void)saveAlertTime;
- (_Bool)isOverAlertInterval;
- (void)showAlertOnVC:(id)arg1;
- (void)showAlertView;
- (void)showAlert;
- (void)networkChanged:(id)arg1;
- (_Bool)isViaWWAN;
- (void)removeAllObserver;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)save;
- (void)deleteAllTask;
- (void)cancelCurrentTask;
- (void)deleteTask:(id)arg1;
- (void)continueUserOutLoginTask;
- (void)continueTask:(id)arg1;
- (void)pauseAllTask;
- (_Bool)pauseTask:(id)arg1;
- (void)addTask:(id)arg1;
- (void)checkCurrentNetworkWithNeeedTip:(_Bool)arg1;
- (_Bool)isUploading;
- (void)clearUploadListBeforeSwitchAccount;
- (void)suspendUploadQueue:(_Bool)arg1;
- (void)initUploadTask;
- (void)dealloc;
- (void)initializeWithUid:(id)arg1 stoken:(id)arg2 ikukey:(id)arg3 ikuscrect:(id)arg4;
- (void)uploadSlicelengthGroupConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

