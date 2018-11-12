//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, YKJSONClient;

@interface YKPersonalCenterCardListManager : NSObject
{
    NSArray *_cardList;
    YKJSONClient *_jsonClient;
}

+ (id)sharedInstance;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(copy, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
- (void).cxx_destruct;
- (void)newCMS_loadCacheData;
- (id)newCMS_parseListCardData:(id)arg1 saveJson:(_Bool)arg2;
- (void)newCMS_fetchListCardData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)insertSportMemberCardWithJson:(id)arg1;
- (id)oldCMS_cacheDataModel;
- (id)newCMS_cacheDataModel;
- (id)cacheDataModel;
- (void)loadCacheData;
- (id)parseListCardData:(id)arg1 saveJson:(_Bool)arg2;
- (void)fetchListCardData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end
