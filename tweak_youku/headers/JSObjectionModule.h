//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface JSObjectionModule : NSObject
{
    NSMutableDictionary *_bindings;
    NSMutableSet *_eagerSingletons;
}

@property(readonly, nonatomic) NSSet *eagerSingletons; // @synthesize eagerSingletons=_eagerSingletons;
@property(readonly, nonatomic) NSDictionary *bindings; // @synthesize bindings=_bindings;
- (void).cxx_destruct;
- (id)protocolKey:(id)arg1 withName:(id)arg2;
- (id)classKey:(Class)arg1 withName:(id)arg2;
- (void)ensureInstance:(id)arg1 conformsTo:(id)arg2;
- (void)configure;
- (_Bool)hasBindingForProtocol:(id)arg1 withName:(id)arg2;
- (_Bool)hasBindingForProtocol:(id)arg1;
- (_Bool)hasBindingForClass:(Class)arg1 withName:(id)arg2;
- (_Bool)hasBindingForClass:(Class)arg1;
- (void)registerEagerSingleton:(Class)arg1;
- (void)bindClass:(Class)arg1 inScope:(int)arg2;
- (void)bindBlock:(CDUnknownBlockType)arg1 toProtocol:(id)arg2 inScope:(int)arg3 named:(id)arg4;
- (void)bindBlock:(CDUnknownBlockType)arg1 toProtocol:(id)arg2 inScope:(int)arg3;
- (void)bindBlock:(CDUnknownBlockType)arg1 toClass:(Class)arg2 inScope:(int)arg3 named:(id)arg4;
- (void)bindBlock:(CDUnknownBlockType)arg1 toClass:(Class)arg2 inScope:(int)arg3;
- (void)bindBlock:(CDUnknownBlockType)arg1 toProtocol:(id)arg2 named:(id)arg3;
- (void)bindBlock:(CDUnknownBlockType)arg1 toProtocol:(id)arg2;
- (void)bindBlock:(CDUnknownBlockType)arg1 toClass:(Class)arg2 named:(id)arg3;
- (void)bindBlock:(CDUnknownBlockType)arg1 toClass:(Class)arg2;
- (void)bindClass:(Class)arg1 toClass:(Class)arg2 inScope:(int)arg3 named:(id)arg4;
- (void)bindClass:(Class)arg1 toClass:(Class)arg2 named:(id)arg3;
- (void)bindClass:(Class)arg1 toClass:(Class)arg2;
- (void)bindClass:(Class)arg1 toProtocol:(id)arg2 inScope:(int)arg3 named:(id)arg4;
- (void)bindClass:(Class)arg1 toProtocol:(id)arg2 named:(id)arg3;
- (void)bindClass:(Class)arg1 toProtocol:(id)arg2;
- (void)bindProvider:(id)arg1 toProtocol:(id)arg2 inScope:(int)arg3 named:(id)arg4;
- (void)bindProvider:(id)arg1 toProtocol:(id)arg2 inScope:(int)arg3;
- (void)bindProvider:(id)arg1 toClass:(Class)arg2 inScope:(int)arg3 named:(id)arg4;
- (void)bindProvider:(id)arg1 toClass:(Class)arg2 inScope:(int)arg3;
- (void)bindProvider:(id)arg1 toProtocol:(id)arg2 named:(id)arg3;
- (void)bindProvider:(id)arg1 toProtocol:(id)arg2;
- (void)bindProvider:(id)arg1 toClass:(Class)arg2 named:(id)arg3;
- (void)bindProvider:(id)arg1 toClass:(Class)arg2;
- (void)bind:(id)arg1 toClass:(Class)arg2 named:(id)arg3;
- (void)bind:(id)arg1 toClass:(Class)arg2;
- (void)bind:(id)arg1 toProtocol:(id)arg2 named:(id)arg3;
- (void)bind:(id)arg1 toProtocol:(id)arg2;
- (void)bindMetaClass:(Class)arg1 toProtocol:(id)arg2;
- (id)init;

@end
