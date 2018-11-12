//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface YKFMessageToastView : UIView
{
    UIImageView *_bgImageView;
    UILabel *_textLabel;
    id <YKFMessageToastVM> _viewModel;
}

+ (id)showToastWithVM:(id)arg1;
@property(retain, nonatomic) id <YKFMessageToastVM> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)dismissToast;
- (void)handleSwipping;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_toastDidClicked;
- (void)trackMessageWithKey:(id)arg1;

@end
