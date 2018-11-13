//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCSMailboxOperation.h"

@class MFMailboxUid, NSString;

@interface MCSCreateMailboxOperation : MCSMailboxOperation
{
    NSString *_pendingName;
    MFMailboxUid *_parentMailbox;
    NSString *_reasonForFailure;
}

@property(copy, nonatomic) NSString *reasonForFailure; // @synthesize reasonForFailure=_reasonForFailure;
- (id)localizedErrorTitle;
- (id)localizedErrorDescription;
- (id)accountForErrorHandling;
- (_Bool)revert;
- (_Bool)commit;
- (void)dealloc;
- (id)initWithName:(id)arg1 parentMailbox:(id)arg2;

@end

