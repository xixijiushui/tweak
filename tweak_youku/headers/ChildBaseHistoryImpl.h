//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChildBaseHistoryProtocol.h"

@class NSString, YKJSONClient;

@interface ChildBaseHistoryImpl : NSObject <ChildBaseHistoryProtocol>
{
    YKJSONClient *_jsonclient;
}

@property(retain, nonatomic) YKJSONClient *jsonclient; // @synthesize jsonclient=_jsonclient;
- (void).cxx_destruct;
- (void)getChildHistoryListFromNative:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getChildHistoryListFromNet:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

