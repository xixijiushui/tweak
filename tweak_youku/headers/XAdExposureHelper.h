//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XAdExposureHelper : NSObject
{
}

+ (void)exposureWithResponse:(id)arg1 withIe:(id)arg2 withError:(id)arg3 withInfo:(id)arg4;
+ (void)adExposureEmsWithEmsType:(long long)arg1 vid:(id)arg2 adType:(long long)arg3 reqId:(id)arg4 extParams:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)adExposureWithUrl:(id)arg1 adType:(long long)arg2 withIe:(id)arg3 withInfo:(id)arg4 isOffline:(_Bool)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)adExposureWithUrl:(id)arg1 adType:(long long)arg2 withIe:(id)arg3 withInfo:(id)arg4;
+ (void)splashExposureWithType:(long long)arg1 exposureArray:(id)arg2 coldStart:(_Bool)arg3 isCache:(_Bool)arg4 withTS:(_Bool)arg5 withIe:(id)arg6 withInfo:(id)arg7;
+ (void)splashExposureWithType:(long long)arg1 withAdv:(id)arg2 coldStart:(_Bool)arg3 isCache:(_Bool)arg4 reqId:(id)arg5;

@end

