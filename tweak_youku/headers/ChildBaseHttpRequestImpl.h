//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChildBaseHttpRequestProtocol.h"

@class NSString, YKJSONClient;

@interface ChildBaseHttpRequestImpl : NSObject <ChildBaseHttpRequestProtocol>
{
    YKJSONClient *_mtopClient;
}

@property(retain, nonatomic) YKJSONClient *mtopClient; // @synthesize mtopClient=_mtopClient;
- (void).cxx_destruct;
- (void)cancelAll;
- (void)cancelWithApiName:(id)arg1;
- (void)mtopRequestWithURLString:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

