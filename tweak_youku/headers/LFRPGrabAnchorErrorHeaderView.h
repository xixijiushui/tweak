//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface LFRPGrabAnchorErrorHeaderView : UIView
{
    _Bool _displayGrabButton;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIButton *_grabButton;
}

@property(retain, nonatomic) UIButton *grabButton; // @synthesize grabButton=_grabButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isDisplayGrabButton) _Bool displayGrabButton; // @synthesize displayGrabButton=_displayGrabButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

