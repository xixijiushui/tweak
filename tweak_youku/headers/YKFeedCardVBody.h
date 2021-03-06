//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardBody.h"

@class YKFeedStandardVideoCover, YKFeedVModel;

@interface YKFeedCardVBody : YKFeedCardBody
{
    YKFeedVModel *_modelV;
    YKFeedStandardVideoCover *_cover;
}

+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) YKFeedStandardVideoCover *cover; // @synthesize cover=_cover;
@property(nonatomic) __weak YKFeedVModel *modelV; // @synthesize modelV=_modelV;
- (void).cxx_destruct;
- (void)configPlayCardWithDescText:(id)arg1 coverUrl:(id)arg2 watchCount:(long long)arg3 duration:(long long)arg4;
- (void)configWithModel:(id)arg1;
- (void)relayout;
- (void)fillUI;

@end

