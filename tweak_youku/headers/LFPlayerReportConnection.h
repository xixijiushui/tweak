//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LFPlayerReportConnection : NSObject
{
}

+ (void)repirtCostTime:(id)arg1 deviceId:(id)arg2 appId:(id)arg3 costTimeDict:(id)arg4 completion:(CDUnknownBlockType)arg5 failed:(CDUnknownBlockType)arg6;
+ (void)reportCV:(id)arg1 alias:(id)arg2 roomID:(id)arg3 playURL:(id)arg4 netType:(id)arg5 cbec:(long long)arg6 guid:(id)arg7 sc:(id)arg8 kaTimes:(id)arg9 completion:(CDUnknownBlockType)arg10 failed:(CDUnknownBlockType)arg11;
+ (void)reportMPE:(id)arg1 roomID:(id)arg2 alias:(id)arg3 playURL:(id)arg4 guid:(id)arg5 sc:(id)arg6 completion:(CDUnknownBlockType)arg7 failed:(CDUnknownBlockType)arg8;
+ (void)reportMPR:(id)arg1 roomID:(id)arg2 alias:(id)arg3 playURL:(id)arg4 loadingTime:(long long)arg5 netType:(id)arg6 guid:(id)arg7 sc:(id)arg8 qpl:(id)arg9 qs:(id)arg10 completion:(CDUnknownBlockType)arg11 failed:(CDUnknownBlockType)arg12;

@end

