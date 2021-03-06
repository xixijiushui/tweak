//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel;

@interface YKFeedLefeImageRightLabelView : UIButton
{
    _Bool _highLighted;
    _Bool _enable;
    UIImageView *_imgView;
    UILabel *_label;
    CDUnknownBlockType _clickAction;
}

+ (id)feedLeftImageRightLabelWithImage:(id)arg1 highlightedImage:(id)arg2 title:(id)arg3 action:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) _Bool highLighted; // @synthesize highLighted=_highLighted;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)setImage:(id)arg1 hightlightedImage:(id)arg2 title:(id)arg3;
- (void)setImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 img:(id)arg2 highlightedImage:(id)arg3 title:(id)arg4 action:(CDUnknownBlockType)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

