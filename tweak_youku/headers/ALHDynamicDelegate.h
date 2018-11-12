//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class ALHDynamicClassDelegate, NSMapTable, NSMutableDictionary, Protocol;

@interface ALHDynamicDelegate : NSProxy
{
    Protocol *_protocol;
    NSMutableDictionary *_handlers;
    id _realDelegate;
    ALHDynamicClassDelegate *_classProxy;
    NSMapTable *_invocationsBySelectors;
}

+ (id)description;
@property(readonly, nonatomic) NSMapTable *invocationsBySelectors; // @synthesize invocationsBySelectors=_invocationsBySelectors;
@property(retain, nonatomic) ALHDynamicClassDelegate *classProxy; // @synthesize classProxy=_classProxy;
@property(nonatomic) __weak id realDelegate; // @synthesize realDelegate=_realDelegate;
@property(readonly, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (void)removeBlockImplementationForClassMethod:(SEL)arg1;
- (void)implementClassMethod:(SEL)arg1 withBlock:(id)arg2;
- (id)blockImplementationForClassMethod:(SEL)arg1;
- (void)removeBlockImplementationForMethod:(SEL)arg1;
- (void)implementMethod:(SEL)arg1 withBlock:(id)arg2;
- (id)blockImplementationForMethod:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1;
- (Class)class;
- (_Bool)isClassProxy;

@end
