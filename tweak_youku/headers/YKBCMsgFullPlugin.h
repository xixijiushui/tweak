//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class UIView, YKBCChatPluginViewController;

@interface YKBCMsgFullPlugin : OPPlugin
{
    UIView *msgView;
    YKBCChatPluginViewController *vc;
}

+ (id)params;
- (void).cxx_destruct;
- (void)playDidFinishInitConfiguration:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendNotice:(id)arg1 time:(long long)arg2;
- (void)sendNoticeWithIcon:(id)arg1 name:(id)arg2 message:(id)arg3 time:(long long)arg4;
- (void)setMainController:(id)arg1;
- (void)modeChange:(id)arg1;
- (void)playTouchEndedWithPointAction:(id)arg1;
- (void)onReceived:(id)arg1;

@end

