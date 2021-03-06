//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSCardHeaderCell.h"

@class NSMutableArray, UIButton, UIControl, UIImageView, UILabel;

@interface HomeCardHeaderCell : CMSCardHeaderCell
{
    UIButton *_iconButton;
    UIImageView *_iconView;
    UIButton *_titleButton;
    UIImageView *_titleArrowView;
    NSMutableArray *_itemButtonsArray;
    UIButton *_closeButton;
    UIControl *_unlikeBgControl;
    UIButton *_unlikeButton;
    UILabel *_subTitleLabel;
    _Bool _showRedPoint;
    UIImageView *_redImageView;
}

@property(nonatomic) _Bool showRedPoint; // @synthesize showRedPoint=_showRedPoint;
@property(retain, nonatomic) UIImageView *redImageView; // @synthesize redImageView=_redImageView;
- (void).cxx_destruct;
- (id)titleColor;
- (_Bool)isNewStyle;
- (_Bool)isFeedPage;
- (_Bool)isFeedTag:(id)arg1;
- (_Bool)isVipTab;
- (id)titleFont;
- (_Bool)isUseTitleIcon;
- (void)setupTitleView;
- (void)handleAction;
- (void)setupWithHeaderItem:(id)arg1;
- (void)itemAction:(id)arg1;
- (void)titleAction;
- (void)setupRightView;

@end

