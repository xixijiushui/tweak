//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FavoriteItem : NSObject
{
    unsigned long long _type;
    NSString *_syncKey;
    _Bool _selected;
    _Bool _shouldSync;
}

+ (id)itemFromDictionary:(id)arg1;
+ (_Bool)_defaultShouldSync;
+ (id)itemForOutbox;
+ (id)itemForSharedMailboxWithType:(unsigned long long)arg1 selected:(_Bool)arg2;
+ (id)itemForUnifiedMailboxWithType:(int)arg1 selected:(_Bool)arg2;
+ (id)itemForInboxWithAccount:(id)arg1 selected:(_Bool)arg2;
+ (id)itemForMailbox:(id)arg1 selected:(_Bool)arg2 shouldSync:(_Bool)arg3;
+ (id)itemForMailbox:(id)arg1 selected:(_Bool)arg2;
+ (id)itemForAccount:(id)arg1;
@property(nonatomic) _Bool shouldSync; // @synthesize shouldSync=_shouldSync;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (id)persistentIdForMigration;
- (void)wasChangedExternally;
- (void)wasRemovedFromCollecion:(id)arg1;
- (void)wasAddedToCollection:(id)arg1;
- (id)syncValue;
- (id)syncKey;
- (void)configureCell:(id)arg1;
- (id)representingMailboxes;
- (id)representingMailbox;
- (id)account;
- (void)wasSelected:(id)arg1 accessoryTapped:(_Bool)arg2;
- (id)badgeCountString;
- (id)applicationShortcutIcon;
- (id)defaultIcon;
- (long long)_defaultCellAccessoryType;
- (_Bool)isSelected;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isDeletable;
- (_Bool)isMovable;
- (_Bool)isVisible;
- (id)displayName;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

