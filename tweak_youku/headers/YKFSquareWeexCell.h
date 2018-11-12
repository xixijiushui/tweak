//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView, YKFEmbedWeexView, YKFSquareWeexCellViewModel;

@interface YKFSquareWeexCell : UITableViewCell
{
    YKFEmbedWeexView *_weexView;
    UIView *_lineView;
    YKFSquareWeexCellViewModel *_viewModel;
}

@property(retain, nonatomic) YKFSquareWeexCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) YKFEmbedWeexView *weexView; // @synthesize weexView=_weexView;
- (void).cxx_destruct;
- (void)refreshWithModel:(id)arg1;
- (void)updateModel:(id)arg1;
- (void)updateWeexURL:(id)arg1;
- (void)bindViewModel:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

