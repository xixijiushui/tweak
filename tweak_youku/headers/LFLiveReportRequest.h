//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LFLiveReportRequest : NSObject
{
}

+ (id)jsonStringEncoded:(id)arg1;
+ (void)sendReportError:(id)arg1 errorCode:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
+ (void)sendReportChanged:(id)arg1 cameraFront:(_Bool)arg2 state:(unsigned long long)arg3 debugInfo:(id)arg4 successBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
+ (void)sendReportStart:(id)arg1 cameraFront:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;

@end

