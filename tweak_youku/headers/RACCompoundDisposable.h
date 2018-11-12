//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACDisposable.h"

@interface RACCompoundDisposable : RACDisposable
{
    struct _opaque_pthread_mutex_t _mutex;
    RACDisposable *_inlineDisposables[2];
    struct __CFArray *_disposables;
    _Bool _disposed;
}

+ (id)compoundDisposableWithDisposables:(id)arg1;
+ (id)compoundDisposable;
- (void).cxx_destruct;
- (void)dispose;
- (void)removeDisposable:(id)arg1;
- (void)addDisposable:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithDisposables:(id)arg1;
- (id)init;
- (_Bool)isDisposed;

@end

