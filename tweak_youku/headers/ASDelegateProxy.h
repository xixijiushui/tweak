//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@interface ASDelegateProxy : NSProxy
{
    id <ASDelegateProxyInterceptor> _interceptor;
    id <NSObject> _target;
}

- (void).cxx_destruct;
- (_Bool)interceptsSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)initWithTarget:(id)arg1 interceptor:(id)arg2;

@end

