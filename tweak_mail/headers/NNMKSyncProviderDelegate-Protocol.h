//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NNMKComposedMessage, NNMKSyncProvider, NSArray, NSDate, NSDictionary, NSString;

@protocol NNMKSyncProviderDelegate <NSObject>
- (void)syncProvider:(NNMKSyncProvider *)arg1 didRequestSendComposedMessage:(NNMKComposedMessage *)arg2;
- (void)syncProvider:(NNMKSyncProvider *)arg1 didRequestVerificationOfMessagesAndIds:(NSDictionary *)arg2 afterDate:(NSDate *)arg3;
- (void)syncProvider:(NNMKSyncProvider *)arg1 didRequestResendAccountWithId:(NSString *)arg2;
- (void)syncProvider:(NNMKSyncProvider *)arg1 didRequestResendMessagesWithIds:(NSArray *)arg2;
- (void)syncProviderDidRequestFetchManual:(NNMKSyncProvider *)arg1 forConversationId:(NSString *)arg2;
- (void)syncProviderDidRequestFetchResume:(NNMKSyncProvider *)arg1;
- (void)syncProviderDidRequestAccounts:(NNMKSyncProvider *)arg1;
- (void)syncProviderDidRequestStopDownloadingAllContentAndAttachments:(NNMKSyncProvider *)arg1;
- (void)syncProvider:(NNMKSyncProvider *)arg1 didRequestStopDownloadingContentAndAttachmentsForMessageWithId:(NSString *)arg2;
- (void)syncProvider:(NNMKSyncProvider *)arg1 didRequestContentForMessageWithId:(NSString *)arg2 highPriority:(_Bool)arg3;
- (void)syncProvider:(NNMKSyncProvider *)arg1 didRequestMessagesBeforeDate:(NSDate *)arg2 count:(unsigned long long)arg3 forConversationWithId:(NSString *)arg4;
- (void)syncProvider:(NNMKSyncProvider *)arg1 didRequestMessagesBeforeDate:(NSDate *)arg2 count:(unsigned long long)arg3;
- (void)syncProvider:(NNMKSyncProvider *)arg1 didRequestFirstMessages:(unsigned long long)arg2;
- (void)syncProvider:(NNMKSyncProvider *)arg1 didUpdateMessagesStatus:(NSDictionary *)arg2;
@end

