//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UISwitch, UIView;

@interface YKDebugSwitchTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIView *_lineView;
    UISwitch *_debugSwitch;
}

@property(retain, nonatomic) UISwitch *debugSwitch; // @synthesize debugSwitch=_debugSwitch;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)debugSwitchChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

