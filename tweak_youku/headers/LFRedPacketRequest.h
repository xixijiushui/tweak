//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LFRedPacketRequest : NSObject
{
}

+ (void)requestForPLURedPacketInfomationWithSender:(id)arg1 rid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)requestForGrabedPLURedPacketUserListWithSender:(id)arg1 rid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)requestForGrabPLURedPacketWithSender:(id)arg1 rid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)requestForSendPLURedPacketWithSender:(id)arg1 rid:(id)arg2 slogan:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)requestForGrabedAnchorRedPacketUserListWithSender:(id)arg1 rid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)requestForGrabAnchorRedPacketWithSender:(id)arg1 rid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)requestForSendAnchorRedPacketWithSender:(id)arg1 coins:(long long)arg2 partCount:(unsigned long long)arg3 sendType:(long long)arg4 slogan:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
+ (void)requestForAvailableRedPacketsWithSender:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end
