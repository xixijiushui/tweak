//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, UICollectionView;

@interface WXRecycleListTemplateManager : NSObject
{
    NSMapTable *_templateTypeMap;
    UICollectionView *_collectionView;
}

@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)topTemplate;
- (void)_registerCellClassForReuseID:(id)arg1;
- (id)templateWithType:(id)arg1;
- (id)dequeueCellSlotWithType:(id)arg1 forIndexPath:(id)arg2;
- (void)addTemplate:(id)arg1;
- (id)init;

@end

