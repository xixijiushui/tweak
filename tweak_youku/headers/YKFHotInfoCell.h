//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "GIFImageViewDelegate.h"

@class GIFImageView, NSLayoutConstraint, NSString, UIImageView, UILabel, YKFHotCellViewModel;

@interface YKFHotInfoCell : UICollectionViewCell <GIFImageViewDelegate>
{
    GIFImageView *_coverImageView;
    UILabel *_topicLabel;
    UILabel *_readCountLabel;
    UILabel *_discussCountLabel;
    UILabel *_contentLabel;
    UIImageView *_hasAwardImageView;
    NSLayoutConstraint *_leadingConstraintOfTopicLabel;
    YKFHotCellViewModel *_viewModel;
}

@property(retain, nonatomic) YKFHotCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak NSLayoutConstraint *leadingConstraintOfTopicLabel; // @synthesize leadingConstraintOfTopicLabel=_leadingConstraintOfTopicLabel;
@property(nonatomic) __weak UIImageView *hasAwardImageView; // @synthesize hasAwardImageView=_hasAwardImageView;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *discussCountLabel; // @synthesize discussCountLabel=_discussCountLabel;
@property(nonatomic) __weak UILabel *readCountLabel; // @synthesize readCountLabel=_readCountLabel;
@property(nonatomic) __weak UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(nonatomic) __weak GIFImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (_Bool)imageViewShouldStartAnimating:(id)arg1;
- (void)bindViewModel:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
