//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChildOPAppInterceptorService, OPPlugin;

@interface ChildOPPlayInterceptor : NSObject
{
    OPPlugin *_plugin;
    ChildOPAppInterceptorService *_interceptorService;
}

@property(nonatomic) __weak ChildOPAppInterceptorService *interceptorService; // @synthesize interceptorService=_interceptorService;
@property(nonatomic) __weak OPPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (_Bool)isIntercept;

@end

