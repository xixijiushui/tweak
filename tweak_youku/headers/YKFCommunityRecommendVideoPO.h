//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityRecommendVideoPO : YKFAPIModel
{
    NSString *_coverUrl;
    long long _duration;
    NSString *_key;
    NSString *_name;
    long long _playQuantity;
    NSString *_showId;
}

@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(nonatomic) long long playQuantity; // @synthesize playQuantity=_playQuantity;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
- (void).cxx_destruct;

@end
