//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKScriptMessageHandler.h"

@class NSString;

@interface HmtWKWebAction : NSObject <WKScriptMessageHandler>
{
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _activityStartHandler;
    CDUnknownBlockType _activityEndHandler;
    CDUnknownBlockType _actionStartHandler;
    CDUnknownBlockType _actionEndHandler;
}

@property(copy, nonatomic) CDUnknownBlockType actionEndHandler; // @synthesize actionEndHandler=_actionEndHandler;
@property(copy, nonatomic) CDUnknownBlockType actionStartHandler; // @synthesize actionStartHandler=_actionStartHandler;
@property(copy, nonatomic) CDUnknownBlockType activityEndHandler; // @synthesize activityEndHandler=_activityEndHandler;
@property(copy, nonatomic) CDUnknownBlockType activityStartHandler; // @synthesize activityStartHandler=_activityStartHandler;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
- (void).cxx_destruct;
- (id)getInfoFromMessage:(id)arg1;
- (_Bool)setWKWebViewAction:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (_Bool)removeAction:(id)arg1;
- (_Bool)setWebViewActionWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

