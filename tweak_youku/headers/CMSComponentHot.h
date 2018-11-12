//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "CardVideoViewDelegate.h"
#import "HomeHotAllCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CMSCardVideo, NSString, UICollectionView;

@interface CMSComponentHot : CMSComponent <UICollectionViewDataSource, UICollectionViewDelegate, CardVideoViewDelegate, HomeHotAllCellDelegate>
{
    UICollectionView *_collectionView;
    _Bool _showAllButton;
    CMSCardVideo *_allCardVideo;
}

- (void).cxx_destruct;
- (void)exposeStatistics;
- (void)homeHotAllCell:(id)arg1 didSelectAllButton:(id)arg2;
- (void)cardVideoViewDidSelectVideo:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)componentCard:(id)arg1 superViewWillAppear:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

