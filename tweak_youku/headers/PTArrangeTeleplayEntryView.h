//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIButton, UIImageView, UILabel;

@interface PTArrangeTeleplayEntryView : UIView
{
    UIButton *_button;
    UILabel *_textLabel;
    UIImageView *_imageView;
    CALayer *_line;
    CDUnknownBlockType _callBack;
}

- (void).cxx_destruct;
- (void)handleButtonCancel:(id)arg1;
- (void)handleButtonDownAction:(id)arg1;
- (void)handleButtonAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
