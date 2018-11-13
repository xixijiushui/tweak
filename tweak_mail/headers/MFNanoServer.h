//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFContentProtectionObserver.h"
#import "MFNanoServerMessageContentLoaderDelegate.h"
#import "NNMKSyncProviderDelegate.h"

@class MFMailboxUid, MFNanoServerMessageSender, MFNanoServerMessageUpdater, NNMKSyncProvider, NSLock, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MFNanoServer : NSObject <NNMKSyncProviderDelegate, MFContentProtectionObserver, MFNanoServerMessageContentLoaderDelegate>
{
    NSObject<OS_dispatch_queue> *_nanoServerQueue;
    NSLock *_lock;
    NNMKSyncProvider *_syncProvider;
    NSMutableDictionary *_messageContentLoadersKeyedByMessageId;
    MFNanoServerMessageUpdater *_messageUpdater;
    MFNanoServerMessageSender *_messageSender;
    MFMailboxUid *_mailboxListeningForNotificationsTo;
    _Bool _waitingForAutoFetchDone;
}

+ (id)sharedInstance;
- (void)_fetchForSyncedMailboxType:(unsigned long long)arg1 syncedMailboxAccountId:(id)arg2 syncedMailboxURL:(id)arg3 conversationId:(id)arg4 growFetchWindow:(_Bool)arg5;
- (_Bool)_mailbox:(id)arg1 isOkForSyncedMailboxType:(unsigned long long)arg2 syncedMailboxAccountId:(id)arg3 syncedMailboxURL:(id)arg4;
- (id)_filteredMessagesArrayFromLibraryMessages:(id)arg1 syncedMailboxType:(unsigned long long)arg2 syncedMailboxAccountId:(id)arg3 syncedMailboxURL:(id)arg4;
- (id)_messagesReceivedBefore:(id)arg1 count:(unsigned long long)arg2 inConversationWithId:(id)arg3 success:(_Bool *)arg4 limitDateReceived:(id)arg5 syncedMailboxType:(unsigned long long)arg6 syncedMailboxAccountId:(id)arg7 syncedMailboxURL:(id)arg8;
- (id)_activeMailAccounts;
- (id)_nanoAccountFromMailAccount:(id)arg1;
- (id)_nanoActiveAccounts;
- (unsigned long long)_nnmkMailItemStatusFromMFMessageFlags:(unsigned long long)arg1 conversationFlags:(unsigned long long)arg2;
- (unsigned long long)_nnmkMailItemStatusFromMSResultsStatus:(unsigned long long)arg1;
- (id)_messageIdForMFLibraryMessage:(id)arg1;
- (id)_nanoMessageFromMFLibraryMessage:(id)arg1;
- (unsigned long long)_syncedMailboxTypeFromSettingsMailbox:(id)arg1;
- (void)_replaceMailboxRenamedObserver;
- (void)_postWatchedMailboxesChangedNotification;
- (void)_checkIfSettingsChanged;
- (void)_cancelLoadingContentForLibraryMessageId:(id)arg1;
- (void)_loadContentForLibraryMessageId:(id)arg1 highPriority:(_Bool)arg2;
- (void)_handleDataProtectionStatus;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (void)messageContentLoaderDidFailLoadingContent:(id)arg1;
- (void)messageContentLoaderDidFinishLoading:(id)arg1;
- (void)messageContentLoader:(id)arg1 receivedImageAttachment:(id)arg2 contentId:(id)arg3;
- (void)messageContentLoader:(id)arg1 receivedMailContent:(id)arg2 preview:(id)arg3;
- (void)_handleAutoFetchDone:(id)arg1;
- (void)_mailboxRenamed:(id)arg1;
- (void)_settingsChanged:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (void)_messagesCompacted:(id)arg1;
- (void)_conversationFlagsChanged:(id)arg1;
- (void)_messageFlagsChanged:(id)arg1;
- (void)_messagesAdded:(id)arg1;
- (void)syncProvider:(id)arg1 didRequestVerificationOfMessagesAndIds:(id)arg2 afterDate:(id)arg3;
- (void)syncProvider:(id)arg1 didRequestSendComposedMessage:(id)arg2;
- (void)syncProviderDidRequestAccounts:(id)arg1;
- (void)syncProviderDidRequestFetchManual:(id)arg1 forConversationId:(id)arg2;
- (void)syncProviderDidRequestFetchResume:(id)arg1;
- (void)syncProviderDidRequestStopDownloadingAllContentAndAttachments:(id)arg1;
- (void)syncProvider:(id)arg1 didRequestStopDownloadingContentAndAttachmentsForMessageWithId:(id)arg2;
- (void)syncProvider:(id)arg1 didRequestContentForMessageWithId:(id)arg2 highPriority:(_Bool)arg3;
- (void)syncProvider:(id)arg1 didRequestResendAccountWithId:(id)arg2;
- (void)syncProvider:(id)arg1 didRequestResendMessagesWithIds:(id)arg2;
- (void)syncProvider:(id)arg1 didRequestMessagesBeforeDate:(id)arg2 count:(unsigned long long)arg3 forConversationWithId:(id)arg4;
- (void)syncProvider:(id)arg1 didRequestMessagesBeforeDate:(id)arg2 count:(unsigned long long)arg3;
- (void)syncProvider:(id)arg1 didRequestFirstMessages:(unsigned long long)arg2;
- (void)syncProvider:(id)arg1 didUpdateMessagesStatus:(id)arg2;
- (id)nanoBulletinFlagsForMessageFromAccount:(id)arg1 mailboxURLString:(id)arg2 status:(unsigned long long)arg3 dateReceived:(id)arg4;
@property(retain, setter=_setMailboxListeningForNotificationsTo:) MFMailboxUid *_mailboxListeningForNotificationsTo;
- (id)watchedMailboxes;
- (void)_removeObservers;
- (void)_addObservers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
