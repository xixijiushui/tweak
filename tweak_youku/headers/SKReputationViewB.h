//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface SKReputationViewB : UIView
{
    float _reputation;
    UILabel *_reputationIntegerPartLabel;
    UILabel *_reputationDecimalPartLabel;
}

+ (struct CGSize)getSizeByReputation:(float)arg1;
@property(retain, nonatomic) UILabel *reputationDecimalPartLabel; // @synthesize reputationDecimalPartLabel=_reputationDecimalPartLabel;
@property(retain, nonatomic) UILabel *reputationIntegerPartLabel; // @synthesize reputationIntegerPartLabel=_reputationIntegerPartLabel;
@property(nonatomic) float reputation; // @synthesize reputation=_reputation;
- (void).cxx_destruct;
- (struct CGSize)getSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

