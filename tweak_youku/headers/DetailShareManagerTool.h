//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKShareCenterDelegate.h"
#import "YKShareContentReformer.h"

@class DetailCardsController, NSString, PLShareItem, YKJSONClient, YKShareCenter;

@interface DetailShareManagerTool : NSObject <YKShareCenterDelegate, YKShareContentReformer>
{
    _Bool _isPLShare;
    int _sourceId;
    DetailCardsController *_cardsController;
    NSString *_shareUrl;
    NSString *_shareThumbnailUrl;
    NSString *_shareTitle;
    NSString *_shareSubtitles;
    YKShareCenter *_shareManager;
    YKJSONClient *_jsonClient;
    PLShareItem *_plShareItem;
}

@property(nonatomic) int sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) PLShareItem *plShareItem; // @synthesize plShareItem=_plShareItem;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) YKShareCenter *shareManager; // @synthesize shareManager=_shareManager;
@property(nonatomic) _Bool isPLShare; // @synthesize isPLShare=_isPLShare;
@property(copy, nonatomic) NSString *shareSubtitles; // @synthesize shareSubtitles=_shareSubtitles;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *shareThumbnailUrl; // @synthesize shareThumbnailUrl=_shareThumbnailUrl;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) __weak DetailCardsController *cardsController; // @synthesize cardsController=_cardsController;
- (void).cxx_destruct;
- (void)shareReportActionResult:(int)arg1 openPlatFormId:(int)arg2;
- (id)fetchShareUrl;
- (void)fetchShareTextWithOpenPlatformId:(int)arg1;
- (void)fetchShareTextWithPLItem:(id)arg1 withOpenPlatformId:(int)arg2;
- (id)reformedShareInfo:(id)arg1 forOpenPlatform:(int)arg2;
- (void)shareDidSendToOpenPlatform:(int)arg1 result:(int)arg2;
- (id)YKShareItemByPlatformId:(int)arg1;
- (_Bool)shareSendContentByPlatform:(int)arg1 withShareInfoItem:(id)arg2;
- (_Bool)shareSendContentByPlatform:(int)arg1;
- (id)getExtraInfoDict;
- (void)shareShow;
- (void)showShareWithPLItem:(id)arg1;
- (void)showShareContent;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

