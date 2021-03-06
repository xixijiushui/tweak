//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardBaseHeader.h"

@class UILabel, YKFeedMCModel;

@interface YKFeedCardMCHeader : YKFeedCardBaseHeader
{
    long long _watchCount;
    YKFeedMCModel *_modelMC;
    UILabel *_watchLabel;
}

@property(retain, nonatomic) UILabel *watchLabel; // @synthesize watchLabel=_watchLabel;
@property(nonatomic) __weak YKFeedMCModel *modelMC; // @synthesize modelMC=_modelMC;
@property(nonatomic) long long watchCount; // @synthesize watchCount=_watchCount;
- (void).cxx_destruct;
- (void)setTimeDesc:(id)arg1;
- (void)configHeaderViewWithAvatar:(id)arg1 userName:(id)arg2 timeDesc:(id)arg3 watchCount:(long long)arg4;
- (void)configWithModel:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)avatarClicked:(id)arg1;
- (void)overflowBtnClicked:(id)arg1;
- (void)collectNotification:(id)arg1;
- (void)relayoutTimeAndWatchCount;
- (void)relayout;
- (void)fillUI;
- (id)init;
- (void)dealloc;

@end

