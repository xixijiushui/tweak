//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

@class NSObject<OS_dispatch_queue>;

@interface WXThreadSafeMutableArray : NSMutableArray
{
    struct _opaque_pthread_mutex_t _safeThreadArrayMutex;
    struct _opaque_pthread_mutexattr_t _safeThreadArrayMutexAttr;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_array;
}

@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)keyEnumerator;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (id)initCommon;

@end

