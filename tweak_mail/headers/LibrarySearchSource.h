//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSource.h"

#import "MiniMallSearchWrapper.h"
#import "SearchManagerDelegate.h"

@class MFMailMessageLibrary, MFMessageCriterion, MessageToMailboxUidCache, NSArray, NSMutableSet, NSNumber, NSObject<OS_dispatch_queue>, NSString, SearchManager, SourceSearchContext;

@interface LibrarySearchSource : GenericSource <SearchManagerDelegate, MiniMallSearchWrapper>
{
    MFMailMessageLibrary *_library;
    NSString *_uniqueID;
    NSMutableSet *_messages;
    MessageToMailboxUidCache *_mailboxCache;
    struct __CFDictionary *_messageCache;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_primarySources;
    SearchManager *_searchManager;
    NSNumber *_searchIdentifier;
    SourceSearchContext *_searchContext;
    MFMessageCriterion *_baseCriterion;
    unsigned int _isProtectedDataAvailable:1;
    unsigned int _shouldThread:1;
}

- (id)mailboxUids;
- (id)_copyPrimarySources;
- (id)diagnosticDescription;
- (_Bool)shouldPlayNewMailSound;
- (id)mailboxSourcesForMessageInfos:(id)arg1;
- (id)noMessagesLabelText;
- (void)reloadPreferences;
- (_Bool)shouldThreadConversations;
- (_Bool)shouldArchiveByDefault;
- (_Bool)shouldArchiveByDefaultForMessageInfos:(id)arg1;
- (_Bool)supportsArchivingForMessageInfos:(id)arg1;
- (_Bool)deleteMovesToTrashForMessageInfos:(id)arg1;
- (id)_sourceForMessageInfo:(id)arg1 sources:(id)arg2;
- (_Bool)supportsArchiving;
- (_Bool)deleteMovesToTrash;
- (_Bool)supportsFlagging;
- (_Bool)supportsSearch;
- (_Bool)supportsMarkAll;
- (_Bool)supportsMoveAllAcrossSources;
- (_Bool)supportsMoveAll;
- (_Bool)supportsDeleteAllAcrossSources;
- (_Bool)supportsDeleteAll;
- (id)uniqueIDForStorage;
- (id)uniqueIDForStatus;
- (void)_messagesWereCompacted:(id)arg1;
- (void)_messagesWillBeCompacted:(id)arg1;
- (void)_messageFlagsChanged:(id)arg1;
- (void)_messagesAdded:(id)arg1;
- (void)_queue_updateMessages:(id)arg1 usingCriterion:(id)arg2;
- (void)_queue_filterInMessages:(id)arg1 usingCriterion:(id)arg2;
- (id)_applyCriterion:(id)arg1 toMessages:(id)arg2;
- (id)_baseCriterionFromSources:(id)arg1;
- (void)_removeMessages:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_updateMessages:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_addMessages:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setMessages:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_nts_unknownMessagesFromArray:(id)arg1;
- (id)_nts_knownMessagesFromArray:(id)arg1;
- (void)_cacheMessages:(id)arg1;
- (void)_purgeCachedMessages:(id)arg1;
- (void)_notifyMallSearchFinished;
- (void)_notifyMallWithAddedMessages:(id)arg1 modified:(id)arg2 removedMessages:(id)arg3 group:(id)arg4;
- (void)searchManager:(id)arg1 finishedSearchWithIdentifier:(id)arg2;
- (void)searchManager:(id)arg1 foundMessages:(id)arg2 keepExistingMessages:(_Bool)arg3 forSearchWithIdentifier:(id)arg4 shouldWait:(_Bool)arg5;
- (id)searchForMessagesUsingSearchContext:(id)arg1;
- (void)_cancelSearchWithIdentifier:(id)arg1;
- (id)_nts_effectiveCriterion;
@property(readonly, getter=isSearching) _Bool searching;
- (CDUnknownFunctionPointerType)comparator;
- (_Bool)shouldCompactOnFetch;
- (_Bool)canLoadOlderMessages;
- (_Bool)canFetchSearchResults;
- (_Bool)representsMailboxID:(unsigned int)arg1;
- (_Bool)representsMailboxUid:(id)arg1;
- (void)applyChanges;
- (id)cachedMessageForMessageInfo:(id)arg1;
- (id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(_Bool)arg2;
- (id)copyMessageInfosMatchingCriterion:(id)arg1;
- (id)copyMessageInfos;
- (id)_copyMessageInfosFromMessages:(id)arg1;
- (unsigned long long)messageCount;
- (void)flushCaches;
- (void)close;
- (void)open;
@property(getter=isProtectedDataAvailable) _Bool protectedDataAvailable;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 primarySources:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

