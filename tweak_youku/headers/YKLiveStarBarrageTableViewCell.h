//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface YKLiveStarBarrageTableViewCell : UITableViewCell
{
    UIImageView *_avatarImageView;
    UIView *_dmContainer;
    UILabel *_dmLabel;
}

@property(nonatomic) __weak UILabel *dmLabel; // @synthesize dmLabel=_dmLabel;
@property(nonatomic) __weak UIView *dmContainer; // @synthesize dmContainer=_dmContainer;
@property(nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithBarrageInfo:(id)arg1;
- (void)resizeWithBarrageInfo:(id)arg1;
- (void)updateDmLabelWithBarrageInfo:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

