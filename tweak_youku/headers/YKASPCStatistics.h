//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKASPCStatistics : NSObject
{
}

+ (void)sendAliTitleExpandClick;
+ (void)sendAliUserNameClick;
+ (void)sendAliHotVideoClickVid:(id)arg1 num:(unsigned long long)arg2;
+ (void)sendAliHotVideoExpandClick;
+ (void)sendAliHotVideoAllClick;
+ (void)sendAliSubscribeLive;
+ (void)sendAliWatchLive;
+ (void)sendAliStartLive;
+ (void)sendAliEndChannelPV:(id)arg1 source:(id)arg2 pageClass:(id)arg3;
+ (void)sendAliStartChannelPVForClass:(id)arg1;
+ (void)sendFeedBrowsingDepth:(long long)arg1;
+ (void)sendLiveInfoCellPV:(id)arg1 typeId:(id)arg2 source:(id)arg3;
+ (void)sendLiveInfoCellClick:(id)arg1 typeId:(id)arg2 source:(id)arg3;
+ (void)sendLiveInfoSubscribeAction:(id)arg1 source:(id)arg2;
+ (void)sendChannelPV:(id)arg1 cs:(id)arg2 source:(id)arg3;
+ (void)sendChannelSelfShow;
+ (void)sendChannelSelfClick:(id)arg1 typeId:(id)arg2 source:(id)arg3;
+ (void)sendDesktopClick:(id)arg1 flag:(long long)arg2 source:(id)arg3;
+ (void)sendShareClick:(id)arg1 source:(id)arg2;
+ (void)sendChatClick:(id)arg1;
+ (void)sendChannelMenuClick:(id)arg1 title:(id)arg2 menuID:(id)arg3;
+ (void)sendChannelInfoClickWithVid:(id)arg1 pid:(id)arg2 index:(long long)arg3 tuid:(id)arg4 source:(id)arg5 enentType:(long long)arg6;
+ (void)sendChannelInfoNavClick:(id)arg1 type:(long long)arg2;
+ (void)sendUnSubscribeAction:(id)arg1 from:(id)arg2 source:(id)arg3;
+ (void)sendSubscribeAction:(id)arg1 from:(id)arg2 source:(id)arg3;
+ (void)sendFeedSubscribeClick:(id)arg1 source:(id)arg2;
+ (void)sendFeedArticleClick:(id)arg1 source:(id)arg2;
+ (void)sendFeedVideoClickWithVid:(id)arg1 pid:(id)arg2 index:(long long)arg3 tuid:(id)arg4 source:(id)arg5 type:(id)arg6 action:(id)arg7;
+ (void)sendShowClick:(id)arg1 index:(long long)arg2 tuid:(id)arg3 source:(id)arg4;
+ (void)convenienceCollectWithTuid:(id)arg1 moudleCode:(id)arg2 sourceCode:(id)arg3 bottomId:(id)arg4 bottomTitle:(id)arg5;

@end

