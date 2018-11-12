//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface DYKH5Basic : NSObject
{
    _Bool _initializeFinished;
    _Bool _canUseWKLocalDefault;
    NSDictionary *_h5OrangeConfig;
    NSDictionary *_currOrangeConfig;
    long long _currenSysVer;
    long long _webCoreUse;
    NSArray *_outSideWhiteHostArray;
}

+ (_Bool)supportWKURLProtocol;
+ (id)sharedBasic;
@property(retain, nonatomic) NSArray *outSideWhiteHostArray; // @synthesize outSideWhiteHostArray=_outSideWhiteHostArray;
@property(nonatomic) long long webCoreUse; // @synthesize webCoreUse=_webCoreUse;
@property(nonatomic) _Bool canUseWKLocalDefault; // @synthesize canUseWKLocalDefault=_canUseWKLocalDefault;
@property(nonatomic) long long currenSysVer; // @synthesize currenSysVer=_currenSysVer;
@property(retain, nonatomic) NSDictionary *currOrangeConfig; // @synthesize currOrangeConfig=_currOrangeConfig;
@property(retain, nonatomic) NSDictionary *h5OrangeConfig; // @synthesize h5OrangeConfig=_h5OrangeConfig;
@property(nonatomic) _Bool initializeFinished; // @synthesize initializeFinished=_initializeFinished;
- (void).cxx_destruct;
- (void)registerAppMoniter;
- (void)groupConfig:(id)arg1;
- (void)loadOrangeConfig;
- (void)updateAnalyticArgWithTargetUrl:(id)arg1 extraParams:(id)arg2;
- (void)updateAnalyticArgWithTargetUrl:(id)arg1;
- (id)orangeConfig;
- (_Bool)isRefusedOutSideVisit:(id)arg1;
- (id)parseStringArrayFrom:(id)arg1 by:(id)arg2;
- (void)parseOrangeConfig;
- (_Bool)canUseCookieJSInject:(_Bool)arg1;
- (_Bool)canUseWebKitWithURL:(id)arg1 isPoplayer:(_Bool)arg2;
- (_Bool)canUseWebKitWithURL:(id)arg1;
- (_Bool)canUseWebKitByDefault;
- (void)updateWindVaneConfig;
- (void)initWindVaneWith:(id)arg1 appName:(id)arg2 appVersion:(id)arg3 appUA:(id)arg4 environment:(unsigned long long)arg5 debugMode:(_Bool)arg6;
- (void)setup;
- (id)init;
- (void)loadOrangeDefaultConfig;
- (void)dealloc;

@end

