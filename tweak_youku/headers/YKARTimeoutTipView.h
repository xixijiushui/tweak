//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface YKARTimeoutTipView : UIView
{
    CDUnknownBlockType _tapHandler;
    UILabel *_tipLabel;
}

+ (struct CGSize)tipSizeWithFont:(id)arg1 tip:(id)arg2;
+ (id)timeoutTipViewWithTapHandler:(CDUnknownBlockType)arg1 timeoutTip:(id)arg2;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
- (void).cxx_destruct;
- (void)tapMe;
- (void)buildView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tip:(id)arg2;

@end
