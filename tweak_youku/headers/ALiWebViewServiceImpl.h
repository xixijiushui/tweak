//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALiWebViewService.h"

@class NSMapTable, NSString;

@interface ALiWebViewServiceImpl : NSObject <ALiWebViewService>
{
    NSMapTable *_wrappers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMapTable *wrappers; // @synthesize wrappers=_wrappers;
- (void).cxx_destruct;
- (void)bindWebviewService:(id)arg1 context:(id)arg2;
- (void)bindWebviewService:(id)arg1 sourceViewController:(id)arg2;
- (_Bool)isAllowLoadURLRequest:(id)arg1 webview:(id)arg2 sourceViewController:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
