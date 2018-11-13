//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFSearchSuggestion.h"

@class MFMailboxUid, NSString;

@interface MFSearchMailboxSuggestion : MFSearchSuggestion
{
    MFMailboxUid *_mailbox;
    NSString *_subtitle;
}

+ (id)suggestionForMailbox:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, retain, nonatomic) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
- (id)contactIdentifier;
- (id)subtitle;
- (id)title;
- (id)category;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailbox:(id)arg1;

@end

