//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTNavigationView.h"

@class NSArray, NSMutableArray, PTSkin, UIButton, UIImageView, UIView;

@interface PTSubscibeNavigationView : PTNavigationView
{
    PTSkin *_skin;
    long long _leftTopButtonType;
    long long _currentSelectedIndex;
    double _rateConvertLineOffSet;
    NSArray *_items;
    NSMutableArray *_buttonView;
    UIView *_bottomLine;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIImageView *_backgroundView;
}

+ (id)navigationViewForSubscibe:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) NSMutableArray *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) double rateConvertLineOffSet; // @synthesize rateConvertLineOffSet=_rateConvertLineOffSet;
@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(nonatomic) long long leftTopButtonType; // @synthesize leftTopButtonType=_leftTopButtonType;
- (void).cxx_destruct;
- (void)changeIndicatorPosition:(long long)arg1;
- (float)getSeparationOfbtns;
- (void)updateBtnColor;
- (void)updateLineLayoutConstraint:(id)arg1;
- (void)btnAction:(id)arg1;
- (void)didSelectedAtIndex:(long long)arg1;
- (void)setLayout;
- (void)setupView;
- (void)setUpRightButton;
- (void)setUpLeftBtn;
- (void)handleChangeToMySubscibe:(id)arg1;
- (void)handleChoiceness:(id)arg1;
@property(retain, nonatomic) PTSkin *skin;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
