//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VICHttpRequest, VICHttpResponse;

@protocol VICHttpRequestProtocol <NSObject>
- (void)asyncRequest:(VICHttpRequest *)arg1 callback:(void (^)(VICHttpResponse *))arg2;
- (VICHttpResponse *)syncRequest:(VICHttpRequest *)arg1;
@end

