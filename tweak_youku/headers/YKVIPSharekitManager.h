//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKRecommendMoreViewDelegate.h"

@class NSString, YKJSONClient, YKRecommendMoreView, YKVIPShareModel;

@interface YKVIPSharekitManager : NSObject <YKRecommendMoreViewDelegate>
{
    _Bool _isMoreActionLoading;
    YKRecommendMoreView *_shareKitView;
    YKVIPShareModel *_shareModel;
    YKJSONClient *_jsonClient;
}

+ (void)startShareKit:(id)arg1;
+ (id)defaultManager;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(nonatomic) _Bool isMoreActionLoading; // @synthesize isMoreActionLoading=_isMoreActionLoading;
@property(retain, nonatomic) YKVIPShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(retain, nonatomic) YKRecommendMoreView *shareKitView; // @synthesize shareKitView=_shareKitView;
- (void).cxx_destruct;
- (void)uploadStatistical:(id)arg1;
- (void)unCollection:(id)arg1;
- (void)collection:(id)arg1;
- (void)showMsg:(id)arg1;
- (void)sendFeedbacks;
- (void)showFeedbackViewWithModel;
- (void)ykRecommendMoreView:(id)arg1 selectIndex:(long long)arg2;
- (void)hiddenRecommendMoreView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

