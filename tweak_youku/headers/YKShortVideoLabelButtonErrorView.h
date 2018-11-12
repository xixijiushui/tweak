//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface YKShortVideoLabelButtonErrorView : UIView
{
    id <YKShortVideoLabelButtonErrorViewDelegate> _delegate;
    UILabel *_tipLabel;
    UIButton *_refreshButton;
}

@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak id <YKShortVideoLabelButtonErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setLabelText:(id)arg1 buttonText:(id)arg2;
- (void)didRefreshButtonClicked;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

