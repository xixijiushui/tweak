//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, UIViewController, YKVIPHomePopInfoItem;

@interface YKVIPHomeTopTipsView : UIView
{
    YKVIPHomePopInfoItem *_itemModel;
    UIViewController *_vc;
    UIImageView *_bgImageView;
    UIButton *_closeBtn;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) YKVIPHomePopInfoItem *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;
- (id)controlName;
- (id)spm;
- (void)expose;
- (void)closeView;
- (void)show:(id)arg1 andFrame:(struct CGRect)arg2;
- (void)tapTips;
- (id)initWithFrame:(struct CGRect)arg1;

@end
