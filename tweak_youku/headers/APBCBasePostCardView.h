//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIView<APBCPostCardComponent>;

@interface APBCBasePostCardView : UIView
{
    id <APBCPostContentViewModelProtocol> _viewModel;
    CDUnknownBlockType _editPostCardView;
    UIView *_contentView;
    UIView<APBCPostCardComponent> *_brandHeaderView;
    UIView<APBCPostCardComponent> *_headerView;
    UIView<APBCPostCardComponent> *_footerView;
}

+ (double)heightWithViewModel:(id)arg1 maxWidth:(double)arg2;
+ (double)calculateFooterHeightWithViewModel:(id)arg1 maxWidth:(double)arg2;
+ (double)calculateContentHeightWithViewModel:(id)arg1 maxWidth:(double)arg2;
+ (double)calculateHeaderHeightWithViewModel:(id)arg1 maxWidth:(double)arg2;
+ (double)calculateBrandHeaderHeightWithViewModel:(id)arg1 maxWidth:(double)arg2;
+ (double)caculateHeightWithViewModel:(id)arg1 maxWidth:(double)arg2;
+ (Class)brandHeaderViewClassWithViewModel:(id)arg1;
+ (Class)footerViewClassWithViewModel:(id)arg1;
+ (Class)headerViewClassWithViewModel:(id)arg1;
@property(retain, nonatomic) UIView<APBCPostCardComponent> *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView<APBCPostCardComponent> *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView<APBCPostCardComponent> *brandHeaderView; // @synthesize brandHeaderView=_brandHeaderView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType editPostCardView; // @synthesize editPostCardView=_editPostCardView;
@property(retain, nonatomic) id <APBCPostContentViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateCardViewWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
