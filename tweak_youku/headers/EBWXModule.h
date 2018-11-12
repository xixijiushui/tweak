//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class EBBindData, NSString, WXSDKInstance;

@interface EBWXModule : NSObject <WXModuleProtocol>
{
    struct _opaque_pthread_mutex_t mutex;
    struct _opaque_pthread_mutexattr_t mutexAttr;
    WXSDKInstance *weexInstance;
    EBBindData *_bindData;
}

+ (id)wx_export_method_sync_46;
+ (id)wx_export_method_sync_45;
+ (id)wx_export_method_sync_44;
+ (id)wx_export_method_sync_43;
+ (id)wx_export_method_sync_42;
+ (id)wx_export_method_sync_41;
@property(retain, nonatomic) EBBindData *bindData; // @synthesize bindData=_bindData;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (id)getComputedStyle:(id)arg1;
- (id)supportFeatures;
- (void)unbindAll;
- (void)unbind:(id)arg1;
- (id)bind:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)prepare:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

