//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface HYSNSManager : NSObject
{
    NSMutableDictionary *_proxyObjects;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *proxyObjects; // @synthesize proxyObjects=_proxyObjects;
- (void).cxx_destruct;
- (id)queryThirdPartySessionForName:(id)arg1;
- (_Bool)isInstalled:(id)arg1;
- (void)bindWithName:(id)arg1 params:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 onViewController:(id)arg4;
- (void)authWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 onViewController:(id)arg3;
- (_Bool)handleOpenURL:(id)arg1;
- (void)registerConfiguration:(id)arg1 forName:(id)arg2;
- (void)registerProxyObject:(id)arg1 withName:(id)arg2;
- (id)proxyForName:(id)arg1;
- (id)init;

@end
