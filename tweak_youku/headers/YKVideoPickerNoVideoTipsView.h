//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface YKVideoPickerNoVideoTipsView : UIView
{
    UIButton *_takeVideoButton;
    UILabel *_tipLabel;
    UILabel *_subtipLabel;
    CDUnknownBlockType _takeVideo;
}

@property(copy, nonatomic) CDUnknownBlockType takeVideo; // @synthesize takeVideo=_takeVideo;
@property(retain, nonatomic) UILabel *subtipLabel; // @synthesize subtipLabel=_subtipLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *takeVideoButton; // @synthesize takeVideoButton=_takeVideoButton;
- (void).cxx_destruct;
- (void)takeVideoButtonClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

