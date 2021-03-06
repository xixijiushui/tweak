//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MFMessageViewingContextDelegate.h"

@class MFMailMessage, MFMessageViewingContext, MessageContentAreaLayer, NSString;

@interface TransferMessageViewController : UIViewController <MFMessageViewingContextDelegate>
{
    MFMessageViewingContext *_messageViewingContext;
    MFMailMessage *_message;
}

@property(retain, nonatomic) MFMailMessage *message; // @synthesize message=_message;
- (void)loadView;
@property(readonly, nonatomic) MessageContentAreaLayer *messageContentAreaLayer;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

