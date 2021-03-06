//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "VIPCinemaCollectionViewLayoutDelegate.h"

@class NSMutableArray, NSString, NSTimer, UICollectionView, VIPPrivateCinemaConfig;

@interface VIPPrivateCinemaCollectionView : UIView <VIPCinemaCollectionViewLayoutDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isPlaying;
    _Bool _expctedToPlay;
    id <VIPPrivateCinemaCollectionViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSMutableArray *_dataArray;
    VIPPrivateCinemaConfig *_cinemaConfig;
    NSTimer *_timer;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool expctedToPlay; // @synthesize expctedToPlay=_expctedToPlay;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) VIPPrivateCinemaConfig *cinemaConfig; // @synthesize cinemaConfig=_cinemaConfig;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <VIPPrivateCinemaCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setPrivateCinemaViewWithData:(id)arg1;
- (void)scrollToItemAtIndex:(long long)arg1;
- (void)cinemaPauseOperation;
- (void)pause;
- (void)play;
- (void)setBackgroundColor:(id)arg1;
- (void)collectioViewScrollToIndex:(long long)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)playNextItemCell;
- (void)layoutSubviews;
- (void)setUpCollectionView;
- (void)setPrivateCinemaConfig;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

