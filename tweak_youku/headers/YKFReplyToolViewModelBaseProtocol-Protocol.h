//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFReplyToolViewModelProtocol.h"

@class RACSignal, YKFReplyContentBaseViewModel, YKFReplyToolPanelViewModel, YKFReplyToolPluginManager;

@protocol YKFReplyToolViewModelBaseProtocol <YKFReplyToolViewModelProtocol>
@property(retain, nonatomic) id <YKFReplyToolNonTextContentProvider> curentNonTextContentProvider;
@property(retain, nonatomic) YKFReplyToolPanelViewModel *panelViewModel;
@property(retain, nonatomic) YKFReplyToolPluginManager *pluginManager;
- (RACSignal *)replyDidAddSignal;
- (id <YKFReplyContentTextViewModelBaseProtocol>)replyContentTextViewModel;
- (YKFReplyContentBaseViewModel *)contentViewModel;
@end

