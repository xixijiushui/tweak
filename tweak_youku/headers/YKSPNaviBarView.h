//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface YKSPNaviBarView : UIView
{
    CDUnknownBlockType _blockBackDidClick;
    UILabel *_titleLable;
    UIButton *_backBtn;
    UIView *_seperator;
    UIView *_container;
}

@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(copy, nonatomic) CDUnknownBlockType blockBackDidClick; // @synthesize blockBackDidClick=_blockBackDidClick;
- (void).cxx_destruct;
- (void)setBarHeight:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)back;
- (void)setupUI;
- (id)init;

@end

