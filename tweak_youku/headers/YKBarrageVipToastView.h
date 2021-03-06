//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, YKBarrageCosplayRole;

@interface YKBarrageVipToastView : UIView
{
    CDUnknownBlockType _buyVipAction;
    UIImageView *_headImageView;
    UILabel *_roleNameLabel;
    UILabel *_contentLabel;
    UIButton *_buyVipBtn;
    UIView *_line;
    UIImageView *_badgeImageView;
    YKBarrageCosplayRole *_role;
}

@property(retain, nonatomic) YKBarrageCosplayRole *role; // @synthesize role=_role;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(nonatomic) __weak UIView *line; // @synthesize line=_line;
@property(nonatomic) __weak UIButton *buyVipBtn; // @synthesize buyVipBtn=_buyVipBtn;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *roleNameLabel; // @synthesize roleNameLabel=_roleNameLabel;
@property(nonatomic) __weak UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(copy, nonatomic) CDUnknownBlockType buyVipAction; // @synthesize buyVipAction=_buyVipAction;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)bugVipAction:(id)arg1;
- (void)closeAction:(id)arg1;
- (void)updateWithRole:(id)arg1;
- (void)awakeFromNib;
- (id)initFromXib;

@end

