//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class UIButton, UIImageView, UILabel;

@interface HYMergeAccountSectionHeaderView : UITableViewHeaderFooterView
{
    UIImageView *_accountTypeImage;
    UILabel *_accountInfoLabel;
    UIImageView *_dropDownImageView;
    UIButton *_touchView;
    long long _section;
    id <HYMergeAccountSectionHeaderViewDelegate> _delegate;
}

+ (double)viewHeight;
@property(nonatomic) __weak id <HYMergeAccountSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak UIButton *touchView; // @synthesize touchView=_touchView;
@property(nonatomic) __weak UIImageView *dropDownImageView; // @synthesize dropDownImageView=_dropDownImageView;
@property(nonatomic) __weak UILabel *accountInfoLabel; // @synthesize accountInfoLabel=_accountInfoLabel;
@property(nonatomic) __weak UIImageView *accountTypeImage; // @synthesize accountTypeImage=_accountTypeImage;
- (void).cxx_destruct;
- (void)userClickHeader:(id)arg1;
- (void)updateWithSectionViewModel:(id)arg1 atSection:(long long)arg2;

@end
