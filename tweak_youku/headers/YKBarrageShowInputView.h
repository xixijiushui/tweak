//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface YKBarrageShowInputView : UIView
{
    id <YKBarrageShowInputViewDelegate> _delegate;
    UIButton *_callInputViewButton;
}

@property(retain, nonatomic) UIButton *callInputViewButton; // @synthesize callInputViewButton=_callInputViewButton;
@property(nonatomic) __weak id <YKBarrageShowInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (void)callInputView:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end
