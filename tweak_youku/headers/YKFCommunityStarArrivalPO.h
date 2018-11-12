//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFCommunityBaseDrawerContentPO.h"

@class NSString, YKFCommunityStarArrivalDanmuPO, YKFCommunityStarArrivalReplyListPO;

@interface YKFCommunityStarArrivalPO : YKFCommunityBaseDrawerContentPO
{
    _Bool _subscribed;
    NSString *_backgroundImageUrl;
    NSString *_currTagLine;
    long long _fandomId;
    NSString *_fandomName;
    NSString *_fandomPic;
    long long _gmtEnd;
    long long _gmtNow;
    long long _gmtStart;
    YKFCommunityStarArrivalReplyListPO *_lastReplies;
    NSString *_playsOfStar;
    NSString *_playsRole;
    long long _starArrivalId;
    NSString *_starAvatarGifUrl;
    NSString *_starAvatarUrl;
    YKFCommunityStarArrivalDanmuPO *_starDanmus;
    NSString *_starName;
    long long _status;
    NSString *_subTitle;
    NSString *_subject;
    long long _subscribes;
    NSString *_targetUrl;
}

@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(nonatomic) long long subscribes; // @synthesize subscribes=_subscribes;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *starName; // @synthesize starName=_starName;
@property(retain, nonatomic) YKFCommunityStarArrivalDanmuPO *starDanmus; // @synthesize starDanmus=_starDanmus;
@property(retain, nonatomic) NSString *starAvatarUrl; // @synthesize starAvatarUrl=_starAvatarUrl;
@property(retain, nonatomic) NSString *starAvatarGifUrl; // @synthesize starAvatarGifUrl=_starAvatarGifUrl;
@property(nonatomic) long long starArrivalId; // @synthesize starArrivalId=_starArrivalId;
@property(retain, nonatomic) NSString *playsRole; // @synthesize playsRole=_playsRole;
@property(retain, nonatomic) NSString *playsOfStar; // @synthesize playsOfStar=_playsOfStar;
@property(retain, nonatomic) YKFCommunityStarArrivalReplyListPO *lastReplies; // @synthesize lastReplies=_lastReplies;
@property(nonatomic) long long gmtStart; // @synthesize gmtStart=_gmtStart;
@property(nonatomic) long long gmtNow; // @synthesize gmtNow=_gmtNow;
@property(nonatomic) long long gmtEnd; // @synthesize gmtEnd=_gmtEnd;
@property(retain, nonatomic) NSString *fandomPic; // @synthesize fandomPic=_fandomPic;
@property(retain, nonatomic) NSString *fandomName; // @synthesize fandomName=_fandomName;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(retain, nonatomic) NSString *currTagLine; // @synthesize currTagLine=_currTagLine;
@property(retain, nonatomic) NSString *backgroundImageUrl; // @synthesize backgroundImageUrl=_backgroundImageUrl;
- (void).cxx_destruct;

@end
