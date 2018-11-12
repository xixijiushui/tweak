//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CMSComponentCellProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UICollectionView;

@interface CMSComponentTimeLineACell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, CMSComponentCellProtocol>
{
    NSArray *_models;
    NSMutableArray *_videoViewsArray;
    NSMutableArray *_subscribeViewsArray;
    NSMutableArray *_subscribeDateArray;
    NSMutableArray *_pointViewArray;
    UICollectionView *_collectionView;
    id <CMSComponentTimeLineACellDelegate> _delegate;
}

@property(nonatomic) __weak id <CMSComponentTimeLineACellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableArray *pointViewArray; // @synthesize pointViewArray=_pointViewArray;
@property(retain, nonatomic) NSMutableArray *subscribeDateArray; // @synthesize subscribeDateArray=_subscribeDateArray;
@property(retain, nonatomic) NSMutableArray *subscribeViewsArray; // @synthesize subscribeViewsArray=_subscribeViewsArray;
@property(retain, nonatomic) NSMutableArray *videoViewsArray; // @synthesize videoViewsArray=_videoViewsArray;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (void)exposeStatistics;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
