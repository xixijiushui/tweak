//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UITextView;

@interface YKSCopeduceDetailViewVideoDescribeLabel : UIView
{
    float _maxWidth;
    float _maxHeight;
    UITextView *_textView;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) float maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (struct CGSize)setTextStr:(id)arg1;
- (void)loadSubviews;
- (id)init;

@end

