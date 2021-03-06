//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface WXStreamModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)_getStatusText:(long long)arg1;
+ (id)wx_export_method_35;
+ (id)wx_export_method_34;
+ (id)wx_export_method_33;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)sendHttp:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_JSONObjFromData:(id)arg1;
- (id)_stringfromData:(id)arg1 encode:(id)arg2;
- (void)_loadFinishWithResponse:(id)arg1 data:(id)arg2 callbackRsp:(id)arg3;
- (void)_loadFailedWithError:(id)arg1 callbackRsp:(id)arg2;
- (id)_buildRequestWithOptions:(id)arg1 callbackRsp:(id)arg2;
- (void)fetchWithArrayBuffer:(id)arg1 options:(id)arg2 callback:(CDUnknownBlockType)arg3 progressCallback:(CDUnknownBlockType)arg4;
- (void)fetch:(id)arg1 callback:(CDUnknownBlockType)arg2 progressCallback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

