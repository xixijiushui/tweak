//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardNewBody.h"

@class YKFeedLiveCover;

@interface STFeedLiveCardBody : YKFeedCardNewBody
{
    YKFeedLiveCover *_cover;
}

+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) YKFeedLiveCover *cover; // @synthesize cover=_cover;
- (void).cxx_destruct;
- (void)configWithModel:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)relayout;
- (void)fillUI;

@end

