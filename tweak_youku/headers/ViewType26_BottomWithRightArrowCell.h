//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface ViewType26_BottomWithRightArrowCell : SKTableViewCell
{
    UIView *_backgroudView;
    UILabel *_titleLabel;
    UIImageView *_arrow;
    UIView *_downLine;
}

+ (float)getCellHeight;
@property(retain, nonatomic) UIView *downLine; // @synthesize downLine=_downLine;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
