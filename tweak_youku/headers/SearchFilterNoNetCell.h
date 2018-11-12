//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface SearchFilterNoNetCell : SKTableViewCell
{
    id <SearchFilterNoNetCellDelegate> _delegate;
    UIView *_parentView;
    UIImageView *_icon;
    UILabel *_researchLabel;
    UIImageView *_button;
}

@property(retain, nonatomic) UIImageView *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *researchLabel; // @synthesize researchLabel=_researchLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <SearchFilterNoNetCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initData;
- (void)research;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

