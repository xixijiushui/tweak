//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardBody.h"

@class YKFeedLiveCover, YKFeedLiveModel;

@interface YKFeedCardLiveBody : YKFeedCardBody
{
    YKFeedLiveModel *_liveModel;
    YKFeedLiveCover *_cover;
}

+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) YKFeedLiveCover *cover; // @synthesize cover=_cover;
@property(nonatomic) __weak YKFeedLiveModel *liveModel; // @synthesize liveModel=_liveModel;
- (void).cxx_destruct;
- (void)configWithModel:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)relayout;
- (void)fillUI;

@end

