//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, ViewTypeBStarItemModel;

@interface SokuStarPersonView : UIView
{
    UIImageView *_headIcon;
    id <SokuStarPersonViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    ViewTypeBStarItemModel *_personModel;
}

@property(retain, nonatomic) ViewTypeBStarItemModel *personModel; // @synthesize personModel=_personModel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SokuStarPersonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *headIcon; // @synthesize headIcon=_headIcon;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

