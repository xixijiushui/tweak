//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface LFCardAvatarView : UIView
{
    UIImageView *_iconImageView;
    UIImageView *_levelImageView;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
- (void)levelImageViewWithImage:(id)arg1;
- (void)avatarWithURL:(id)arg1;
- (void)layoutSubviews;
- (void)_settingIconImageViewLayout;
- (void)_settingLevelImageViewLayout;
- (void)_settingBackgroundViewLayout;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
