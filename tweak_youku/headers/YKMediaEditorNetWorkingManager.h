//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFAppjietuJietuServiceGetStickerAPI, YKFAppjietuJietuServiceGetStickerCategoryAPI, YKFAppjietuJietuServiceGetStickerTextsAPI;

@interface YKMediaEditorNetWorkingManager : NSObject
{
    YKFAppjietuJietuServiceGetStickerCategoryAPI *_stickerCategoryAPI;
    YKFAppjietuJietuServiceGetStickerAPI *_stickerAPI;
    YKFAppjietuJietuServiceGetStickerTextsAPI *_stickerTextsAPI;
}

+ (id)shareInstance;
@property(retain, nonatomic) YKFAppjietuJietuServiceGetStickerTextsAPI *stickerTextsAPI; // @synthesize stickerTextsAPI=_stickerTextsAPI;
@property(retain, nonatomic) YKFAppjietuJietuServiceGetStickerAPI *stickerAPI; // @synthesize stickerAPI=_stickerAPI;
@property(retain, nonatomic) YKFAppjietuJietuServiceGetStickerCategoryAPI *stickerCategoryAPI; // @synthesize stickerCategoryAPI=_stickerCategoryAPI;
- (void).cxx_destruct;
- (void)getStickerTexts:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getStickerWithShowId:(id)arg1 vid:(id)arg2 categoryId:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getStickerCategoryWithShowId:(id)arg1 vid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end
