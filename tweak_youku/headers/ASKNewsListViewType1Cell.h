//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSIndexPath, UIImageView, UILabel, UIView;

@interface ASKNewsListViewType1Cell : UITableViewCell
{
    NSIndexPath *_indexPath;
    UIImageView *_newsImageView;
    UILabel *_newsTitleLabel;
    UILabel *_timeLabel;
    UIImageView *_commentCountImageView;
    UILabel *_commentCountLabel;
    UIImageView *_vedioIconImageView;
    UIView *_lineView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIImageView *vedioIconImageView; // @synthesize vedioIconImageView=_vedioIconImageView;
@property(nonatomic) __weak UILabel *commentCountLabel; // @synthesize commentCountLabel=_commentCountLabel;
@property(nonatomic) __weak UIImageView *commentCountImageView; // @synthesize commentCountImageView=_commentCountImageView;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *newsTitleLabel; // @synthesize newsTitleLabel=_newsTitleLabel;
@property(nonatomic) __weak UIImageView *newsImageView; // @synthesize newsImageView=_newsImageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)configWithModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

