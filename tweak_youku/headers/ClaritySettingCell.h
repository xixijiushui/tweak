//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ClaritySettingModel, UIImageView, UILabel, UIView;

@interface ClaritySettingCell : UITableViewCell
{
    UIImageView *_cornerMarkImage;
    UILabel *_cornerMarkLabel;
    UIView *_checkMarkBackground;
    UIImageView *_checkMarkImage;
    ClaritySettingModel *_model;
}

@property(retain, nonatomic) ClaritySettingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *checkMarkImage; // @synthesize checkMarkImage=_checkMarkImage;
@property(retain, nonatomic) UIView *checkMarkBackground; // @synthesize checkMarkBackground=_checkMarkBackground;
@property(retain, nonatomic) UILabel *cornerMarkLabel; // @synthesize cornerMarkLabel=_cornerMarkLabel;
@property(retain, nonatomic) UIImageView *cornerMarkImage; // @synthesize cornerMarkImage=_cornerMarkImage;
- (void).cxx_destruct;
- (void)setupWithModel:(id)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

