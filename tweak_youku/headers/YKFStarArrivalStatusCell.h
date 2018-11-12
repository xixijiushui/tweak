//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIColor, UIView, YKFStarArrivalStatusView;

@interface YKFStarArrivalStatusCell : UITableViewCell
{
    UIColor *_themeColor;
    YKFStarArrivalStatusView *_statusView;
    UIView *_backView;
}

@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) YKFStarArrivalStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)bindViewModel:(id)arg1;
- (void)bindDanmuViewModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

