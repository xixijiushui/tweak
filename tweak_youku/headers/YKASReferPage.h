//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKASReferPage : NSObject
{
}

+ (void)YKASReferPageWithPageName:(id)arg1 pageCoding:(id)arg2 modelName:(id)arg3 modelCoding:(id)arg4 refercode:(id)arg5;
+ (void)YKASReferPageWithPageName:(id)arg1 pageCoding:(id)arg2 modelName:(id)arg3 modelCoding:(id)arg4 index:(int)arg5 vid:(id)arg6 category:(id)arg7;
+ (void)YKASReferPageWithPageName:(id)arg1 pageCoding:(id)arg2 modelName:(id)arg3 modelCoding:(id)arg4 index:(int)arg5 vid:(id)arg6;
+ (void)YKASReferPageWithPageName:(id)arg1 pageCoding:(id)arg2 modelName:(id)arg3 modelCoding:(id)arg4 category:(id)arg5;
+ (void)YKASReferPageWithPageName:(id)arg1 pageCoding:(id)arg2 modelName:(id)arg3 modelCoding:(id)arg4;
+ (void)YKAReferPageTNavigateWithEventName:(id)arg1 withTarget:(id)arg2 InPage:(id)arg3 actionType:(id)arg4 pageType:(int)arg5 modulesType:(int)arg6 params:(id)arg7;
+ (void)YKAReferPageTNavigateWithEventName:(id)arg1 withTarget:(id)arg2 InPage:(id)arg3 actionType:(id)arg4 pageType:(int)arg5 modulesType:(int)arg6;
+ (void)YKAReferPageClickUploadWithEventName:(id)arg1 withTarget:(id)arg2 InPage:(id)arg3 searchBarOpened:(_Bool)arg4;
+ (void)YKAReferPageTouchMoreWithEventName:(id)arg1 withTarget:(id)arg2 InPage:(id)arg3 searchBarOpened:(_Bool)arg4;
+ (void)YKAReferPagePushWithEventName:(id)arg1 withTarget:(id)arg2 InPage:(id)arg3 actionType:(id)arg4 modulesType:(int)arg5 vid:(id)arg6 pushid:(id)arg7;
+ (void)YKAReferPageDetailPlayerlWithEventName:(id)arg1 withTarget:(id)arg2 modulesType:(int)arg3 vid:(id)arg4 sid:(id)arg5 plid:(id)arg6 currentVid:(id)arg7 index:(int)arg8;
+ (void)YKAReferPageSettingWithFingerPrintOn:(_Bool)arg1;
+ (void)YKAReferPagePchannelWithEventName:(id)arg1 withTarget:(id)arg2 actionType:(id)arg3 modulesType:(int)arg4 vid:(id)arg5 sid:(id)arg6 plid:(id)arg7 uid:(id)arg8 userid:(id)arg9 index:(int)arg10;
+ (void)YKAReferPageFunChannelWithEventName:(id)arg1 InPage:(id)arg2 withTarget:(id)arg3 pageType:(int)arg4 modulesType:(int)arg5 modulesID:(id)arg6 url:(id)arg7 vid:(id)arg8 sid:(id)arg9 plid:(id)arg10 uid:(id)arg11 contentid:(id)arg12 cn:(id)arg13 cs:(id)arg14 caty:(id)arg15 index:(long long)arg16;
+ (id)pageCodeWithPageType:(int)arg1;
+ (id)modulesCodeWithModuleType:(int)arg1;
+ (void)YKAReferPageSpaceWithEventName:(id)arg1 InPage:(id)arg2 withTarget:(id)arg3 actionType:(id)arg4 pageType:(int)arg5 modulesType:(int)arg6 vid:(id)arg7 sid:(id)arg8 plid:(id)arg9 pname:(id)arg10 uid:(id)arg11 index:(long long)arg12;
+ (void)YKAReferPageWithEventName:(id)arg1 InPage:(id)arg2 withTarget:(id)arg3 modulesType:(long long)arg4 modulesID:(id)arg5 cType:(id)arg6 tid:(id)arg7 url:(id)arg8 ct:(id)arg9 sct:(id)arg10 index:(long long)arg11 modulesIndex:(long long)arg12;

@end

