//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YKFReplyToolViewControllerProtocol.h"

@class MASConstraint, RACCommand, UIViewController, YKFReplyToolPanelView;

@interface YKFReplyToolBaseViewController : UIView <YKFReplyToolViewControllerProtocol>
{
    _Bool _requireAnimationWhenBecomeFirstResponder;
    _Bool _proactiveTriggered;
    UIViewController *_parentViewController;
    id <YKFReplyToolViewModelBaseProtocol> _viewModel;
    MASConstraint *_heightConstraintOfReplyContainerView;
    double _heightConstraintValueOfReplyContainerView;
    double _lastHeightConstraintValueOfReplyContainerView;
    RACCommand *_cancelInteractivePluginsCommand;
    UIView *_replyContainerView;
    YKFReplyToolPanelView *_panelView;
    struct CGRect _keyboardFrameEnd;
}

@property(retain, nonatomic) YKFReplyToolPanelView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) UIView *replyContainerView; // @synthesize replyContainerView=_replyContainerView;
@property(retain, nonatomic) RACCommand *cancelInteractivePluginsCommand; // @synthesize cancelInteractivePluginsCommand=_cancelInteractivePluginsCommand;
@property(nonatomic) struct CGRect keyboardFrameEnd; // @synthesize keyboardFrameEnd=_keyboardFrameEnd;
@property(nonatomic) double lastHeightConstraintValueOfReplyContainerView; // @synthesize lastHeightConstraintValueOfReplyContainerView=_lastHeightConstraintValueOfReplyContainerView;
@property(nonatomic) double heightConstraintValueOfReplyContainerView; // @synthesize heightConstraintValueOfReplyContainerView=_heightConstraintValueOfReplyContainerView;
@property(retain, nonatomic) MASConstraint *heightConstraintOfReplyContainerView; // @synthesize heightConstraintOfReplyContainerView=_heightConstraintOfReplyContainerView;
@property(retain, nonatomic) id <YKFReplyToolViewModelBaseProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) _Bool proactiveTriggered; // @synthesize proactiveTriggered=_proactiveTriggered;
@property(nonatomic) _Bool requireAnimationWhenBecomeFirstResponder; // @synthesize requireAnimationWhenBecomeFirstResponder=_requireAnimationWhenBecomeFirstResponder;
- (void).cxx_destruct;
- (id)sortCellByPointX;
- (void)replyToolViewDidHideWithKeyboardNotification:(id)arg1;
- (void)replyToolViewDidChangeFrameWithKeyboardNotification:(id)arg1;
- (void)replyToolViewWillChangeFrameWithKeyboardNotification:(id)arg1;
- (void)replyToolViewDidShowWithKeyboardNotification:(id)arg1;
- (void)replyToolViewWillShowWithKeyboardNotification:(id)arg1;
- (double)heightOfReplyToolView;
- (_Bool)resignFirstResponderWhenTapBackground;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)becomeFirstResponderWithContentId:(long long)arg1;
- (id)inputTextView;
- (id)view;
- (id)closeInteractivePluginsSignal;
- (id)closeInteractivePluginsAndResetInputViewIfNeedSignal;
- (id)closeInteractivePluginsAndResetInputViewSignal;
- (id)resetInputViewSignal;
- (void)configTextContentAsisstant:(id)arg1;
- (void)configNonTextContentProvider:(id)arg1;
- (void)bindTextViewModel;
- (void)bindViewModel;
- (void)configPlugin:(id)arg1;
- (void)configRoutePlugin:(id)arg1;
- (void)configInputablePlugin:(id)arg1;
- (id)init;

@end
