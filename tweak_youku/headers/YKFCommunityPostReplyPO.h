//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityPostCommentPO>, NSArray<YKFCommunityPostMixedContentPO>, NSArray<YKFCommunityUserPO>, NSString, YKFCommunityFandomFansPO, YKFCommunityPermissionPO, YKFCommunityUserPO;

@interface YKFCommunityPostReplyPO : YKFAPIModel
{
    _Bool _isFollowFandom;
    _Bool _isLike;
    _Bool _isStramp;
    long long _adminRight;
    NSArray<YKFCommunityPostCommentPO> *_comments;
    NSArray<YKFCommunityPostMixedContentPO> *_contents;
    YKFCommunityUserPO *_currUser;
    NSString *_deviceAgent;
    long long _fandomId;
    long long _fandomType;
    long long _floor;
    long long _gmtCreate;
    long long _likeCount;
    YKFCommunityPermissionPO *_permissionVO;
    long long _postId;
    long long _replyCount;
    long long _replyId;
    long long _status;
    long long _strampCount;
    long long _targetType;
    YKFCommunityFandomFansPO *_user;
    NSArray<YKFCommunityUserPO> *_userVOs;
}

@property(retain, nonatomic) NSArray<YKFCommunityUserPO> *userVOs; // @synthesize userVOs=_userVOs;
@property(retain, nonatomic) YKFCommunityFandomFansPO *user; // @synthesize user=_user;
@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(nonatomic) long long strampCount; // @synthesize strampCount=_strampCount;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long replyId; // @synthesize replyId=_replyId;
@property(nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(retain, nonatomic) YKFCommunityPermissionPO *permissionVO; // @synthesize permissionVO=_permissionVO;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isStramp; // @synthesize isStramp=_isStramp;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(nonatomic) _Bool isFollowFandom; // @synthesize isFollowFandom=_isFollowFandom;
@property(nonatomic) long long gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(nonatomic) long long floor; // @synthesize floor=_floor;
@property(nonatomic) long long fandomType; // @synthesize fandomType=_fandomType;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(retain, nonatomic) NSString *deviceAgent; // @synthesize deviceAgent=_deviceAgent;
@property(retain, nonatomic) YKFCommunityUserPO *currUser; // @synthesize currUser=_currUser;
@property(retain, nonatomic) NSArray<YKFCommunityPostMixedContentPO> *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSArray<YKFCommunityPostCommentPO> *comments; // @synthesize comments=_comments;
@property(nonatomic) long long adminRight; // @synthesize adminRight=_adminRight;
- (void).cxx_destruct;

@end

