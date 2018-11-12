//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AABEngine, PageManagerForABTest;

@interface AABManager : NSObject
{
    AABEngine *_abEngine;
    PageManagerForABTest *_pageInfoCache;
}

+ (void)trackEventWithPage:(id)arg1 pageName:(id)arg2 eventId:(int)arg3 arg1:(id)arg4 args:(id)arg5 abtestInfo:(id)arg6;
+ (void)trackEventWithPage:(id)arg1 pageName:(id)arg2 eventId:(int)arg3 arg1:(id)arg4 args:(id)arg5 component:(id)arg6 module:(id)arg7;
+ (void)validateServerABTestWithComponent:(id)arg1 module:(id)arg2;
+ (void)registerServerABTestInfo:(id)arg1 forRequestId:(id)arg2;
+ (void)registerAndValidateServerABTestInfo:(id)arg1 forRequestId:(id)arg2;
+ (void)setABConditionProtocol:(id)arg1;
+ (void)turnOnUTPluginMode;
+ (void)registerCustomABABTestInfo:(id)arg1 OnH5PageWithDict:(id)arg2;
+ (void)registerCustomABABTestInfo:(id)arg1 OnPage:(id)arg2;
+ (void)registerABTestInfoOnPage:(id)arg1 withPageName:(id)arg2;
+ (void)updateABTestInfoOnH5Page;
+ (void)updateABTestInfoOnPage:(id)arg1;
+ (id)trackingStringForModule:(id)arg1 onComponent:(id)arg2;
+ (id)trackingStringOnPage:(id)arg1;
+ (id)bucketModelDictForComponent:(id)arg1;
+ (id)bucketForComponent:(id)arg1;
+ (_Bool)isSwitchOnForModule:(id)arg1 onComponent:(id)arg2;
+ (id)bucketForModule:(id)arg1 onComponent:(id)arg2;
+ (id)intercepterUrlStringByRewriteFromURL:(id)arg1;
+ (void)removeRegisterListenerOnModule:(id)arg1 onComponent:(id)arg2;
+ (void)registerListenerOnModule:(id)arg1 onComponent:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (void)appWillEnterForeground;
+ (void)appDidStartup;
+ (void)setDebugMode:(_Bool)arg1;
+ (id)sharedInstanceWithBuilder:(id)arg1 andFetchMode:(int)arg2;
+ (id)sharedInstanceWithOrangeKey:(id)arg1;
+ (id)sharedInstance;
+ (id)fetchABConfigFromHybrid;
+ (id)allExpString;
+ (void)registJSBridgeHandlers;
+ (id)trackStringForWeb:(id)arg1;
+ (id)allAbtestStringOnPage:(id)arg1;
+ (_Bool)accsDowngrade;
+ (int)fetchModelForEngine;
@property(retain, nonatomic) PageManagerForABTest *pageInfoCache; // @synthesize pageInfoCache=_pageInfoCache;
@property(retain, nonatomic) AABEngine *abEngine; // @synthesize abEngine=_abEngine;
- (void).cxx_destruct;
- (void)setAbtestDowngrade:(_Bool)arg1;
- (void)setMtopUtdid:(id)arg1;
- (void)setABWhiteListOrangeKey:(id)arg1;
- (void)setABSdkConfigOrangeKey:(id)arg1;
- (void)setOrangeKey:(id)arg1;
- (void)setFetchConfigMode:(int)arg1;
- (void)setBuilder:(id)arg1;
- (id)init;

@end

