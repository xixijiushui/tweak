//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKJSONClient, YKShareInfoItem, YKSharePanelController;

@interface YKShareCenter : NSObject
{
    CDUnknownBlockType _wxShareReportBlock;
    id <YKShareCenterDelegate> _delegate;
    id <YKShareContentReformer> _contentReformer;
    YKSharePanelController *_panelController;
    YKShareInfoItem *_currentShareInfo;
    YKJSONClient *_jsonClient;
    long long _isSupportOrientation;
}

+ (_Bool)handleOpenURL:(id)arg1 application:(id)arg2;
+ (_Bool)checkUrlAndApplication:(id)arg1 application:(id)arg2;
+ (id)defaultCenter;
@property(nonatomic) long long isSupportOrientation; // @synthesize isSupportOrientation=_isSupportOrientation;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) YKShareInfoItem *currentShareInfo; // @synthesize currentShareInfo=_currentShareInfo;
@property(retain, nonatomic) YKSharePanelController *panelController; // @synthesize panelController=_panelController;
@property(nonatomic) __weak id <YKShareContentReformer> contentReformer; // @synthesize contentReformer=_contentReformer;
@property(nonatomic) __weak id <YKShareCenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType wxShareReportBlock; // @synthesize wxShareReportBlock=_wxShareReportBlock;
- (void).cxx_destruct;
- (void)toastForShareSuccessCallBack:(int)arg1 shareInfo:(id)arg2;
- (id)toJsonString:(id)arg1;
- (void)eventReportAnalytics:(int)arg1 eventType:(id)arg2 eventInfo:(id)arg3 shareKey:(id)arg4;
- (id)replaceWithString:(id)arg1 urlString:(id)arg2 sharekey:(id)arg3;
- (id)urlWithMactcString:(id)arg1 urlString:(id)arg2 replaceString:(id)arg3;
- (id)urlStringByPercentageEncodingWithReservedCharacters:(id)arg1;
- (id)urlQueryStringUrl:(id)arg1 WithSortedKeys:(_Bool)arg2;
- (id)urlByAppendingwithURL:(id)arg1 withAddDictionary:(id)arg2 shareKey:(id)arg3 withSortedKeys:(_Bool)arg4;
- (id)appendSharekey:(id)arg1 inUrl:(id)arg2;
- (void)updateSharekeyWithShareInfo:(id)arg1 openplatformId:(int)arg2;
- (void)registerSharekeyWithShareInfo:(id)arg1 OpenPlatformId:(int)arg2 handler:(CDUnknownBlockType)arg3;
- (void)debugToastInfoInvalid;
- (_Bool)internalSendToPlatform:(int)arg1 mOrientation:(unsigned long long)arg2;
- (_Bool)internalShowSharePanelWithPlatformIds:(id)arg1 outputType:(int)arg2;
- (void)dismissSharePanel;
- (_Bool)callThirdPartyAPP:(int)arg1;
- (_Bool)sendContent:(id)arg1 toPlatform:(int)arg2 delegate:(id)arg3;
- (_Bool)showSharePanelWithContent:(id)arg1 openPlatforms:(id)arg2 contentReformer:(id)arg3 delegate:(id)arg4;
- (_Bool)showSharePanelWithContent:(id)arg1 delegate:(id)arg2;
- (id)init;
- (void)dealloc;

@end

