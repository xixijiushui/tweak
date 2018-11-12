//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFRouterAdapter;

@interface LFRouter : NSObject
{
    LFRouterAdapter *_adapter;
}

+ (id)router;
@property(retain, nonatomic) LFRouterAdapter *adapter; // @synthesize adapter=_adapter;
- (void).cxx_destruct;
- (void)closeController:(id)arg1 animate:(_Bool)arg2;
- (id)matchURL:(id)arg1;
- (_Bool)handleURL:(id)arg1 parameters:(id)arg2;
- (_Bool)handleURL:(id)arg1 withSource:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (id)_validURL:(id)arg1;
- (_Bool)openUrl:(id)arg1 userInfo:(id)arg2 toViewController:(id *)arg3;
- (_Bool)openUrl:(id)arg1 userInfo:(id)arg2 transition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (_Bool)openUrl:(id)arg1 userInfo:(id)arg2 transition:(unsigned long long)arg3 animated:(_Bool)arg4 toViewController:(id *)arg5;
- (_Bool)openUrl:(id)arg1 userInfo:(id)arg2;
- (_Bool)openUrl:(id)arg1 transition:(unsigned long long)arg2;
- (_Bool)openUrl:(id)arg1;

@end

