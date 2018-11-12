//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableArray, NSString;

@interface WVWebViewRecorder : NSObject
{
    NSHashTable *_webViewList;
    NSMutableArray *_urlArray;
    NSString *_currentURL;
    long long _currentStatus;
}

+ (id)topWebView;
+ (id)allWebView;
+ (id)currentWebViewInfo;
+ (id)sharedInstance;
@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(copy, nonatomic) NSString *currentURL; // @synthesize currentURL=_currentURL;
@property(retain, nonatomic) NSMutableArray *urlArray; // @synthesize urlArray=_urlArray;
@property(retain, nonatomic) NSHashTable *webViewList; // @synthesize webViewList=_webViewList;
- (void).cxx_destruct;
- (void)syncWKWebViewCookie;
- (id)allWebView;
- (id)currentWebViewInfo;
- (void)reportWebViewClose:(id)arg1;
- (void)reportLoadURL:(id)arg1;
- (void)reportVisiblityChanged:(id)arg1;
- (void)addWebViewCount:(id)arg1;
- (void)reportWebViewReuse:(id)arg1;
- (void)reportWebViewOpen:(id)arg1;
- (void)dealloc;
- (id)init;

@end

