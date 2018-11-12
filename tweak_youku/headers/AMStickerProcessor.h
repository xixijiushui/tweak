//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMBaseProcessor.h"

@class AMStickerItem;

@interface AMStickerProcessor : AMBaseProcessor
{
    AMStickerItem *_sticker;
    unsigned long long _stickerTriggerAction;
}

+ (id)fetchItemFromDict:(id)arg1;
+ (void)getStickerItemsByTipId:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)getStickerItemsByGroup:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (int)getTotalPage:(id)arg1;
+ (id)fetchItemsFromDict:(id)arg1;
+ (id)repairHttpPrefix:(id)arg1;
+ (id)getStickerGroups:(CDUnknownBlockType)arg1;
+ (id)fetchGroupsFromDict:(id)arg1;
+ (id)getStickerPathsByType:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long stickerTriggerAction; // @synthesize stickerTriggerAction=_stickerTriggerAction;
@property(retain, nonatomic) AMStickerItem *sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (int)processData:(id)arg1;
- (_Bool)setupHandle;
- (id)init;

@end
