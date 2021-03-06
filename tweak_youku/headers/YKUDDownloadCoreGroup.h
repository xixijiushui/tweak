//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKUDDownloadCoreProtocol.h"

@class NSMutableArray, NSString;

@interface YKUDDownloadCoreGroup : NSObject <YKUDDownloadCoreProtocol>
{
    NSString *_name;
    id _parent;
    NSMutableArray *_downloadRequests;
    NSMutableArray *_cores;
    long long _maxConcurrentCountPerCore;
}

@property(nonatomic) long long maxConcurrentCountPerCore; // @synthesize maxConcurrentCountPerCore=_maxConcurrentCountPerCore;
@property(retain, nonatomic) NSMutableArray *cores; // @synthesize cores=_cores;
@property(retain, nonatomic) NSMutableArray *downloadRequests; // @synthesize downloadRequests=_downloadRequests;
@property(nonatomic) __weak id parent; // @synthesize parent=_parent;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)check;
@property(readonly, copy) NSString *description;
- (id)selectDownloadRequestForCore:(id)arg1;
- (id)selectDownloadCore;
- (void)scheduleDownloadRequest;
- (_Bool)isBusy;
- (void)initializeDownloadCores;
- (void)stopAndCancelAllRequest;
- (void)removeDownloadRequests:(id)arg1;
- (void)submitDownloadRequest:(id)arg1;
- (id)initWithName:(id)arg1 andCoreCount:(long long)arg2;
- (id)initWithName:(id)arg1 andCoreCount:(long long)arg2 withMaxConcurrentCountPerCore:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

