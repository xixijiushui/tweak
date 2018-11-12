//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface StarPageHeadWithTitleView : UIView
{
    UIImageView *_headIcon;
    UILabel *_titleLabel;
    UIImageView *_circleIcon;
    UILabel *_subTitleLabel;
}

+ (float)getWidth;
+ (float)getHeightWithoutSubTitle;
+ (float)getHeight;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIImageView *circleIcon; // @synthesize circleIcon=_circleIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headIcon; // @synthesize headIcon=_headIcon;
- (void).cxx_destruct;
- (void)setHeadUrl:(id)arg1 title:(id)arg2 subtitle:(id)arg3 alias:(id)arg4 showCircleIcon:(_Bool)arg5;
- (id)init;

@end
