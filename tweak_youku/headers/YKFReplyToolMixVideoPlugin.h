//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFReplyToolRoutePlugin.h"

#import "YKFReplyToolContentProviderUTProtocol.h"
#import "YKFReplyToolNonTextContentProvider.h"

@class RACCommand, RACSubject, YKFReplyContentVideoViewModel<YKFReplyToolNonTextContentViewModelProtocol>, YKFReplyVideoRecordStatisticVM;

@interface YKFReplyToolMixVideoPlugin : YKFReplyToolRoutePlugin <YKFReplyToolNonTextContentProvider, YKFReplyToolContentProviderUTProtocol>
{
    RACCommand *_routeCommand;
    YKFReplyContentVideoViewModel<YKFReplyToolNonTextContentViewModelProtocol> *_viewModel;
    RACCommand *_playVideoCommand;
    RACSubject *_resultSubject;
    YKFReplyVideoRecordStatisticVM *_recordStatisticVM;
}

@property(retain, nonatomic) YKFReplyVideoRecordStatisticVM *recordStatisticVM; // @synthesize recordStatisticVM=_recordStatisticVM;
@property(retain, nonatomic) RACSubject *resultSubject; // @synthesize resultSubject=_resultSubject;
@property(retain, nonatomic) RACCommand *playVideoCommand; // @synthesize playVideoCommand=_playVideoCommand;
@property(retain, nonatomic) YKFReplyContentVideoViewModel<YKFReplyToolNonTextContentViewModelProtocol> *viewModel; // @synthesize viewModel=_viewModel;
- (void)setRouteCommand:(id)arg1;
- (void).cxx_destruct;
- (id)routeCommand;
- (void)panelItemDidClick;
- (void)updateWithSnapshot:(id)arg1;
- (id)snapshot;
- (void)replaceNonTextContentWithData:(id)arg1;
- (id)resetSignal;
- (id)clearNonTextContentSignal;
- (id)cancelUploadNonTextContentSignal;
- (id)uploadNonTextContentSignal;
- (id)resultSignal;
- (_Bool)allowToRestoreEnableState;
- (Class)cellClass;
- (void)insertOnlineVideoWithUrl:(id)arg1 coverImageUrl:(id)arg2 duration:(double)arg3;
- (id)init;
- (id)notificationKey;

@end
