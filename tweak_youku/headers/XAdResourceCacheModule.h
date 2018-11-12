//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString, XAdDownloadManager;

@interface XAdResourceCacheModule : NSObject
{
    _Bool _hasCheckOverOnlineRes;
    NSString *_floatBasePath;
    NSMutableDictionary *_archiveOnlineDataKeyDictionary;
    NSMutableArray *_archiveOfflineDataKeyArray;
    NSMutableDictionary *_floatDownloadResourceDictionary;
    NSMutableArray *_floatDownloadResourceKeys;
    NSMutableDictionary *_floatfinishBlockDictionary;
    NSMutableDictionary *_floatResourceDictionary;
    NSMutableDictionary *_floatResourceGroupDictionary;
    XAdDownloadManager *_adFloatDownloadManager;
    NSObject<OS_dispatch_semaphore> *_adFloatRequestSemaphore;
    NSMutableDictionary *_requestFailedCountDict;
    NSObject *_lockObject;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasCheckOverOnlineRes; // @synthesize hasCheckOverOnlineRes=_hasCheckOverOnlineRes;
@property(retain, nonatomic) NSObject *lockObject; // @synthesize lockObject=_lockObject;
@property(retain, nonatomic) NSMutableDictionary *requestFailedCountDict; // @synthesize requestFailedCountDict=_requestFailedCountDict;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *adFloatRequestSemaphore; // @synthesize adFloatRequestSemaphore=_adFloatRequestSemaphore;
@property(retain, nonatomic) XAdDownloadManager *adFloatDownloadManager; // @synthesize adFloatDownloadManager=_adFloatDownloadManager;
@property(retain, nonatomic) NSMutableDictionary *floatResourceGroupDictionary; // @synthesize floatResourceGroupDictionary=_floatResourceGroupDictionary;
@property(retain, nonatomic) NSMutableDictionary *floatResourceDictionary; // @synthesize floatResourceDictionary=_floatResourceDictionary;
@property(retain, nonatomic) NSMutableDictionary *floatfinishBlockDictionary; // @synthesize floatfinishBlockDictionary=_floatfinishBlockDictionary;
@property(retain, nonatomic) NSMutableArray *floatDownloadResourceKeys; // @synthesize floatDownloadResourceKeys=_floatDownloadResourceKeys;
@property(retain, nonatomic) NSMutableDictionary *floatDownloadResourceDictionary; // @synthesize floatDownloadResourceDictionary=_floatDownloadResourceDictionary;
@property(retain, nonatomic) NSMutableArray *archiveOfflineDataKeyArray; // @synthesize archiveOfflineDataKeyArray=_archiveOfflineDataKeyArray;
@property(retain, nonatomic) NSMutableDictionary *archiveOnlineDataKeyDictionary; // @synthesize archiveOnlineDataKeyDictionary=_archiveOnlineDataKeyDictionary;
@property(copy, nonatomic) NSString *floatBasePath; // @synthesize floatBasePath=_floatBasePath;
- (void).cxx_destruct;
- (void)removeAllAdFloatResources;
- (void)removeOnlineResourcceTimeoutData;
- (void)removeAdFloatResourcesWithVid:(id)arg1;
- (void)downloadFloatResource:(id)arg1 FinishBlock:(CDUnknownBlockType)arg2;
- (void)saveAdFloatArchiverData:(long long)arg1 Key:(id)arg2 Object:(id)arg3 OfflineData:(_Bool)arg4;
- (id)getAdFloatResourceLocalPath:(id)arg1;
- (_Bool)removeAdFloatArchiveData:(long long)arg1 Key:(id)arg2;
- (id)getAdFloatArchiverData:(long long)arg1 Key:(id)arg2;
- (void)startDownloadAdFloatResource;
- (void)delayResartCheckDownloadAdFloatResource;
- (void)restartCheckDownloadAdFloatResource;
- (void)floatResourceDownloadFailureWithKey:(id)arg1 Url:(id)arg2 Error:(id)arg3;
- (void)saveRefreshAdFloatResourceWithKey:(id)arg1 Url:(id)arg2 Path:(id)arg3 RootPath:(id)arg4;
- (_Bool)checkResourceHasAlreadyExists:(id)arg1 urlKey:(id)arg2;
- (id)getFilePathWithFileName:(id)arg1 RootFloder:(id)arg2;
- (void)floatResourceDownloadFinishWithKey:(id)arg1 Url:(id)arg2 Data:(id)arg3;
- (id)floatResourceFileName:(id)arg1 Url:(id)arg2 Object:(id)arg3;
- (id)floatArchiveFileName:(id)arg1 Type:(long long)arg2;
- (void)saveAdFloatResourcesInfo;
- (id)dictionaryWithDeepcopySourceDictionary:(id)arg1;
- (void)setupAdFloatResource;
- (id)floatTypeContent:(long long)arg1;
- (id)floatPathWithType:(long long)arg1;
- (id)init;

@end

