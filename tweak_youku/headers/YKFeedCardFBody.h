//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardBody.h"

@class NSAttributedString, UILabel, UIView, YKFeedFModel, YKFeedStandardVideoCover;

@interface YKFeedCardFBody : YKFeedCardBody
{
    YKFeedFModel *_modelF;
    NSAttributedString *_transmitDesc;
    long long _watchCount;
    long long _duration;
    UIView *_transmitView;
    UILabel *_transmitLabel;
    YKFeedStandardVideoCover *_cover;
}

+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) YKFeedStandardVideoCover *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) UILabel *transmitLabel; // @synthesize transmitLabel=_transmitLabel;
@property(retain, nonatomic) UIView *transmitView; // @synthesize transmitView=_transmitView;
@property(readonly, nonatomic) long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long watchCount; // @synthesize watchCount=_watchCount;
@property(copy, nonatomic) NSAttributedString *transmitDesc; // @synthesize transmitDesc=_transmitDesc;
@property(nonatomic) __weak YKFeedFModel *modelF; // @synthesize modelF=_modelF;
- (void).cxx_destruct;
- (void)configPlayCardWithDescText:(id)arg1 coverUrl:(id)arg2 transmitDesc:(id)arg3 watchCount:(long long)arg4 duration:(long long)arg5;
- (void)configWithModel:(id)arg1;
- (void)pgcTap:(id)arg1;
- (void)relayout;
- (void)fillUI;

@end

