//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class AILPInputManager, NSString, WXSDKInstance;

@interface AILPChatInputModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
    AILPInputManager *_yklInput;
}

+ (id)wx_export_method_76;
+ (id)wx_export_method_75;
+ (id)wx_export_method_74;
@property(retain, nonatomic) AILPInputManager *yklInput; // @synthesize yklInput=_yklInput;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)addChatListMessage:(id)arg1 options:(id)arg2;
- (void)close;
- (void)open:(id)arg1 successCallback:(CDUnknownBlockType)arg2;
- (id)init;
- (id)getAdapterWithTag:(id)arg1;
- (id)getAdapter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
