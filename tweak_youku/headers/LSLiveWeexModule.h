//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface LSLiveWeexModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_1062;
+ (id)wx_export_method_1030;
+ (id)wx_export_method_1018;
+ (id)wx_export_method_999;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)jumpTo:(long long)arg1 url:(id)arg2 cb:(CDUnknownBlockType)arg3;
- (void)initBaichuanWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)doLogin:(CDUnknownBlockType)arg1;
- (void)goBack:(id)arg1;
- (void)doShare:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

