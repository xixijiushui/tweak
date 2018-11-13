//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFAddressBookClient.h"

@class MFMessageResultsGenerator, MFWeakDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface MFMessageBulletinsObserver : NSObject <MFAddressBookClient>
{
    NSObject<OS_dispatch_queue> *_queue;
    MFMessageResultsGenerator *_queueResultsGenerator;
    _Bool _hasVIPs;
    _Bool _hasThreads;
    NSMutableSet *_observedAccountIDs;
    NSMutableDictionary *_observedStoresByAccountID;
    NSLock *_observedStoresByAccountIDLock;
    MFWeakDictionary *_summaryClientsByReference;
    id <MFMessageBulletinsObserverDelegate> _delegate;
}

@property(nonatomic) id <MFMessageBulletinsObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMessagesCompacted:(id)arg1;
- (void)_handleFlagsChanged:(id)arg1;
- (void)_handleMessagesAdded:(id)arg1;
- (void)_handleFavoriteMailboxesChanged:(id)arg1;
- (void)_handlePushedFoldersChanged:(id)arg1;
- (void)_handleFoldersChanged:(id)arg1;
- (void)_handleThreadsChanged:(id)arg1;
- (void)_handleVIPsChanged:(id)arg1;
- (void)_handleAccountsChanged:(id)arg1;
- (void)_handlePreferencesChanged:(id)arg1;
- (void)_protectedDataBecameAvailable:(id)arg1;
- (void)_handleAddressBookChanged;
- (void)addressBookPreferencesChangedForAddressBookManager:(id)arg1;
- (void)addressBookManager:(id)arg1 addressBookDidChange:(void *)arg2;
- (void)notifyMessagesAdded:(id)arg1 afterDate:(id)arg2 isSummaryDownload:(_Bool)arg3;
- (void)updateMessage:(id)arg1 withSummary:(id)arg2;
- (void)cancelSummaryRequestsForAccountWithID:(id)arg1;
- (void)cancelSummaryRequestForMessageWithExternalReference:(id)arg1;
- (void)_invalidateClient:(id)arg1;
- (void)requestSummaryForMessage:(id)arg1;
- (void)requestSummaryWithClient:(id)arg1;
- (id)_nts_resultsGenerator;
- (void)_notifyAccountsChanged:(id)arg1 hasVIPs:(_Bool)arg2 hasThreads:(_Bool)arg3 error:(id)arg4;
- (_Bool)_nts_updateObservationWithAccounts:(id)arg1;
- (void)_nts_stopObservingAccountWithIDs:(id)arg1;
- (void)_nts_startObservingAccounts:(id)arg1;
- (void)_stopObservingStore:(id)arg1;
- (void)_startObservingStore:(id)arg1;
- (void)stop;
- (void)start;
- (void)setTargetQueue:(id)arg1;
- (_Bool)isObservingMailboxID:(id)arg1 inAccountID:(id)arg2;
- (id)messagesForAccountIDs:(id)arg1 count:(unsigned long long)arg2 clearedInfo:(id)arg3 sinceDate:(id)arg4;
- (id)activeBulletinsAccounts:(id *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

