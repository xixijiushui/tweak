//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DYKUploadOSSActionMonitor : NSObject
{
}

+ (void)sendEventOnTask:(id)arg1 stage:(id)arg2 subStage:(id)arg3 errorSource:(id)arg4 errorCode:(id)arg5;
+ (void)sendUploadEventOnTask:(id)arg1 fileInfo:(id)arg2 ossError:(id)arg3 description:(id)arg4;
+ (void)sendBeforeBegin:(id)arg1;
+ (id)parseMtopRequestError:(id)arg1;
+ (void)sendLoginOut:(id)arg1;
+ (void)sendRetry:(id)arg1;
+ (void)sendDelete:(id)arg1;
+ (void)sendBeContinue:(id)arg1;
+ (void)sendContinue:(id)arg1;
+ (void)sendBePause:(id)arg1;
+ (void)sendPause:(id)arg1;
+ (void)sendRemove:(id)arg1;
+ (void)sendAdd:(id)arg1;

@end

