//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, UIToolbar, YKSTabMenu;

@interface YKSMuseTabbarView : UIView
{
    UIImageView *_topBackgroundView;
    UIView *_navigationView;
    UILabel *_navTitleLabel;
    UIButton *_backButton;
    UIImageView *_backgroundView;
    UIToolbar *_blurView;
    _Bool isFirstTabChange;
    UIImageView *_tazaikanImg;
    YKSTabMenu *_menuView;
    UIView *_topView;
    UIButton *_seachButton;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *seachButton; // @synthesize seachButton=_seachButton;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (struct CGSize)yk_sizeThatFits:(struct CGSize)arg1;
- (void)initCustomViews:(id)arg1;
- (id)initWithPageManager:(id)arg1;

@end

