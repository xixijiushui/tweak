//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliBShareElementUserStack : NSObject
{
}

+ (void)commitTransitionTime:(id)arg1 totalTime:(double)arg2 animationTime:(double)arg3;
+ (void)commitClearResourceFail:(id)arg1 reason:(id)arg2 code:(id)arg3;
+ (void)commitResourceDownloadUrl:(id)arg1 code:(id)arg2 msg:(id)arg3 result:(_Bool)arg4;
+ (void)commitTransitionSuc:(id)arg1;
+ (void)commitTransitionFail:(id)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;
+ (void)commitTransitionStart:(id)arg1;
+ (void)registerTransitionAppMonitor;
+ (void)setUTEnabled:(_Bool)arg1;

@end
