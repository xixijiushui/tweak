//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSString;

@interface WMLMessageChannelManager : NSObject
{
    NSString *_name;
    NSHashTable *_channels;
    long long _invokeCount;
    long long _sumCost;
    unsigned long long _count;
}

+ (id)managerWithName:(id)arg1;
+ (id)managers;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) long long sumCost; // @synthesize sumCost=_sumCost;
@property(nonatomic) long long invokeCount; // @synthesize invokeCount=_invokeCount;
@property(retain, nonatomic) NSHashTable *channels; // @synthesize channels=_channels;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)postMessage:(id)arg1 originChannel:(id)arg2;
- (id)getChannels;
- (void)close;
- (void)removeChannel:(id)arg1;
- (void)addChannel:(id)arg1;
@property(readonly, nonatomic) double cost;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithName:(id)arg1;

@end
