//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKPCardHeaderView.h"

@class NSString;

@interface YKPRecommendMaterailHeaderView : YKPCardHeaderView
{
    NSString *_activityId;
    long long _playId;
}

+ (float)height;
@property(nonatomic) long long playId; // @synthesize playId=_playId;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (void)showMore;
- (void)layoutSubviews;
- (void)initialize;

@end
