//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFCommunityBaseDrawerContentPO.h"

@class NSString, YKFCommunityMemberPO;

@interface YKFCommunityFunPlaysPO : YKFCommunityBaseDrawerContentPO
{
    long long _fandomId;
    YKFCommunityMemberPO *_member;
    long long _playId;
    NSString *_playsCoverUrl;
    long long _postId;
    long long _praiseNumber;
    NSString *_userAvatarUrl;
    long long _userId;
    NSString *_userNickName;
    NSString *_videoId;
    long long _workId;
}

@property(nonatomic) long long workId; // @synthesize workId=_workId;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSString *userNickName; // @synthesize userNickName=_userNickName;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *userAvatarUrl; // @synthesize userAvatarUrl=_userAvatarUrl;
@property(nonatomic) long long praiseNumber; // @synthesize praiseNumber=_praiseNumber;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(retain, nonatomic) NSString *playsCoverUrl; // @synthesize playsCoverUrl=_playsCoverUrl;
@property(nonatomic) long long playId; // @synthesize playId=_playId;
@property(retain, nonatomic) YKFCommunityMemberPO *member; // @synthesize member=_member;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
- (void).cxx_destruct;

@end

