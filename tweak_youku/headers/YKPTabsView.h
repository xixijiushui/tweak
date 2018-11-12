//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UIScrollView;

@interface YKPTabsView : UIView
{
    long long _selectTag;
    UIScrollView *_scrollView;
    UIView *_dotView;
    NSMutableArray *_btnArray;
    UIView *_seporateLine;
    id <YKPTabsViewDelegate> _delegate;
    NSArray *_dataSource;
}

+ (double)height;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <YKPTabsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateBtnStateWhenClick;
- (void)btnClickAction:(id)arg1;
- (void)updateSelectedLineViewFromBtn:(id)arg1;
- (void)updateBtnState;
- (float)titleLength:(id)arg1;
- (float)caculateLength;
- (void)reloadData;
@property(readonly, nonatomic) NSString *selectValue;
@property(readonly, nonatomic) id selectObject;
- (void)setSelectIndex:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long selectIndex;
- (void)setDataSource:(id)arg1 index:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
