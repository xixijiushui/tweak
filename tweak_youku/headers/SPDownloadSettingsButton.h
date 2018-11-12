//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface SPDownloadSettingsButton : UIView
{
    id <SPDownloadSettingsButtonDelegate> _delegate;
    UILabel *_titleLabel;
    unsigned long long _state;
    UIImageView *_arrowImageView;
    UIImageView *_triangleImageView;
}

+ (double)buttonWidthForTitle:(id)arg1;
@property(retain, nonatomic) UIImageView *triangleImageView; // @synthesize triangleImageView=_triangleImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SPDownloadSettingsButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (void)setupSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

