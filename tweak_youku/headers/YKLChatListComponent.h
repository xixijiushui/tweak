//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

@class YKLChatContainerView, YKLChatManager;

@interface YKLChatListComponent : WXComponent
{
    _Bool __addedBoundsObserver;
    YKLChatContainerView *_containerView;
    YKLChatManager *_adapter;
    long long _chatLimit;
}

@property(nonatomic) long long chatLimit; // @synthesize chatLimit=_chatLimit;
@property(retain, nonatomic) YKLChatManager *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) YKLChatContainerView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeKVOOfContainerView;
- (void)_addKVOOfContainerView;
- (void)_comfigAdapterWithTag:(id)arg1;
- (void)config:(id)arg1;
- (id)loadView;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (void)insertWithContentMap:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (id)getAdapterWithTag:(id)arg1;
- (id)getAdapter;

@end

