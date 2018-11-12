//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPointerArray;

@interface DYKWVJSBHandler : NSObject
{
    id <DYKWVWebViewProtocol> _webView;
    NSPointerArray *_observers;
}

@property(retain, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <DYKWVWebViewProtocol> webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (CDUnknownBlockType)titleBarHandler;
- (CDUnknownBlockType)loadUrlHandler;
- (CDUnknownBlockType)closeHandler;
- (void)registBasicJSBridge;
- (void)addJSBObserver:(id)arg1;
- (id)initWithWebView:(id)arg1;

@end

