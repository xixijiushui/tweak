//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKChannelViewController.h"

@class NSMutableDictionary;

@interface YKChannelSubpageViewController : YKChannelViewController
{
    NSMutableDictionary *_params;
}

@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)sendPageStatisticsFrom:(long long)arg1 to:(long long)arg2 byMenuView:(_Bool)arg3;
- (void)didLoadChannelListSuccessed:(id)arg1 selectIndex:(long long)arg2;
- (void)assemblePageItems:(long long)arg1;
- (void)updateWithParams:(id)arg1;

@end

