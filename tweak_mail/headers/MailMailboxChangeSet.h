//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCSChange.h"

@class MCSMailboxOperation;

@interface MailMailboxChangeSet : MCSChange
{
    MCSMailboxOperation *_mailboxOperation;
}

- (id)URLStrings;
- (id)stores;
- (id)accounts;
- (id)mailboxParentForMove;
- (id)mailboxToMoveOrRename;
- (id)mailboxToRemove;
- (id)modifiedMailboxName;
- (unsigned long long)adjustUnreadCount:(unsigned long long)arg1 withCriterion:(id)arg2;
- (id)copyChangeSetForFullPath:(id)arg1;
- (id)description;
- (long long)localizedChangeDescriptionPriority;
- (id)localizedChangeDescription;
- (id)localizedErrorTitle;
- (id)localizedErrorDescription;
- (_Bool)revert;
- (_Bool)commit;
- (id)applyPendingChangeToObjects:(id)arg1;
- (void)dealloc;
- (id)initWithOperation:(id)arg1;

@end

