//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class GIFImageView, UIButton, YKFSquareBActivityCellViewModel;

@interface YKFSquareBActivityCell : UITableViewCell
{
    YKFSquareBActivityCellViewModel *_viewModel;
    GIFImageView *_coverImageView;
    UIButton *_actionButton;
}

@property(nonatomic) __weak UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak GIFImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) YKFSquareBActivityCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)bindViewModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

