//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol ChildBaseHttpRequestProtocol <NSObject>
- (void)cancelAll;
- (void)cancelWithApiName:(NSString *)arg1;
- (void)mtopRequestWithURLString:(NSString *)arg1 parameters:(NSDictionary *)arg2 success:(void (^)(NSDictionary *))arg3 fail:(void (^)(NSError *))arg4;
@end

