//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFAppjietuJietuActivityInfoPO : YKFAPIModel
{
    NSString *_activityRecommendDesc;
    NSString *_activityRecommendImg;
    NSString *_activityRecommendName;
    NSString *_barActivityId;
    NSString *_barActivityName;
    NSString *_barId;
    NSString *_barName;
    long long _endTime;
    NSString *_fandomIds;
    NSString *_jietuPopupImg;
    NSString *_jietuPopupText;
    NSString *_playerPopupImg;
    NSString *_playerPopupText;
    long long _playerRedPoint;
    long long _startTime;
    long long _type;
    NSString *_videoSource;
}

@property(retain, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long playerRedPoint; // @synthesize playerRedPoint=_playerRedPoint;
@property(retain, nonatomic) NSString *playerPopupText; // @synthesize playerPopupText=_playerPopupText;
@property(retain, nonatomic) NSString *playerPopupImg; // @synthesize playerPopupImg=_playerPopupImg;
@property(retain, nonatomic) NSString *jietuPopupText; // @synthesize jietuPopupText=_jietuPopupText;
@property(retain, nonatomic) NSString *jietuPopupImg; // @synthesize jietuPopupImg=_jietuPopupImg;
@property(retain, nonatomic) NSString *fandomIds; // @synthesize fandomIds=_fandomIds;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *barName; // @synthesize barName=_barName;
@property(retain, nonatomic) NSString *barId; // @synthesize barId=_barId;
@property(retain, nonatomic) NSString *barActivityName; // @synthesize barActivityName=_barActivityName;
@property(retain, nonatomic) NSString *barActivityId; // @synthesize barActivityId=_barActivityId;
@property(retain, nonatomic) NSString *activityRecommendName; // @synthesize activityRecommendName=_activityRecommendName;
@property(retain, nonatomic) NSString *activityRecommendImg; // @synthesize activityRecommendImg=_activityRecommendImg;
@property(retain, nonatomic) NSString *activityRecommendDesc; // @synthesize activityRecommendDesc=_activityRecommendDesc;
- (void).cxx_destruct;

@end
