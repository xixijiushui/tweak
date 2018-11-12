//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImage, UIImageView, UILabel, UIView, YKExtendButton;

@interface YKMySubscribeTableViewCell : UITableViewCell
{
    CDUnknownBlockType _moreButtonBlock;
    _Bool _showLine;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_headerImageView;
    UIView *_headerLine;
    YKExtendButton *_moreButton;
    UIView *_line;
    UIImageView *_defaultBgImageView;
    UIImage *_headerImagePlaceholder;
}

@property(retain, nonatomic) UIImage *headerImagePlaceholder; // @synthesize headerImagePlaceholder=_headerImagePlaceholder;
@property(retain, nonatomic) UIImageView *defaultBgImageView; // @synthesize defaultBgImageView=_defaultBgImageView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(nonatomic) _Bool showLine; // @synthesize showLine=_showLine;
@property(retain, nonatomic) YKExtendButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIView *headerLine; // @synthesize headerLine=_headerLine;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configModel:(id)arg1;
- (void)layoutSubviews;
- (void)clickMoreButtonAction:(id)arg1;
- (void)setMoreButtonBlock:(CDUnknownBlockType)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
