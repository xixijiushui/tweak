//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFAttachment, NSString;

@protocol MFAttachmentHandlingDelegate <NSObject>
- (void)showSelectedAttachment:(id)arg1;
- (void)showMenuForSelectedAttachment:(id)arg1;
- (void)launchMarkupReply;
- (void)launchMarkupReplyWithAttachment:(MFAttachment *)arg1;
- (void)markupDocument;
- (void)exportDocument;
- (void)saveAllAttachments;
- (NSString *)localizedTitleForSaveAllAttachmentsAction;
- (_Bool)canSaveAllAttachmentsInContext:(int)arg1;
- (_Bool)isAllowedToSaveAttachments;
@end

