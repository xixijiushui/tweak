//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFAccount, MFMailComposeDeliveryController, MFOutgoingMessageDelivery;

@protocol MailComposeDeliveryControllerDelegate <NSObject>
- (void)mailComposeDeliveryControllerDidAttemptToSaveDraft:(MFMailComposeDeliveryController *)arg1 account:(MFAccount *)arg2 result:(unsigned long long)arg3;
- (void)mailComposeDeliveryControllerDidAttemptToSend:(MFMailComposeDeliveryController *)arg1 outgoingMessageDelivery:(MFOutgoingMessageDelivery *)arg2;
- (void)mailComposeDeliveryControllerWillAttemptToSend:(MFMailComposeDeliveryController *)arg1;
@end

