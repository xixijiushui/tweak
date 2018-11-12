//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class YKStagePhotoLandingCollectionView;

@interface YKStagePhotoLandingView : UIView
{
    CDUnknownBlockType _OnDidSelectItem;
    CDUnknownBlockType _OnStartLoading;
    CDUnknownBlockType _OnStopLoading;
    YKStagePhotoLandingCollectionView *_collectionView;
}

@property(retain, nonatomic) YKStagePhotoLandingCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType OnStopLoading; // @synthesize OnStopLoading=_OnStopLoading;
@property(copy, nonatomic) CDUnknownBlockType OnStartLoading; // @synthesize OnStartLoading=_OnStartLoading;
@property(copy, nonatomic) CDUnknownBlockType OnDidSelectItem; // @synthesize OnDidSelectItem=_OnDidSelectItem;
- (void).cxx_destruct;
- (id)getContentView;
- (void)scrollsToTop;
- (void)stopRefreshAnimating;
- (void)loadMoreItems;
- (void)refreshItems;
- (_Bool)refreshItemsIfNeed;
- (void)setFrame:(struct CGRect)arg1;
- (void)setCollectionViewFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

