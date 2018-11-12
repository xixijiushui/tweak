//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFReplyToolInteractivePlugin.h"

#import "YKFReplyToolContentDataServiceProvider.h"
#import "YKFReplyToolContentProviderUTProtocol.h"
#import "YKFReplyToolNonTextContentProvider.h"

@class NSString, RACSubject, YKFReplyContentGifViewModel<YKFReplyToolNonTextContentViewModelProtocol>, YKFReplyGifRecordStatisticVM<YKFReplyRecordStatisticProviderProtocol>, YKFReplyGifSelectionViewController;

@interface YKFReplyToolGifPlugin : YKFReplyToolInteractivePlugin <YKFReplyToolNonTextContentProvider, YKFReplyToolContentDataServiceProvider, YKFReplyToolContentProviderUTProtocol>
{
    id <YKFReplyToolGifPluginServiceProvider> _dataService;
    NSString *_keyword;
    YKFReplyContentGifViewModel<YKFReplyToolNonTextContentViewModelProtocol> *_viewModel;
    YKFReplyGifRecordStatisticVM<YKFReplyRecordStatisticProviderProtocol> *_recordStatisticVM;
    RACSubject *_resultSubject;
    YKFReplyGifSelectionViewController *_replyGifSelectionViewController;
}

@property(retain, nonatomic) YKFReplyGifSelectionViewController *replyGifSelectionViewController; // @synthesize replyGifSelectionViewController=_replyGifSelectionViewController;
@property(retain, nonatomic) RACSubject *resultSubject; // @synthesize resultSubject=_resultSubject;
@property(readonly, nonatomic) YKFReplyGifRecordStatisticVM<YKFReplyRecordStatisticProviderProtocol> *recordStatisticVM; // @synthesize recordStatisticVM=_recordStatisticVM;
@property(retain, nonatomic) YKFReplyContentGifViewModel<YKFReplyToolNonTextContentViewModelProtocol> *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)panelItemDidClick;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (id)targetView;
- (double)heightOfTargetView;
- (id)inputView;
- (id)currentNonTextContentDataWithVersion:(long long)arg1;
- (id)normalizeDataWithReplacingData:(id)arg1;
- (void)updateWithSnapshot:(id)arg1;
- (id)snapshot;
- (void)replaceNonTextContentWithData:(id)arg1;
- (id)cancelUploadNonTextContentSignal;
- (id)resetSignal;
- (id)clearNonTextContentSignal;
- (id)uploadNonTextContentSignal;
- (id)resultSignal;
- (_Bool)allowToRestoreEnableState;
- (Class)cellClass;
@property(retain, nonatomic) id <YKFReplyToolGifPluginServiceProvider> dataService; // @synthesize dataService=_dataService;
- (id)init;

@end

