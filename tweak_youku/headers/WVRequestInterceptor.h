//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WVRequestInterceptor : NSObject
{
}

+ (_Bool)webView:(id)arg1 canInterceptNavigation:(id)arg2 withInterceptors:(id)arg3 byInterceptor:(id *)arg4;
+ (_Bool)webView:(id)arg1 canInterceptNavigation:(id)arg2 byInterceptor:(id *)arg3;
+ (_Bool)webView:(id)arg1 canPreInterceptNavigation:(id)arg2 byInterceptor:(id *)arg3;
+ (void)registerRequestInterceptor:(id)arg1;
+ (void)registerPreRequestInterceptor:(id)arg1;
+ (void)initialize;

@end

