//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardNewBody.h"

@class YKFeedSCover;

@interface STFeedPlayListCardBody : YKFeedCardNewBody
{
    long long _videoCount;
    YKFeedSCover *_cover;
}

+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) YKFeedSCover *cover; // @synthesize cover=_cover;
@property(nonatomic) long long videoCount; // @synthesize videoCount=_videoCount;
- (void).cxx_destruct;
- (void)configPlayCardWithDescText:(id)arg1 coverUrl:(id)arg2 videoCount:(long long)arg3;
- (void)configWithModel:(id)arg1;
- (void)relayout;
- (void)fillUI;
- (void)defaultConfig;

@end

