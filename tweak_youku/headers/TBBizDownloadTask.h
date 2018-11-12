//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString, NSURLRequest, TBDTimer, TBDownloadResult;

@interface TBBizDownloadTask : NSObject <NSCopying>
{
    _Bool _haveStarted;
    NSString *_relativeDestination;
    _Bool _forceDownload;
    _Bool _isBackgroundTask;
    _Bool _needCallBackWhenConditionNotSatisfied;
    _Bool _isRetry;
    _Bool _isContinue;
    int _condition;
    int _state;
    NSString *_bizCode;
    NSString *_destination;
    NSString *_MD5;
    unsigned long long _size;
    unsigned long long _maxRetryTimes;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _progressHandler;
    NSURLRequest *_request;
    double _downloadProgress;
    long long _contentLength;
    unsigned long long _retryTimes;
    double _connectTime;
    double _downloadTime;
    long long _downloadedSize;
    NSDictionary *_customDict;
    NSDate *_startTaskTime;
    double _timestamp;
    NSMutableArray *_duplicateTaskArray;
    NSRecursiveLock *_duplicateTaskLock;
    NSRecursiveLock *_timeLock;
    TBDTimer *_watingTimer;
    TBDownloadResult *_result;
    long long _priority;
}

+ (_Bool)isJsonTaskValid:(id)arg1;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) TBDownloadResult *result; // @synthesize result=_result;
@property(retain, nonatomic) TBDTimer *watingTimer; // @synthesize watingTimer=_watingTimer;
@property(retain, nonatomic) NSRecursiveLock *timeLock; // @synthesize timeLock=_timeLock;
@property(retain, nonatomic) NSRecursiveLock *duplicateTaskLock; // @synthesize duplicateTaskLock=_duplicateTaskLock;
@property(retain, nonatomic) NSMutableArray *duplicateTaskArray; // @synthesize duplicateTaskArray=_duplicateTaskArray;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSDate *startTaskTime; // @synthesize startTaskTime=_startTaskTime;
@property(retain, nonatomic) NSDictionary *customDict; // @synthesize customDict=_customDict;
@property(nonatomic) long long downloadedSize; // @synthesize downloadedSize=_downloadedSize;
@property(readonly, nonatomic) double downloadTime; // @synthesize downloadTime=_downloadTime;
@property(readonly, nonatomic) double connectTime; // @synthesize connectTime=_connectTime;
@property(readonly, nonatomic) _Bool isContinue; // @synthesize isContinue=_isContinue;
@property(readonly, nonatomic) unsigned long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(readonly, nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(nonatomic) long long contentLength; // @synthesize contentLength=_contentLength;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool needCallBackWhenConditionNotSatisfied; // @synthesize needCallBackWhenConditionNotSatisfied=_needCallBackWhenConditionNotSatisfied;
@property(nonatomic) _Bool isBackgroundTask; // @synthesize isBackgroundTask=_isBackgroundTask;
@property(nonatomic) _Bool forceDownload; // @synthesize forceDownload=_forceDownload;
@property(nonatomic) unsigned long long maxRetryTimes; // @synthesize maxRetryTimes=_maxRetryTimes;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *MD5; // @synthesize MD5=_MD5;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(nonatomic) int condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
- (void).cxx_destruct;
- (id)toJSONString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setRetryTimes:(unsigned long long)arg1;
- (long long)compareWith:(id)arg1;
- (void)completeWithResponse:(id)arg1 error:(id)arg2;
- (id)copyFile:(id)arg1 toTaskPath:(id)arg2;
- (void)finishLoadingToURL:(id)arg1;
- (void)totalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)conditionNotSatisfied;
- (void)watingTimeOut;
- (void)stopWatingTimer;
- (void)startWatingTimer;
- (id)conditionNotSatisfiedError;
- (id)duplicateTasks;
- (void)addDuplicateTask:(id)arg1;
- (_Bool)duplicateWithTask:(id)arg1;
- (void)setIsContinue:(_Bool)arg1;
- (void)setIsRetry:(_Bool)arg1;
- (void)updateDownloadTime;
- (void)updateStartTime;
@property(readonly, nonatomic) NSString *relativeDestination;
- (void)setState:(int)arg1;
- (void)resume;
- (void)cancel;
- (_Bool)isTaskValid;
- (void)start;
- (_Bool)haveValidFile;
- (void)suspend;
- (void)dealloc;
- (id)initWithURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRequest:(id)arg1 destination:(id)arg2 bizCode:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithJSON:(id)arg1;
- (id)initWithRequest:(id)arg1 destination:(id)arg2 bizCode:(id)arg3 condition:(int)arg4 MD5:(id)arg5 size:(unsigned long long)arg6 needCallBackWhenConditionNotSatisfied:(_Bool)arg7 forceDownload:(_Bool)arg8 isBackgroundTask:(_Bool)arg9 progressHandler:(CDUnknownBlockType)arg10 completionHandler:(CDUnknownBlockType)arg11;

@end

