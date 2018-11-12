//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKSTFeedsFetchNextFeedScenario.h"

@class CMSJsonClient, ComponentCardsController, NSDictionary, YKSTFeedsRecJsonRequest;

@interface YKSTFeedsFetchNextFeedScenarioDefault : YKSTFeedsFetchNextFeedScenario
{
    ComponentCardsController *_controller;
    CMSJsonClient *_jsonClient;
    YKSTFeedsRecJsonRequest *_jsonRequest;
    NSDictionary *_param;
}

@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(retain, nonatomic) YKSTFeedsRecJsonRequest *jsonRequest; // @synthesize jsonRequest=_jsonRequest;
@property(retain, nonatomic) CMSJsonClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(nonatomic) __weak ComponentCardsController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)sendCustomStatistics:(id)arg1 type:(id)arg2;
- (_Bool)performWithFeed:(id)arg1;
- (id)initWithCardsController:(id)arg1 param:(id)arg2;

@end

