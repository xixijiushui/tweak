//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString, UICollectionView, YKBarrageGradientView, YKBarrageHotwordCell, YKBarrageHotwordLayout;

@interface YKBarrageHotWordChooseView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSArray *_words;
    CDUnknownBlockType _chooseWordAction;
    UICollectionView *_collectionView;
    YKBarrageGradientView *_gradientView;
    YKBarrageHotwordLayout *_layout;
    YKBarrageHotwordCell *_sizingCell;
}

@property(retain, nonatomic) YKBarrageHotwordCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) YKBarrageHotwordLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) YKBarrageGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType chooseWordAction; // @synthesize chooseWordAction=_chooseWordAction;
@property(retain, nonatomic) NSArray *words; // @synthesize words=_words;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

