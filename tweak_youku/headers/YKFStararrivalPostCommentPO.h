//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFStararrivalFandomFansPO, YKFStararrivalPostContentPO;

@interface YKFStararrivalPostCommentPO : YKFAPIModel
{
    _Bool _isLike;
    long long _commentId;
    YKFStararrivalPostContentPO *_content;
    NSString *_deviceAgent;
    long long _gmtCreate;
    long long _likeCount;
    long long _postId;
    YKFStararrivalFandomFansPO *_refUser;
    long long _status;
    long long _targetId;
    long long _targetType;
    YKFStararrivalFandomFansPO *_user;
}

@property(retain, nonatomic) YKFStararrivalFandomFansPO *user; // @synthesize user=_user;
@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(nonatomic) long long targetId; // @synthesize targetId=_targetId;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) YKFStararrivalFandomFansPO *refUser; // @synthesize refUser=_refUser;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(nonatomic) long long gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *deviceAgent; // @synthesize deviceAgent=_deviceAgent;
@property(retain, nonatomic) YKFStararrivalPostContentPO *content; // @synthesize content=_content;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;

@end
