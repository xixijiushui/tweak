//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKSPTopicBaseCell.h"

@class UIImageView, UILabel;

@interface YKSPTopicNoneTableViewCell : YKSPTopicBaseCell
{
    UIImageView *_thumbView;
    UILabel *_titleView;
    UIImageView *_rightImage;
}

@property(retain, nonatomic) UIImageView *rightImage; // @synthesize rightImage=_rightImage;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
- (void).cxx_destruct;
- (void)setSearchItemDTO:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
