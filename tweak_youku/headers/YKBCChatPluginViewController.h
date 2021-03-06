//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UUInputFunctionViewDelegate.h"
#import "UUMessageCellDelegate.h"

@class CAGradientLayer, NSMutableArray, NSString, NSTimer, UIButton, UITableView, UIView, YKBCChatModel, YKBCInputFunctionView, YKBCMainController, YKBCStarMsgBar;

@interface YKBCChatPluginViewController : UIViewController <UUInputFunctionViewDelegate, UUMessageCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    double _keyboardHeight;
    _Bool _btnToggleHidden;
    int _timer_cnt;
    YKBCChatModel *_chatModel;
    UITableView *_chatTableView;
    UIView *_maskView;
    YKBCInputFunctionView *_inputFuncView;
    UIButton *_btnToggle;
    YKBCMainController *_mainController;
    NSTimer *_timer;
    CAGradientLayer *_layer;
    YKBCStarMsgBar *_starMsgBar;
    NSMutableArray *_starAlreadyShowArray;
    struct CGRect _originFrame;
}

@property(retain, nonatomic) NSMutableArray *starAlreadyShowArray; // @synthesize starAlreadyShowArray=_starAlreadyShowArray;
@property(retain, nonatomic) YKBCStarMsgBar *starMsgBar; // @synthesize starMsgBar=_starMsgBar;
@property(retain, nonatomic) CAGradientLayer *layer; // @synthesize layer=_layer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) int timer_cnt; // @synthesize timer_cnt=_timer_cnt;
@property(nonatomic) __weak YKBCMainController *mainController; // @synthesize mainController=_mainController;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) _Bool btnToggleHidden; // @synthesize btnToggleHidden=_btnToggleHidden;
@property(retain, nonatomic) UIButton *btnToggle; // @synthesize btnToggle=_btnToggle;
@property(retain, nonatomic) YKBCInputFunctionView *inputFuncView; // @synthesize inputFuncView=_inputFuncView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UITableView *chatTableView; // @synthesize chatTableView=_chatTableView;
@property(retain, nonatomic) YKBCChatModel *chatModel; // @synthesize chatModel=_chatModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)triggleStarMessageBar;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealTheFunctionData:(id)arg1;
- (void)UUInputFunctionView:(id)arg1 sendVoice:(id)arg2 time:(long long)arg3;
- (void)UUInputFunctionView:(id)arg1 sendPicture:(id)arg2;
- (void)UUInputFunctionView:(id)arg1 sendMessage:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)lockScreen:(_Bool)arg1;
- (void)sendNotice:(id)arg1 time:(long long)arg2;
- (void)sendNoticeWithIcon:(id)arg1 name:(id)arg2 message:(id)arg3 time:(long long)arg4;
- (void)showToggleBtn:(id)arg1;
- (void)btnTogglePress:(id)arg1;
- (void)action:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)adjustCollectionViewLayout;
- (void)keyboardChange:(id)arg1;
- (void)tableViewScrollToBottom:(_Bool)arg1;
- (void)loadBaseViewsAndData;
- (void)addRefreshViews;
- (void)setViewController:(id)arg1;
- (void)assignEvent:(_Bool)arg1;
- (void)initBasicViews;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addObserver;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

