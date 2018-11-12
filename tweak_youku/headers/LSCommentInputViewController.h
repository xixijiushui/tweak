//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class LSCommentHeaderInputView, LSCommentInputWindow;

@interface LSCommentInputViewController : UIViewController
{
    _Bool _landScape;
    _Bool _isAddNotification;
    LSCommentHeaderInputView *_inputView;
    LSCommentInputWindow *_ownerWindow;
}

+ (id)commentInputWithOwnerWindow:(id)arg1;
@property(nonatomic) _Bool isAddNotification; // @synthesize isAddNotification=_isAddNotification;
@property(nonatomic) _Bool landScape; // @synthesize landScape=_landScape;
@property(nonatomic) __weak LSCommentInputWindow *ownerWindow; // @synthesize ownerWindow=_ownerWindow;
@property(retain, nonatomic) LSCommentHeaderInputView *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;
- (void)showInputView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)changeOrientation:(long long)arg1 withFirst:(_Bool)arg2;
- (void)showInputViewOrientation;
- (void)deviceOrientationChanged:(id)arg1;
- (void)removeNotifcation;
- (void)addNotification;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)dealloc;

@end
