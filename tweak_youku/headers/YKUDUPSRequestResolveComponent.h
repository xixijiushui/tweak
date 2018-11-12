//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKUDVideoResolveComponent.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface YKUDUPSRequestResolveComponent : NSObject <YKUDVideoResolveComponent>
{
    void *onCallbackQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
- (void)commitCallbackBlock:(CDUnknownBlockType)arg1;
- (id)getUPSParametersWith:(id)arg1;
- (_Bool)resolveVideo:(id)arg1 withContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

