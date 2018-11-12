//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel, UIView, YKFStarTriangleView;

@interface YKFStarTabItemView : UIButton
{
    _Bool _isDark;
    UILabel *_textLabel;
    UILabel *_timeLabel;
    UIImageView *_timeBgView;
    UIView *_leftLine;
    UIView *_rightLine;
    YKFStarTriangleView *_triangleView;
}

@property(retain, nonatomic) YKFStarTriangleView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UIImageView *timeBgView; // @synthesize timeBgView=_timeBgView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool isDark; // @synthesize isDark=_isDark;
- (void).cxx_destruct;
- (void)itemViewIsSelected:(_Bool)arg1;
- (void)itemSelectedWithScrolPercent:(float)arg1;
- (void)setUpItemViewTitle:(id)arg1 time:(id)arg2 index:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 isDark:(_Bool)arg2;

@end
