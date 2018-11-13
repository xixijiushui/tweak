//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSearch.h"

#import "MSDSearchProtocol.h"
#import "QueryProgressMonitor.h"

@class MFActivityMonitor, MFMailMessageLibrary, MFMessageCriterion, MFXPCClient, NSArray, NSString;

@interface MFDSearch : MSSearch <QueryProgressMonitor, MSDSearchProtocol>
{
    MFMailMessageLibrary *_library;
    MFXPCClient *_client;
    MFActivityMonitor *_monitor;
    MFMessageCriterion *_criteria;
    id <MFMessageIterationFilter> _filter;
    unsigned long long _options;
    NSArray *_keys;
}

+ (id)endpointInfo;
@property(copy, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) id <MFMessageIterationFilter> filter; // @synthesize filter=_filter;
@property(retain, nonatomic) MFMessageCriterion *criteria; // @synthesize criteria=_criteria;
- (unsigned int)_libraryOptions;
- (void)_backgroundSearch;
- (_Bool)shouldCancel;
- (void)stop;
- (void)start;
- (void)_libraryWillBecomeUnavailable:(id)arg1;
- (void)_autoFetchDone:(id)arg1;
- (void)_registerForAutoFetchFinishedNotification;
- (_Bool)_hasSearchableMailAccount;
- (void)findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3;
- (id)_searchResultsProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)newConnectionForInterface:(id)arg1;
- (void)dealloc;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)init;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

