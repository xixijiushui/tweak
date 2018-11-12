//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface VICWeexPluginModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_sync_35;
+ (id)wx_export_method_sync_34;
+ (id)wx_export_method_31;
+ (id)wx_export_method_30;
+ (id)wx_export_method_29;
+ (id)wx_export_method_28;
+ (id)wx_export_method_27;
+ (id)wx_export_method_26;
+ (id)wx_export_method_25;
+ (id)wx_export_method_24;
+ (id)wx_export_method_23;
+ (id)wx_export_method_22;
+ (id)wx_export_method_21;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)showVerticalHalfWebview:(id)arg1 title:(id)arg2;
- (void)preLoadVid:(id)arg1 position:(id)arg2;
- (void)playVid:(id)arg1 position:(id)arg2;
- (void)hold:(id)arg1 isHold:(_Bool)arg2;
- (void)rotateTo:(long long)arg1;
- (id)fetchStageInfo:(id)arg1;
- (id)fetchSDKVersion;
- (void)toast:(id)arg1;
- (void)stageInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)pluginInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)hide:(id)arg1;
- (void)unload:(id)arg1;
- (void)loadNextPluginById:(id)arg1;
- (void)load:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
