//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSURLRequest, NSURLResponse;

@protocol YKUDDownloadRequestTracker <NSObject>
- (void)onEnd:(_Bool)arg1 withError:(NSError *)arg2;
- (void)onReceiveDataBytes:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)onReceiveHeader:(NSDictionary *)arg1 response:(NSURLResponse *)arg2 andRequest:(NSURLRequest *)arg3;
- (void)onReceiveStatusCode:(long long)arg1;
- (void)onStart;
@end

