//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKSRUBaseCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, UICollectionView, UIView, YKRecentReadInfo;

@interface YKRecentReadCell : YKSRUBaseCell <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate>
{
    CDUnknownBlockType _TapItemAtIndex;
    UIView *_seperator;
    YKRecentReadInfo *_recentReadInfo;
    UICollectionView *_collectionView;
}

+ (double)height:(id)arg1;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) YKRecentReadInfo *recentReadInfo; // @synthesize recentReadInfo=_recentReadInfo;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(copy, nonatomic) CDUnknownBlockType TapItemAtIndex; // @synthesize TapItemAtIndex=_TapItemAtIndex;
- (void).cxx_destruct;
- (void)endScroller:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)reload;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

