//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, UIButton, UIImageView, UILabel, UIView;

@interface InterestPreselectionCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIButton *_confirmButton;
    NSMutableArray *_itemButtonArray;
    UIView *_preselectionView;
    NSMutableArray *_selectedButtonArray;
    UIImageView *_backgroundImageView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) NSMutableArray *selectedButtonArray; // @synthesize selectedButtonArray=_selectedButtonArray;
@property(retain, nonatomic) UIView *preselectionView; // @synthesize preselectionView=_preselectionView;
@property(retain, nonatomic) NSMutableArray *itemButtonArray; // @synthesize itemButtonArray=_itemButtonArray;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)p_itemButtonPressed:(id)arg1;
- (void)p_confirmButtonPressed:(id)arg1;
- (void)p_addEvents;
- (void)p_setupUI;
- (void)setupWithItemList:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

