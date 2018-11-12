//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (NetWorkError)
- (void)hiddenNetworkError;
- (void)showAttributedMessage:(id)arg1 image:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)showNetworkMessage:(id)arg1 errorImage:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)showNetworkErrorWithoutImage:(id)arg1 selector:(SEL)arg2;
- (void)showErrorMessage:(id)arg1 image:(id)arg2 buttonTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5;
- (void)showEmptyMessage:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)showEmptyError:(id)arg1 selector:(SEL)arg2;
- (void)showNetworkMessage:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)showNetworkError:(id)arg1 selector:(SEL)arg2;
- (void)hideErrorView;
- (void)showErrorMessage:(id)arg1 image:(id)arg2 params:(id)arg3 target:(id)arg4 selector:(SEL)arg5;
- (void)ykError_showAttributedErrorMessage:(id)arg1 image:(id)arg2 params:(id)arg3 target:(id)arg4 selector:(SEL)arg5;
@property(retain, nonatomic) UIView *errorView;
@end

