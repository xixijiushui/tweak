//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView, YKFHorzScrollEntryView, YKFSquareUserFandomSectionViewModel;

@interface YKFSquareUserFandomSectionCell : UITableViewCell
{
    UIView *_followedFandomView;
    UIView *_fandomsConentView;
    YKFHorzScrollEntryView *_followedFandomFandomsView;
    YKFSquareUserFandomSectionViewModel *_viewModel;
}

@property(retain, nonatomic) YKFSquareUserFandomSectionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) YKFHorzScrollEntryView *followedFandomFandomsView; // @synthesize followedFandomFandomsView=_followedFandomFandomsView;
@property(nonatomic) __weak UIView *fandomsConentView; // @synthesize fandomsConentView=_fandomsConentView;
@property(nonatomic) __weak UIView *followedFandomView; // @synthesize followedFandomView=_followedFandomView;
- (void).cxx_destruct;
- (void)bindViewModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

