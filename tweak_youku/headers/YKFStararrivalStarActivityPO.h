//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class YKFStararrivalFandomFansPO, YKFStararrivalPostCommentPO, YKFStararrivalPostReplyPO;

@interface YKFStararrivalStarActivityPO : YKFAPIModel
{
    YKFStararrivalPostCommentPO *_comment;
    long long _gmtAction;
    YKFStararrivalPostCommentPO *_refComment;
    YKFStararrivalPostReplyPO *_reply;
    long long _type;
    YKFStararrivalFandomFansPO *_user;
}

@property(retain, nonatomic) YKFStararrivalFandomFansPO *user; // @synthesize user=_user;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) YKFStararrivalPostReplyPO *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) YKFStararrivalPostCommentPO *refComment; // @synthesize refComment=_refComment;
@property(nonatomic) long long gmtAction; // @synthesize gmtAction=_gmtAction;
@property(retain, nonatomic) YKFStararrivalPostCommentPO *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;

@end
