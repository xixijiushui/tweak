//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OPAppInterceptorService, OPPlugin;

@interface OPPlayInterceptor : NSObject
{
    OPPlugin *_plugin;
    OPAppInterceptorService *_interceptorService;
}

@property(nonatomic) __weak OPAppInterceptorService *interceptorService; // @synthesize interceptorService=_interceptorService;
@property(nonatomic) __weak OPPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (_Bool)isIntercept;

@end
