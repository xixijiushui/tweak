//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol LSLiveFullInfoRequest <NSObject>
- (void)requestMTop:(NSDictionary *)arg1:(void (^)(NSDictionary *))arg2;
- (void)requestFullInfo:(NSString *)arg1:(void (^)(NSDictionary *))arg2;
@end

