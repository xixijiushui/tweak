//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HYSNSProxyInterface.h"

@class NSString;

@interface HYLoginzfbServiceProxy : NSObject <HYSNSProxyInterface>
{
    NSString *_appId;
    NSString *_secret;
    NSString *_pid;
    NSString *_scheme;
    CDUnknownBlockType _block;
}

+ (void)load;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)isInstalled;
- (void)handleAuthResultDict:(id)arg1;
- (void)auth:(CDUnknownBlockType)arg1 onViewController:(id)arg2;
- (void)bind:(CDUnknownBlockType)arg1 params:(id)arg2 onViewController:(id)arg3;
- (_Bool)handleOpenURL:(id)arg1;
- (void)registerWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

