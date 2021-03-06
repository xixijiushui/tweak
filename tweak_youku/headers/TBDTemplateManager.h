//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface TBDTemplateManager : NSObject
{
    _Bool _isDebugging;
    NSMutableDictionary *_templateCachedVersionMapDict;
    NSString *_templateVersionInfoFilePath;
    NSMutableDictionary *_downloadingTemplateDict;
    NSMutableArray *_batchDownloadedTemplateItems;
    NSTimer *_batchDownloadCallbackTimer;
}

+ (id)templateDownloadQueue;
+ (id)sharedTemplateManager;
@property(nonatomic) _Bool isDebugging; // @synthesize isDebugging=_isDebugging;
@property(retain, nonatomic) NSTimer *batchDownloadCallbackTimer; // @synthesize batchDownloadCallbackTimer=_batchDownloadCallbackTimer;
@property(retain, nonatomic) NSMutableArray *batchDownloadedTemplateItems; // @synthesize batchDownloadedTemplateItems=_batchDownloadedTemplateItems;
@property(retain, nonatomic) NSMutableDictionary *downloadingTemplateDict; // @synthesize downloadingTemplateDict=_downloadingTemplateDict;
@property(retain, nonatomic) NSString *templateVersionInfoFilePath; // @synthesize templateVersionInfoFilePath=_templateVersionInfoFilePath;
@property(retain, nonatomic) NSMutableDictionary *templateCachedVersionMapDict; // @synthesize templateCachedVersionMapDict=_templateCachedVersionMapDict;
- (void).cxx_destruct;
- (id)fixedDinamicTemplatePath;
- (id)templateFilePathWithTemplateName:(id)arg1;
- (void)batchDownloadCompleteTrigger;
- (void)batchDownloadCompleteWithTemplateItem:(id)arg1 data:(id)arg2;
- (id)buildinTemplateWithName:(id)arg1;
- (_Bool)hasBuildinTemplateWithName:(id)arg1;
- (void)updateCachedVersion:(id)arg1 forTemplate:(id)arg2;
- (id)cachedTemplateDictWithTemplateName:(id)arg1;
- (id)cachedVersionWithTemplateName:(id)arg1;
- (_Bool)hasCachedTemplateWithName:(id)arg1;
- (_Bool)needUpdateDebugTemplate:(id)arg1 templateDict:(id)arg2;
- (_Bool)isTemplateOnDebug:(id)arg1;
- (void)turnOffDebug;
- (void)turnOnDebug;
- (void)singleDownloadTemplateDictWithTemplateItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)batchDownloadTemplateDictWithTemplateItem:(id)arg1;
- (id)localTemplateDictWithTemplateItem:(id)arg1;
- (_Bool)checkNeedUpdateForTemplateDict:(id)arg1 templateItem:(id)arg2;
- (_Bool)checkNeedDownloadForTemplateItem:(id)arg1;
- (_Bool)hasLocalFileForTemplateItem:(id)arg1;
- (id)templateDictWithTemplateItem:(id)arg1 needDownload:(_Bool *)arg2 downloadComplete:(CDUnknownBlockType)arg3;
- (id)init;

@end

