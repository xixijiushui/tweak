//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface YKSCommentNavBarView : UIView
{
    UIButton *_backBtn;
    CDUnknownBlockType _backBlock;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
- (void).cxx_destruct;
- (void)backAction;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

