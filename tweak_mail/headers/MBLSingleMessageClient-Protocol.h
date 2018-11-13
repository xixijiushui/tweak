//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFError, MFMailMessage, NSString;

@protocol MBLSingleMessageClient <NSObject>
- (void)notifyContentsUnavailableForMessage:(MFMailMessage *)arg1 error:(MFError *)arg2;
- (void)notifyContentsAvailable:(NSString *)arg1 forMessage:(MFMailMessage *)arg2;
- (_Bool)wantsContentsOfType:(int)arg1;
- (MFMailMessage *)message;
- (double)ordering;
- (unsigned long long)priority;

@optional
- (void)notifyFullMessageContentsUnavailableForMessage:(MFMailMessage *)arg1 error:(MFError *)arg2;
@end

