//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JSObjectionEntry.h"

@class JSObjectionInjector, NSString;

@interface JSObjectionEntry : NSObject <JSObjectionEntry>
{
    JSObjectionInjector *injector;
}

+ (id)entryWithEntry:(id)arg1;
@property(nonatomic) JSObjectionInjector *injector; // @synthesize injector;
@property(readonly, nonatomic) int lifeCycle; // @dynamic lifeCycle;
- (id)extractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
