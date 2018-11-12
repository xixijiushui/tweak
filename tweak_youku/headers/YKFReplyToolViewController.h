//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFReplyToolBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YKFReplyTextViewSogoFixProtocol.h"
#import "YKFReplyToolViewControllerProtocol.h"

@class NSString, RACCommand, RACDisposable, UITableView, UIViewController, YKFReplyToolViewModel<YKFReplyToolViewModelBaseProtocol>;

@interface YKFReplyToolViewController : YKFReplyToolBaseViewController <YKFReplyTextViewSogoFixProtocol, UITableViewDataSource, UITableViewDelegate, YKFReplyToolViewControllerProtocol>
{
    UIViewController *_parentViewController;
    UITableView *_replyTableView;
    RACCommand *_keepTextOnlyCommand;
    RACCommand *_addReplyDisabledCommand;
    RACDisposable *_heightDisposable;
    Class _textCellClass;
}

@property(retain, nonatomic) Class textCellClass; // @synthesize textCellClass=_textCellClass;
@property(retain, nonatomic) RACDisposable *heightDisposable; // @synthesize heightDisposable=_heightDisposable;
@property(retain, nonatomic) RACCommand *addReplyDisabledCommand; // @synthesize addReplyDisabledCommand=_addReplyDisabledCommand;
@property(retain, nonatomic) RACCommand *keepTextOnlyCommand; // @synthesize keepTextOnlyCommand=_keepTextOnlyCommand;
@property(retain, nonatomic) UITableView *replyTableView; // @synthesize replyTableView=_replyTableView;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (void)replyToolViewDidHideWithKeyboardNotification:(id)arg1;
- (void)replyToolViewDidChangeFrameWithKeyboardNotification:(id)arg1;
- (void)replyToolViewWillChangeFrameWithKeyboardNotification:(id)arg1;
- (void)replyToolViewWillShowWithKeyboardNotification:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateCountLabelText;
- (void)bindTextViewModel;
- (void)bindViewModel;
- (void)configTextContentAsisstant:(id)arg1;
- (void)configNonTextContentProvider:(id)arg1;
- (void)configPlugin:(id)arg1;
- (void)textViewDidDeleteBackwardWhenUsingSogo;
- (void)textViewWillDeleteBackwardWhenUsingSogo;
- (void)keepTextOnly;
- (_Bool)resignFirstResponderWhenTapBackground;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder:(_Bool)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)becomeFirstResponderWithContentId:(long long)arg1;
- (_Bool)isFirstResponder;
@property(retain, nonatomic) YKFReplyToolViewModel<YKFReplyToolViewModelBaseProtocol> *viewModel;
- (id)textViewModel;
- (id)mainInputTextView;
- (id)subInputTextView;
- (id)inputTextView;
- (id)textCell;
- (void)_initialize;
- (id)view;
- (id)initWithTextCellClass:(Class)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool proactiveTriggered;
@property(nonatomic) _Bool requireAnimationWhenBecomeFirstResponder;
@property(readonly) Class superclass;

@end

