//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol AILPLoggingProtocol <NSObject>
- (void)logMessage:(NSString *)arg1 level:(unsigned long long)arg2 func:(const char *)arg3 format:(NSString *)arg4 arguments:(char *)arg5;
- (void)error:(NSString *)arg1 valist:(char *)arg2;
- (void)warn:(NSString *)arg1 valist:(char *)arg2;
- (void)info:(NSString *)arg1 valist:(char *)arg2;
- (void)debug:(NSString *)arg1 valist:(char *)arg2;
- (void)setLevel:(unsigned long long)arg1;
@end
