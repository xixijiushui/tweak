//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQApiInterface : NSObject
{
}

+ (void)reportSDKCheck:(int)arg1 cmd:(id)arg2 isQzone:(_Bool)arg3;
+ (id)getTIMInstallUrl;
+ (id)getQQInstallUrl;
+ (_Bool)openTIM;
+ (_Bool)openQQ;
+ (_Bool)isSupportPushToQZone;
+ (_Bool)isSupportShareToQQ;
+ (_Bool)isTIMSupportApi;
+ (_Bool)isQQSupportApi;
+ (_Bool)isTIMInstalled;
+ (_Bool)isQQInstalled;
+ (int)SendReqToQZone:(id)arg1;
+ (int)sendReq:(id)arg1;
+ (int)sendMessageToQQQZoneWithReq:(id)arg1;
+ (int)sendMessageToQQWithReq:(id)arg1;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (_Bool)responseToSendMessageToQQ:(id)arg1 delegate:(id)arg2;
+ (int)responseToShowMessageFromQQ:(id)arg1;
+ (int)responseToGetMessageFromQQ:(id)arg1;
+ (int)SendMessageToQQRequest:(id)arg1;
+ (void)getMessageRequestFromQQ:(id)arg1;
+ (void)showMessageRequestFromQQ:(id)arg1 delegate:(id)arg2;

@end

