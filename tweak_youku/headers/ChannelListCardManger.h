//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface ChannelListCardManger : NSObject
{
    NSArray *_items;
    NSArray *_cmsItemsArray;
    struct CGSize _cellSize;
}

@property(retain, nonatomic) NSArray *cmsItemsArray; // @synthesize cmsItemsArray=_cmsItemsArray;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)reuseCell:(id)arg1 atIndex:(long long)arg2;
- (void)reuseCell:(id)arg1 atIndex:(long long)arg2 highlighted:(_Bool)arg3;
- (double)rowHeightAtIndex:(long long)arg1;
- (id)reuseCellIdentifier;
- (Class)reuseCellClass;
- (long long)rowCount;
- (id)bridge:(id)arg1;
- (id)initWithCMSItems:(id)arg1;
- (id)initWithItems:(id)arg1;

@end

