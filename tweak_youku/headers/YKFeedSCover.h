//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedVideoCover.h"

@class YKFeedCardButton;

@interface YKFeedSCover : YKFeedVideoCover
{
    long long _videoCount;
    YKFeedCardButton *_contentBtn;
}

@property(retain, nonatomic) YKFeedCardButton *contentBtn; // @synthesize contentBtn=_contentBtn;
@property(nonatomic) long long videoCount; // @synthesize videoCount=_videoCount;
- (void).cxx_destruct;
- (void)configCoverViewWithCoverUrl:(id)arg1 videoCount:(long long)arg2;
- (void)relayout;
- (void)fillUI;
- (void)defaultConfig;

@end

