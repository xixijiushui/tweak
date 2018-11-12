//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChildBaseHttpRequestClient, NSMutableDictionary, NSOperationQueue;

@interface ChildDataPreloadManager : NSObject
{
    NSOperationQueue *_queue;
    NSMutableDictionary *_resultData;
    ChildBaseHttpRequestClient *_client;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ChildBaseHttpRequestClient *client; // @synthesize client=_client;
@property(retain, nonatomic) NSMutableDictionary *resultData; // @synthesize resultData=_resultData;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)preload:(id)arg1;
- (void)getPreload:(id)arg1 sucess:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)addOperation:(id)arg1;
- (id)init;

@end

