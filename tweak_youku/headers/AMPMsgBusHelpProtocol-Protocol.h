//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol AMPMsgBusHelpProtocol <NSObject>
- (void)registerEventNotify:(NSString *)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4 dataClass3:(Class)arg5;
- (void)registerEventNotify:(NSString *)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4;
- (void)registerEventNotify:(NSString *)arg1 action:(SEL)arg2 dataClass:(Class)arg3;
- (void)registerEventTopNotify:(NSString *)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4 dataClass3:(Class)arg5;
- (void)registerEventTopNotify:(NSString *)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4;
- (void)registerEventTopNotify:(NSString *)arg1 action:(SEL)arg2 dataClass:(Class)arg3;
- (void)registerEventFilter:(NSString *)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4 dataClass3:(Class)arg5;
- (void)registerEventFilter:(NSString *)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4;
- (void)registerEventFilter:(NSString *)arg1 action:(SEL)arg2 dataClass:(Class)arg3;
@end

