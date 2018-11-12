//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKBabyInfo, YKJSONClient;

@interface YKBabyInfoManager : NSObject
{
    YKBabyInfo *_babyInfo;
    _Bool _infoStatus;
    _Bool _needShowSyncMsg;
    YKJSONClient *_jsonClient;
}

+ (id)shareInstance;
@property(nonatomic) _Bool needShowSyncMsg; // @synthesize needShowSyncMsg=_needShowSyncMsg;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(readonly, nonatomic) _Bool infoStatus; // @synthesize infoStatus=_infoStatus;
- (void).cxx_destruct;
- (void)showSyncMsg;
- (void)syncYKConfiguration;
- (id)getBabyInfoFromCache;
- (void)storeToCache;
@property(retain, nonatomic) YKBabyInfo *babyInfo;
- (void)updateBabyInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)getBabyInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)receiveUserLoginStateChangedNotification:(id)arg1;
- (id)init;

@end

