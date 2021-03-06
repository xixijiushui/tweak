//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSString, UIImageView, UILabel;

@interface SKTextRectView : UIView
{
    long long _tag_type;
    UILabel *_myLab;
    NSString *_myStr;
    CAShapeLayer *_rLayer;
    UIImageView *_rIMV;
}

@property(retain, nonatomic) UIImageView *rIMV; // @synthesize rIMV=_rIMV;
@property(retain, nonatomic) CAShapeLayer *rLayer; // @synthesize rLayer=_rLayer;
@property(retain, nonatomic) NSString *myStr; // @synthesize myStr=_myStr;
@property(retain, nonatomic) UILabel *myLab; // @synthesize myLab=_myLab;
@property(nonatomic) long long tag_type; // @synthesize tag_type=_tag_type;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setVip;
- (void)refreshWithcModel:(id)arg1;
- (void)setStr:(id)arg1 withFont:(id)arg2 withBColor:(id)arg3;
- (void)setStr:(id)arg1 withFont:(id)arg2 withColor:(id)arg3 withBorderColor:(id)arg4 andBorderWidth:(double)arg5;
- (void)setStr:(id)arg1 withFont:(id)arg2 withColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

