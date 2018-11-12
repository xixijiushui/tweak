//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, XAdDownloadManager;

@interface XAdCacheManager : NSObject
{
    _Bool _cacheInProgress;
    _Bool _playerInited;
    _Bool _playerBusy;
    _Bool _predictInProgress;
    _Bool _useCellularNetwork;
    id <XAdCacheManagerDelegate> _cacheDelegate;
    NSString *_splashBasePath;
    NSString *_splashDataPath;
    NSString *_splashNewBase;
    NSString *_splashNewPath;
    NSString *_cacheNewPath;
    NSString *_splashHistoryDataPath;
    XAdDownloadManager *_downloadManager;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSObject<OS_dispatch_semaphore> *_state;
    double _lastFetchTime;
    long long _networkStatus;
    CDUnknownBlockType _networkChangedBlock;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    unsigned long long _cacheCancelState;
    unsigned long long _bgTask;
}

+ (void)updateLastSplashTime;
+ (double)lastSplashTime;
+ (void)cacheSplashDataItems:(id)arg1;
+ (id)cachedSplashDataItems;
+ (id)getAdvItems;
+ (float)getSplashCacheSize;
+ (void)removeSplashCacheResource;
+ (void)removeSplashData;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(nonatomic) unsigned long long cacheCancelState; // @synthesize cacheCancelState=_cacheCancelState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *readWriteQueue; // @synthesize readWriteQueue=_readWriteQueue;
@property(nonatomic) _Bool useCellularNetwork; // @synthesize useCellularNetwork=_useCellularNetwork;
@property(nonatomic) _Bool predictInProgress; // @synthesize predictInProgress=_predictInProgress;
@property(nonatomic) _Bool playerBusy; // @synthesize playerBusy=_playerBusy;
@property(nonatomic) _Bool playerInited; // @synthesize playerInited=_playerInited;
@property(copy, nonatomic) CDUnknownBlockType networkChangedBlock; // @synthesize networkChangedBlock=_networkChangedBlock;
@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(nonatomic) double lastFetchTime; // @synthesize lastFetchTime=_lastFetchTime;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) XAdDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(copy, nonatomic) NSString *splashHistoryDataPath; // @synthesize splashHistoryDataPath=_splashHistoryDataPath;
@property(copy, nonatomic) NSString *cacheNewPath; // @synthesize cacheNewPath=_cacheNewPath;
@property(copy, nonatomic) NSString *splashNewPath; // @synthesize splashNewPath=_splashNewPath;
@property(copy, nonatomic) NSString *splashNewBase; // @synthesize splashNewBase=_splashNewBase;
@property(copy, nonatomic) NSString *splashDataPath; // @synthesize splashDataPath=_splashDataPath;
@property(copy, nonatomic) NSString *splashBasePath; // @synthesize splashBasePath=_splashBasePath;
@property(nonatomic) _Bool cacheInProgress; // @synthesize cacheInProgress=_cacheInProgress;
@property(nonatomic) __weak id <XAdCacheManagerDelegate> cacheDelegate; // @synthesize cacheDelegate=_cacheDelegate;
- (void).cxx_destruct;
- (void)removeCacheWithVid:(id)arg1;
- (void)cacheDownloadVideoDidRemoveNotificationHandler:(id)arg1;
- (void)cacheDownloadVideoDidStartNotificationHandler:(id)arg1;
- (void)resetCacheCancelStateByResume;
- (void)flushFileCachedItems;
- (void)replaceHostAislesForAdCache:(id)arg1;
- (id)readSplashCachedItems;
- (id)readFileCachedItemsWithType:(unsigned long long)arg1;
- (void)writeCacheItemsToFile:(id)arg1;
- (id)getDownloadCacheItemsWithType:(unsigned long long)arg1;
- (void)restoreCacheFolder;
- (_Bool)checkDataIntegrity:(id)arg1 withMd5:(id)arg2;
- (void)saveData:(id)arg1 withFilename:(id)arg2;
- (id)pathWithFilename:(id)arg1 ofFolder:(id)arg2;
- (id)pathWithFilename:(id)arg1;
- (id)newPathWithFilename:(id)arg1;
- (_Bool)isCacheAvailable:(id)arg1;
- (void)removeTempIfExist:(id)arg1;
- (void)handleCacheData:(id)arg1 withRST:(long long)arg2 withExpectedLength:(long long)arg3 withFilename:(id)arg4 withMd5:(id)arg5 withURL:(id)arg6;
- (void)startWithUrl:(id)arg1 withName:(id)arg2 withMd5:(id)arg3 withRST:(long long)arg4 completionHanlder:(CDUnknownBlockType)arg5;
- (void)serialCacheOperations:(id)arg1 cacheType:(unsigned long long)arg2 shouldCacheVideo:(_Bool)arg3 currentRetry:(unsigned long long)arg4;
- (void)startCacheOperations:(id)arg1 cacheType:(unsigned long long)arg2 shouldCacheVideo:(_Bool)arg3;
- (void)idle;
- (void)busy;
- (void)wait;
- (void)signal;
- (_Bool)suspendCacheOperations:(_Bool)arg1;
- (void)suspendBySystem;
- (void)suspendByPlayer;
- (void)suspendByNetwork;
- (void)resumeCacheOperations:(_Bool)arg1 withType:(unsigned long long)arg2;
- (void)fetchCacheCallbackWithType:(unsigned long long)arg1;
- (void)predictJob;
- (void)resumeFetchAndCacheOperations;
- (void)resumeDownloadCacheWithType:(unsigned long long)arg1;
- (void)resumeByNetwork;
- (void)startNetworkMonitor;
- (void)resume;
- (void)updateLastFetchTime;
- (void)clearCacheIfNeed;
- (void)updateFileTime:(id)arg1;
- (id)filePathForAd:(id)arg1;
- (id)cachedAdNamesWithOption:(_Bool)arg1;
- (void)saveSplashItems:(id)arg1;
- (void)saveItems:(id)arg1;
- (id)cachedSplashItems;
- (void)handlePlayerStartPreAd;
- (void)handlePlayerIdle;
- (void)handlePlayerBusy;
- (void)handleAutoPlayScheduleMessage;
- (void)fetchAdWithCacheOperations:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 withFailureBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)addObservers;
- (id)init;

@end
