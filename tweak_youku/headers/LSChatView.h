//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CAGradientLayer, LSChatHitView, LSChatScrollManager, NSMutableArray, NSString, NSTimer, UITableView;

@interface LSChatView : UIView <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    _Bool _enabledReciveMessage;
    _Bool _actualAllowAutoScroll;
    _Bool _hitButtonHiddenToggle;
    _Bool _isScrolling;
    _Bool _replace;
    _Bool _isToUp;
    _Bool _isToBottom;
    UITableView *_tableView;
    CDUnknownBlockType _compereUserIDBlock;
    CDUnknownBlockType _currentUserIDBlock;
    CDUnknownBlockType _buttonTappedBlock;
    NSTimer *_updateTimer;
    CAGradientLayer *_maskLayer;
    NSMutableArray *_messages;
    unsigned long long _chatViewStyle;
    LSChatHitView *_hitButton;
    unsigned long long _unreadMessageCount;
    LSChatScrollManager *_scrollManager;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) _Bool isToBottom; // @synthesize isToBottom=_isToBottom;
@property(nonatomic) _Bool isToUp; // @synthesize isToUp=_isToUp;
@property(nonatomic) _Bool replace; // @synthesize replace=_replace;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool hitButtonHiddenToggle; // @synthesize hitButtonHiddenToggle=_hitButtonHiddenToggle;
@property(nonatomic) _Bool actualAllowAutoScroll; // @synthesize actualAllowAutoScroll=_actualAllowAutoScroll;
@property(retain, nonatomic) LSChatScrollManager *scrollManager; // @synthesize scrollManager=_scrollManager;
@property(nonatomic) unsigned long long unreadMessageCount; // @synthesize unreadMessageCount=_unreadMessageCount;
@property(retain, nonatomic) LSChatHitView *hitButton; // @synthesize hitButton=_hitButton;
@property(nonatomic) unsigned long long chatViewStyle; // @synthesize chatViewStyle=_chatViewStyle;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(copy, nonatomic) CDUnknownBlockType buttonTappedBlock; // @synthesize buttonTappedBlock=_buttonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType currentUserIDBlock; // @synthesize currentUserIDBlock=_currentUserIDBlock;
@property(copy, nonatomic) CDUnknownBlockType compereUserIDBlock; // @synthesize compereUserIDBlock=_compereUserIDBlock;
@property(nonatomic) _Bool enabledReciveMessage; // @synthesize enabledReciveMessage=_enabledReciveMessage;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (unsigned long long)currentMessageCount;
- (_Bool)isScrollBottom;
- (double)tableBottomOffset;
- (void)setHidden:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isScrollToNewest;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)commentCell:(id)arg1;
- (id)compereUserID;
- (id)currentUserID;
- (void)scrollToBottomWithInnerAnim:(_Bool)arg1;
- (void)clampMessageCount;
- (void)beginAddMessage:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)clearAllMessage;
- (void)compereReplace:(id)arg1;
- (void)beginReceiveMessage;
- (void)stopReceiveMessage;
- (void)dealloc;
- (void)layoutSubviews;
- (void)tap;
- (id)initWithFrame:(struct CGRect)arg1 contentInset:(struct UIEdgeInsets)arg2 style:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

