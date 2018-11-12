//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UISegmentedControl, UIView;

@interface YKDebugSegmentedTableViewCell : UITableViewCell
{
    UISegmentedControl *_debugSegmentedControl;
    CDUnknownBlockType _TapActionBlock;
    UILabel *_titleLabel;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType TapActionBlock; // @synthesize TapActionBlock=_TapActionBlock;
@property(retain, nonatomic) UISegmentedControl *debugSegmentedControl; // @synthesize debugSegmentedControl=_debugSegmentedControl;
- (void).cxx_destruct;
- (void)debugSegmentedControlChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

