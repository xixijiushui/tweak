//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WMLMessageChannelManager;

@interface WMLMessageChannel : NSObject
{
    NSString *_name;
    NSDictionary *_clientInfo;
    CDUnknownBlockType _onMessage;
    WMLMessageChannelManager *_manager;
}

+ (id)channelWithChannel:(id)arg1;
+ (id)channel;
+ (id)channelWithName:(id)arg1;
@property(nonatomic) __weak WMLMessageChannelManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) CDUnknownBlockType onMessage; // @synthesize onMessage=_onMessage;
@property(copy, nonatomic) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)close;
- (void)postMessage:(id)arg1;
@property(readonly, nonatomic) double cost;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

@end

