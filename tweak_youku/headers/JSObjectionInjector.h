//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSSet;

@interface JSObjectionInjector : NSObject
{
    NSDictionary *_globalContext;
    NSMutableDictionary *_context;
    NSSet *_eagerSingletons;
    NSMutableArray *_modules;
}

- (void).cxx_destruct;
- (void)configureDefaultModule;
- (void)configureModule:(id)arg1;
- (void)initializeEagerSingletons;
- (id)modules;
- (void)injectDependencies:(id)arg1;
- (id)withoutModuleCollection:(id)arg1;
- (id)withoutModuleOfTypes:(Class)arg1;
- (id)withoutModuleOfType:(Class)arg1;
- (id)withModuleCollection:(id)arg1;
- (id)withModules:(id)arg1;
- (id)withModule:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)getObject:(id)arg1 named:(id)arg2 argumentList:(id)arg3;
- (id)getObject:(id)arg1 named:(id)arg2 initializer:(SEL)arg3 argumentList:(id)arg4;
- (id)getObject:(id)arg1 argumentList:(id)arg2;
- (id)getObject:(id)arg1 named:(id)arg2 arguments:(char *)arg3;
- (id)getObject:(id)arg1 initializer:(SEL)arg2 argumentList:(id)arg3;
- (id)getObject:(id)arg1 arguments:(char *)arg2;
- (id)getObject:(id)arg1 namedWithArgs:(id)arg2;
- (id)getObjectWithArgs:(id)arg1;
- (id)getObject:(id)arg1 named:(id)arg2;
- (id)getObject:(id)arg1;
- (id)initWithContext:(id)arg1 andModules:(id)arg2;
- (id)initWithContext:(id)arg1 andModule:(id)arg2;
- (id)initWithContext:(id)arg1;

@end

