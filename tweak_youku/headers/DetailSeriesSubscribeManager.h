//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CardList, DYCollectionManager, DYPursueTeleplayManager, DetailCardsController, DetailSubscribeManager, NSMutableArray, NSString, YKJSONClient;

@interface DetailSeriesSubscribeManager : NSObject
{
    _Bool _allowPreCache;
    _Bool _allowPreCacheByMemberDownload;
    _Bool _allowHomeToastShow;
    DetailCardsController *_cardsController;
    DetailSubscribeManager *_subScribeManager;
    long long _seriesSubscribeType;
    DYCollectionManager *_seriesSubscribeManager;
    NSMutableArray *_refreshedCardArray;
    NSMutableArray *_cardListArray;
    NSString *_sid;
    CardList *_cardList;
    DYPursueTeleplayManager *_seriesSubscribeManagerAdv;
    YKJSONClient *_jsonClient;
}

@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) DYPursueTeleplayManager *seriesSubscribeManagerAdv; // @synthesize seriesSubscribeManagerAdv=_seriesSubscribeManagerAdv;
@property(retain, nonatomic) CardList *cardList; // @synthesize cardList=_cardList;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) NSMutableArray *cardListArray; // @synthesize cardListArray=_cardListArray;
@property(retain, nonatomic) NSMutableArray *refreshedCardArray; // @synthesize refreshedCardArray=_refreshedCardArray;
@property(retain, nonatomic) DYCollectionManager *seriesSubscribeManager; // @synthesize seriesSubscribeManager=_seriesSubscribeManager;
@property(nonatomic) _Bool allowHomeToastShow; // @synthesize allowHomeToastShow=_allowHomeToastShow;
@property(nonatomic) _Bool allowPreCacheByMemberDownload; // @synthesize allowPreCacheByMemberDownload=_allowPreCacheByMemberDownload;
@property(nonatomic) _Bool allowPreCache; // @synthesize allowPreCache=_allowPreCache;
@property(nonatomic) long long seriesSubscribeType; // @synthesize seriesSubscribeType=_seriesSubscribeType;
@property(nonatomic) __weak DetailSubscribeManager *subScribeManager; // @synthesize subScribeManager=_subScribeManager;
@property(nonatomic) __weak DetailCardsController *cardsController; // @synthesize cardsController=_cardsController;
- (void).cxx_destruct;
- (void)seriesStatiscBySwitch:(_Bool)arg1 ctrlName:(id)arg2 spmCD:(id)arg3;
- (_Bool)isAuthorizedWithcopyright:(id)arg1 andCopyrightStatusTudou:(id)arg2 andCopyrightStatusTmall:(id)arg3;
- (_Bool)isPgcFilmWithShowkind:(id)arg1;
- (_Bool)isFilmCompletedWithDetail:(id)arg1;
- (_Bool)seriesSubscribeShow:(id)arg1;
- (id)fetchSeriesSubscribeParams;
- (void)removeSeriesSubscribeWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addSeriesSubscribeWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addSeriesSubscribeWithShowid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)removeSeriesSubscribeWithsuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)addSeriesSubscribeWithsuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)fetchAllowHomeToastShow;
- (void)dealloc;
- (id)init;

@end

