//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class YKUPageScrollView;

@interface YKUPageView : UIView
{
    YKUPageScrollView *_scrollView;
    struct UIEdgeInsets _insets;
}

@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, nonatomic) YKUPageScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScrollView:(id)arg1;

@end
