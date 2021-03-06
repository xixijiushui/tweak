//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseListViewModel.h"

#import "YKFReplyToolContentCachableProtocol.h"

@class NSDictionary, NSMutableDictionary, NSSet, YKFReplyTextBindingModel;

@interface YKFReplyToolTopicViewModel : ALMBaseListViewModel <YKFReplyToolContentCachableProtocol>
{
    _Bool _showHotTopic;
    id <YKFReplyToolTopicPluginServiceProvider> _dataService;
    NSDictionary *_hotTopicMapDict;
    NSSet *_textBindingViewModels;
    YKFReplyTextBindingModel *_topicBindingViewModel;
    NSMutableDictionary *_insertedWhitelist;
}

+ (id)topicBindingMatchTextWithName:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *insertedWhitelist; // @synthesize insertedWhitelist=_insertedWhitelist;
@property(retain, nonatomic) YKFReplyTextBindingModel *topicBindingViewModel; // @synthesize topicBindingViewModel=_topicBindingViewModel;
@property(retain, nonatomic) NSSet *textBindingViewModels; // @synthesize textBindingViewModels=_textBindingViewModels;
@property(retain, nonatomic) NSDictionary *hotTopicMapDict; // @synthesize hotTopicMapDict=_hotTopicMapDict;
@property(nonatomic) _Bool showHotTopic; // @synthesize showHotTopic=_showHotTopic;
@property(nonatomic) __weak id <YKFReplyToolTopicPluginServiceProvider> dataService; // @synthesize dataService=_dataService;
- (void).cxx_destruct;
- (id)insertTopicWithUid:(long long)arg1 name:(id)arg2;
- (void)handlePostTopicPOArray:(id)arg1;
- (void)updateWithSnapshot:(id)arg1;
- (id)snapshot;
- (id)_signalLoadGuideTopic;
- (id)loadData;
- (void)resetCompletely;
- (void)removeAllViewModels;
- (id)init;

@end

