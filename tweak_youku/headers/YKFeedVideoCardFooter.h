//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardNewFooter.h"

@class UILabel;

@interface YKFeedVideoCardFooter : YKFeedCardNewFooter
{
    UILabel *_followTip;
}

@property(retain, nonatomic) UILabel *followTip; // @synthesize followTip=_followTip;
- (void).cxx_destruct;
- (void)configWithModel:(id)arg1;
- (void)tagBtnClicked:(id)arg1;
- (void)configFooterViewWithWatchCount:(long long)arg1 likeCount:(long long)arg2 commentCount:(long long)arg3 liked:(_Bool)arg4;
- (void)configFooterViewWithTagModels:(id)arg1 likeCount:(long long)arg2 commentCount:(long long)arg3 liked:(_Bool)arg4;
- (void)configFooterViewWithFollowTagModels:(id)arg1 likeCount:(long long)arg2 commentCount:(long long)arg3 liked:(_Bool)arg4;
- (void)updateFollowTagWithTagModel:(id)arg1;
- (void)relayout;
- (void)fillUI;

@end

