//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIAppearance.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "YKFEmojisKBViewLayoutDelegate.h"

@class NSArray, NSString, UICollectionView, UIColor, UIPageControl, YKFEmojiItem, YKFEmojisKBViewLayout;

@interface YKFEmojisKBView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, YKFEmojisKBViewLayoutDelegate, UIAppearance>
{
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    YKFEmojiItem *_deleteEmojiItem;
    id <YKFEmojisKBViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_emojis_origin;
    NSArray *_emojis_processed;
    YKFEmojisKBViewLayout *_emojisKBViewLayout;
    UIPageControl *_pageControl;
    long long _cell_gap;
    long long _column_num;
    long long _row_num;
    double _column_length;
    double _row_length;
    long long _cell_sum_per_page;
    long long _page_sum;
}

@property(nonatomic) long long page_sum; // @synthesize page_sum=_page_sum;
@property(nonatomic) long long cell_sum_per_page; // @synthesize cell_sum_per_page=_cell_sum_per_page;
@property(nonatomic) double row_length; // @synthesize row_length=_row_length;
@property(nonatomic) double column_length; // @synthesize column_length=_column_length;
@property(nonatomic) long long row_num; // @synthesize row_num=_row_num;
@property(nonatomic) long long column_num; // @synthesize column_num=_column_num;
@property(nonatomic) long long cell_gap; // @synthesize cell_gap=_cell_gap;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) YKFEmojisKBViewLayout *emojisKBViewLayout; // @synthesize emojisKBViewLayout=_emojisKBViewLayout;
@property(retain, nonatomic) NSArray *emojis_processed; // @synthesize emojis_processed=_emojis_processed;
@property(retain, nonatomic) NSArray *emojis_origin; // @synthesize emojis_origin=_emojis_origin;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <YKFEmojisKBViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YKFEmojiItem *deleteEmojiItem; // @synthesize deleteEmojiItem=_deleteEmojiItem;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
- (void).cxx_destruct;
- (long long)ykf_numberOfPages;
- (struct CGSize)ykf_sizeForCell;
- (long long)ykf_numberOfColumnsForPerPage;
- (long long)ykf_numberOfRowsForPerPage;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)prepareEmojiDataWithPageCount:(long long)arg1 itemCountPerPage:(long long)arg2;
- (void)setupLayout;
- (void)pageDidChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
