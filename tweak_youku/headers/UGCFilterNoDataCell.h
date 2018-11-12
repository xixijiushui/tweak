//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTableViewCell.h"

@class SKCardsController, UIImageView, UILabel, UIView;

@interface UGCFilterNoDataCell : SKTableViewCell
{
    SKCardsController *_cardsController;
    id <UGCFilterNoDataCellDelegate> _delegate;
    UIView *_parentView;
    UIImageView *_button;
    UIImageView *_icon;
    UILabel *_tipText;
}

@property(retain, nonatomic) UILabel *tipText; // @synthesize tipText=_tipText;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIImageView *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <UGCFilterNoDataCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SKCardsController *cardsController; // @synthesize cardsController=_cardsController;
- (void).cxx_destruct;
- (void)resetFilterConditions;
- (void)setBackgroundColor:(id)arg1;
- (void)initData;
- (void)reset;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

