//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFSaintseiyaMessageBaseDTO.h"

@class NSString, YKFSaintseiyaMessageCommentInfoDTO, YKFSaintseiyaMessageUserInfoDTO, YKFSaintseiyaMessageVideoInfoDTO;

@interface YKFSaintseiyaMessageAtDTO : YKFSaintseiyaMessageBaseDTO
{
    _Bool _videoDeleted;
    NSString *_atType;
    NSString *_atinfo;
    YKFSaintseiyaMessageCommentInfoDTO *_commentInfo;
    YKFSaintseiyaMessageUserInfoDTO *_userInfo;
    YKFSaintseiyaMessageVideoInfoDTO *_videoInfo;
    NSString *_wording;
}

@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) YKFSaintseiyaMessageVideoInfoDTO *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) _Bool videoDeleted; // @synthesize videoDeleted=_videoDeleted;
@property(retain, nonatomic) YKFSaintseiyaMessageUserInfoDTO *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) YKFSaintseiyaMessageCommentInfoDTO *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) NSString *atinfo; // @synthesize atinfo=_atinfo;
@property(retain, nonatomic) NSString *atType; // @synthesize atType=_atType;
- (void).cxx_destruct;

@end

