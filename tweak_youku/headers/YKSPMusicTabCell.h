//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UISegmentedControl, UIView;

@interface YKSPMusicTabCell : UITableViewCell
{
    CDUnknownBlockType _tabChangeBlock;
    long long _currentTabIndex;
    UISegmentedControl *_segCtrl;
    UIView *_indicatorView;
}

@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UISegmentedControl *segCtrl; // @synthesize segCtrl=_segCtrl;
@property(nonatomic) long long currentTabIndex; // @synthesize currentTabIndex=_currentTabIndex;
@property(copy, nonatomic) CDUnknownBlockType tabChangeBlock; // @synthesize tabChangeBlock=_tabChangeBlock;
- (void).cxx_destruct;
- (void)selectedSegmentDidChange:(id)arg1;
- (void)animationSegmentDidChange:(id)arg1;
- (void)resetIndicatorCenter:(id)arg1;
- (void)setupSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

