//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CAGradientLayer, HYAsyncImageView, UILabel, UIView;

@interface HYPartnerRelationCell : UITableViewCell
{
    UIView *_relationContentView;
    UILabel *_nickNameLabel;
    UILabel *_relationLabel;
    UILabel *_mobileLabel;
    HYAsyncImageView *_avatarImageView;
    CAGradientLayer *_gradientLayer;
    long long _sectionType;
}

+ (double)cellHeight;
@property(nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) __weak HYAsyncImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(nonatomic) __weak UILabel *relationLabel; // @synthesize relationLabel=_relationLabel;
@property(nonatomic) __weak UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(nonatomic) __weak UIView *relationContentView; // @synthesize relationContentView=_relationContentView;
- (void).cxx_destruct;
- (void)pinkGradient;
- (void)blueGradient;
- (void)updateStyleWithIndex:(id)arg1;
- (void)renderWithCellViewModel:(id)arg1 withIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

