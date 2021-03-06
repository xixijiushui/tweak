//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, YKModularItem;

@interface YKModularContainer : UIView
{
    NSArray *_items;
    CDUnknownBlockType _clickBlock;
    YKModularItem *_leftItem;
    YKModularItem *_rightItem;
}

@property(retain, nonatomic) YKModularItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) YKModularItem *leftItem; // @synthesize leftItem=_leftItem;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)rightTap;
- (void)leftTap;
- (id)initWithFrame:(struct CGRect)arg1;

@end

