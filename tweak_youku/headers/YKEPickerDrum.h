//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIColor, UIImageView, UIScrollView;

@interface YKEPickerDrum : UIView <UIScrollViewDelegate>
{
    double _VIEW_WIDTH;
    double _VIEW_HEIGHT;
    long long _VIEW_NUM;
    long long _ROW_NUM;
    long long _topContentIndex;
    long long _topViewIndex;
    long long _bottomViewIndex;
    long long _centerViewIndex;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    _Bool _didLoad;
    id <YKEPickerDrumDataSource> _dataSource;
    id <YKEPickerDrumDelegate> _delegate;
    UIColor *_foregroundColor;
    long long _centerContentIndex;
}

@property(nonatomic) long long centerContentIndex; // @synthesize centerContentIndex=_centerContentIndex;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) __weak id <YKEPickerDrumDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <YKEPickerDrumDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)adjustContentOffset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollWithDirection:(_Bool)arg1;
- (long long)calcViewIndex:(long long)arg1 incremental:(long long)arg2;
- (void)refreshViews;
- (void)layoutSubviews;
- (id)titleForIndex:(long long)arg1;
- (id)viewForIndex:(long long)arg1 reusingView:(id)arg2;
- (long long)rowNumberFromIndex:(long long)arg1;
- (double)rowHeight;
- (long long)selectedRow;
- (void)selectRow:(long long)arg1 animated:(_Bool)arg2;
- (void)reload;
- (id)foregroundImage;
- (void)customInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

