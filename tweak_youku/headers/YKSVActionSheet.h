//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString;

@interface YKSVActionSheet : UIView
{
    NSString *_cancelButtonTitle;
    NSString *_destructiveButtonTitle;
    NSArray *_otherButtonTitles;
    UIView *_buttonBackgroundView;
    UIView *_darkShadowView;
    NSString *_title;
    id <YKSVActionSheetDelegate> _delegate;
    CDUnknownBlockType _actionSheetBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionSheetBlock; // @synthesize actionSheetBlock=_actionSheetBlock;
@property(nonatomic) __weak id <YKSVActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_hide;
- (void)show;
- (void)_dismissView:(id)arg1;
- (void)_didClickButton:(id)arg1;
- (void)_initSubViews;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 actionSheetBlock:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

