//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock;

@interface TVHAppAtomicIntegerCreater : NSObject
{
    long long _atomicNumber;
    NSRecursiveLock *_numberLock;
}

+ (id)getInstance;
@property(retain, nonatomic) NSRecursiveLock *numberLock; // @synthesize numberLock=_numberLock;
@property long long atomicNumber; // @synthesize atomicNumber=_atomicNumber;
- (void).cxx_destruct;
- (long long)addAndGetNumber;
- (long long)getAndAddNumber;
- (long long)getCurrentNumber;
- (id)init;

@end

