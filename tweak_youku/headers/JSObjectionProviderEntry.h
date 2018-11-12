//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSObjectionEntry.h"

@interface JSObjectionProviderEntry : JSObjectionEntry
{
    id <JSObjectionProvider> _provider;
    CDUnknownBlockType _block;
    int _lifeCycle;
    id _storageCache;
}

- (int)lifeCycle;
- (void).cxx_destruct;
- (id)buildObject:(id)arg1;
- (void)dealloc;
- (id)extractObject:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 lifeCycle:(int)arg2;
- (id)initWithProvider:(id)arg1 lifeCycle:(int)arg2;

@end
