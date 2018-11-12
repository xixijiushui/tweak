//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIImageView, UILabel, YKFStarArrivalStatusViewModel;

@interface YKFStarArrivalStatusView : UIView
{
    UIColor *_themeColor;
    UIImageView *_coverImageView;
    UIImageView *_headImageView;
    UILabel *_statusLabel;
    UILabel *_hotLabel;
    UIView *_indicator;
    YKFStarArrivalStatusViewModel *_viewModel;
}

@property(retain, nonatomic) YKFStarArrivalStatusViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UILabel *hotLabel; // @synthesize hotLabel=_hotLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
- (void).cxx_destruct;
- (void)gotoFandom;
- (void)updateConstraints;
- (void)bindViewModel:(id)arg1;
- (void)bindDanmuViewModel:(id)arg1;
- (id)init;

@end

