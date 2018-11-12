//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "WXResourceRequestHandler.h"

@class NSString;

@interface WXNetworkHandler : NSObject <WXResourceRequestHandler, NSURLConnectionDataDelegate>
{
}

- (id)md5:(id)arg1;
- (_Bool)checkIntegrityOfMainBundle:(id)arg1;
- (id)generateLanguageString;
- (id)resourceContentForURL:(id)arg1 withHeader:(id *)arg2;
- (_Bool)handleMainBundleWhenFinishLoading:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (_Bool)connectionShouldCached:(id)arg1;
- (_Bool)connectionShouldCancel:(id)arg1 receiveResponse:(id)arg2;
- (void)sendRequest:(id)arg1 withDelegate:(id)arg2;
- (_Bool)isMainBundle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

