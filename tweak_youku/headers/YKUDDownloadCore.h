//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKUDDownloadCoreProtocol.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, YKUDDownloader;

@interface YKUDDownloadCore : NSObject <YKUDDownloadCoreProtocol>
{
    void *onExecQueue;
    _Bool _extra;
    id _parent;
    unsigned long long _scheme;
    YKUDDownloader *_downloader;
    NSObject<OS_dispatch_queue> *_execQueue;
    NSMutableArray *_listeners;
    NSOperationQueue *_downloadSupportQueue;
    NSString *_name;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) NSOperationQueue *downloadSupportQueue; // @synthesize downloadSupportQueue=_downloadSupportQueue;
@property(retain, nonatomic) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *execQueue; // @synthesize execQueue=_execQueue;
@property(retain, nonatomic) YKUDDownloader *downloader; // @synthesize downloader=_downloader;
@property(nonatomic) unsigned long long scheme; // @synthesize scheme=_scheme;
@property(nonatomic) _Bool extra; // @synthesize extra=_extra;
@property(nonatomic) __weak id parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)check;
@property(readonly, copy) NSString *description;
- (_Bool)isBusy;
- (void)execute:(CDUnknownBlockType)arg1;
@property(nonatomic) long long maxConcurrentDownloadCount;
- (void)stop;
- (void)start;
- (void)stopAndCancelAllRequest;
- (void)removeDownloadRequests:(id)arg1;
- (void)submitDownloadRequest:(id)arg1;
- (id)initWithName:(id)arg1 andExtra:(_Bool)arg2 withScheme:(unsigned long long)arg3;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
