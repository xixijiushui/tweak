//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFStararrivalFandomFansPO;

@interface YKFStararrivalDanmukuDetailPO : YKFAPIModel
{
    _Bool _praised;
    long long _adminRight;
    NSString *_content;
    long long _danmuId;
    long long _gmtOperate;
    NSString *_imageUrl;
    long long _praiseCount;
    long long _replyCount;
    YKFStararrivalFandomFansPO *_starUser;
    NSString *_videoId;
    long long _videoPlayTime;
    NSString *_videoTitle;
}

@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(nonatomic) long long videoPlayTime; // @synthesize videoPlayTime=_videoPlayTime;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) YKFStararrivalFandomFansPO *starUser; // @synthesize starUser=_starUser;
@property(nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
@property(nonatomic) _Bool praised; // @synthesize praised=_praised;
@property(nonatomic) long long praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long gmtOperate; // @synthesize gmtOperate=_gmtOperate;
@property(nonatomic) long long danmuId; // @synthesize danmuId=_danmuId;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long adminRight; // @synthesize adminRight=_adminRight;
- (void).cxx_destruct;

@end
