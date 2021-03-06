//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFDeliveryDelegate.h"

@class MFError, MFMailMessage, MFMailboxUid, MFOutgoingMessage, MFOutgoingMessageDelivery, NSString;

@interface MFMailComposeDeliveryController : NSObject <MFDeliveryDelegate>
{
    id <MailComposeDeliveryControllerDelegate> _delegate;
    MFOutgoingMessageDelivery *_delivery;
    MFOutgoingMessage *_draftMessage;
    NSString *_sendingAddress;
    MFMailboxUid *_draftMailbox;
    NSString *_draftMessageID;
    MFMailMessage *_originalMessage;
    id <NSCoding> _autosaveIdentifier;
    MFError *_error;
    int _composeType;
}

@property(nonatomic) int composeType; // @synthesize composeType=_composeType;
@property(retain, nonatomic) MFMailMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property(retain, nonatomic) MFMailboxUid *draftMailbox; // @synthesize draftMailbox=_draftMailbox;
@property(copy, nonatomic) NSString *draftMessageID; // @synthesize draftMessageID=_draftMessageID;
@property(copy, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property(nonatomic) id <MailComposeDeliveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyUserDeliverySucceeded:(id)arg1;
- (void)setPercentDone:(double)arg1;
- (void)_setCodePointTranslationEnabled:(_Bool)arg1;
- (void)_removeDraft;
- (id)error;
- (_Bool)deliverMessage;
- (void)dealloc;
- (id)_initWithDelivery:(id)arg1 draftMessage:(id)arg2;
- (id)initWithComposeController:(id)arg1;
- (id)initWithDraftMessage:(id)arg1;
- (id)initWithDelivery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

