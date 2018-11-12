//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface YKBCGlobalStyleModule : NSObject <WXModuleProtocol>
{
    int _im_bg;
    int _im_input_bg;
    int _popup_layer_height;
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_16;
+ (id)wx_export_method_15;
@property(nonatomic) int popup_layer_height; // @synthesize popup_layer_height=_popup_layer_height;
@property(nonatomic) int im_input_bg; // @synthesize im_input_bg=_im_input_bg;
@property(nonatomic) int im_bg; // @synthesize im_bg=_im_bg;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (id)colorWithHexString:(id)arg1;
- (void)updateStringAttr:(id)arg1 value:(id)arg2;
- (void)updateIntAttr:(id)arg1 value:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

