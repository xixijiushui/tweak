//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIImageView, UILabel, UIScrollView;

@interface UploadCommunitySegmentedControl : UIView
{
    long long _selectTag;
    UIScrollView *_scrollView;
    NSMutableArray *_btnArray;
    UIImageView *_iconImgView;
    UILabel *_tipLabel;
    int _style;
    id <UploadCommunitySegmentedControlDelegate> _delegate;
    NSArray *_dataSource;
}

@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) id <UploadCommunitySegmentedControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateBtnStateWhenClick;
- (void)btnClickAction:(id)arg1;
- (void)updateViewsStyle;
- (void)updateBtnState;
- (void)reloadData;
- (id)selectValue;
- (id)selectObject;
- (void)setSelectIndex:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long selectIndex;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

