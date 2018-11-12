//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface OPSubscriber : NSObject
{
    _Bool _sticky;
    id _observer;
    SEL _selector;
    NSString *_eventType;
    long long _threadMode;
    long long _priority;
    NSDictionary *_params;
    id _object;
}

@property(nonatomic) _Bool sticky; // @synthesize sticky=_sticky;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long threadMode; // @synthesize threadMode=_threadMode;
@property(copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;

@end

