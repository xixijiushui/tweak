//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKSectionCell.h"

@class UIColor, UIImageView, UILabel;

@interface YKMemberSectionCell : YKSectionCell
{
    UIColor *_bgColor;
    UILabel *_messageLabel;
    UIImageView *_corner;
}

@property(retain, nonatomic) UIImageView *corner; // @synthesize corner=_corner;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

