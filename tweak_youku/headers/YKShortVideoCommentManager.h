//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MtopExtRequestDelegate.h"

@class NSString, YKJSONClient;

@interface YKShortVideoCommentManager : NSObject <MtopExtRequestDelegate>
{
    YKJSONClient *_jsonClient;
    YKJSONClient *_httpClient;
}

+ (id)getServerDomain;
+ (_Bool)isDebugEnv;
+ (id)shareInstance;
@property(retain, nonatomic) YKJSONClient *httpClient; // @synthesize httpClient=_httpClient;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
- (void).cxx_destruct;
- (id)defaultParams;
- (void)cancelAll;
- (void)isInBlackList:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)updownComment:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)addComment:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)deleteComment:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)getCommentList:(id)arg1 result:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

