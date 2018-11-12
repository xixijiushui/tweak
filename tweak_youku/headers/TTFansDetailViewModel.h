//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

#import "YKFPLevelNameplate.h"

@class NSString, YKFCommunityMemberRolePO, YKFCommunityPostPO, YKFCommunityPostReplyPO, YKFStararrivalDanmukuContentPO, YKFStararrivalDanmukuDetailPO;

@interface TTFansDetailViewModel : ALMBaseViewModel <YKFPLevelNameplate>
{
    _Bool _isJoined;
    _Bool _isFollowed;
    _Bool _isOwner;
    long long _fansIdentity;
    NSString *_viewCountText;
    NSString *_levelExplainUrl;
    NSString *_medalImageUrl;
    NSString *_joinImageUrl;
    NSString *_levelImageUrl;
    NSString *_nameplate;
    long long _fandomType;
    NSString *_medalItemKey;
    struct YKFCommunityPostPO *_postModel;
    struct YKFCommunityPostReplyPO *_postReplyModel;
    YKFStararrivalDanmukuContentPO *_danmakuContentPO;
    YKFStararrivalDanmukuDetailPO *_danmakuDetailPO;
    NSString *_nickNameText;
    NSString *_headPicUrl;
    NSString *_timeText;
    NSString *_tileTextForUploadVideo;
    long long _userId;
    long long _level;
    NSString *_manageGroupImageUrl;
    YKFCommunityMemberRolePO *_memberRole;
    long long _fandomId;
}

@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(retain, nonatomic) YKFCommunityMemberRolePO *memberRole; // @synthesize memberRole=_memberRole;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(copy, nonatomic) NSString *manageGroupImageUrl; // @synthesize manageGroupImageUrl=_manageGroupImageUrl;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *tileTextForUploadVideo; // @synthesize tileTextForUploadVideo=_tileTextForUploadVideo;
@property(copy, nonatomic) NSString *timeText; // @synthesize timeText=_timeText;
@property(copy, nonatomic) NSString *headPicUrl; // @synthesize headPicUrl=_headPicUrl;
@property(copy, nonatomic) NSString *nickNameText; // @synthesize nickNameText=_nickNameText;
@property(retain, nonatomic) YKFStararrivalDanmukuDetailPO *danmakuDetailPO; // @synthesize danmakuDetailPO=_danmakuDetailPO;
@property(retain, nonatomic) YKFStararrivalDanmukuContentPO *danmakuContentPO; // @synthesize danmakuContentPO=_danmakuContentPO;
@property(retain, nonatomic) YKFCommunityPostReplyPO *postReplyModel; // @synthesize postReplyModel=_postReplyModel;
@property(retain, nonatomic) YKFCommunityPostPO *postModel; // @synthesize postModel=_postModel;
@property(copy, nonatomic) NSString *medalItemKey; // @synthesize medalItemKey=_medalItemKey;
@property(nonatomic) long long fandomType; // @synthesize fandomType=_fandomType;
@property(copy, nonatomic) NSString *nameplate; // @synthesize nameplate=_nameplate;
@property(copy, nonatomic) NSString *levelImageUrl; // @synthesize levelImageUrl=_levelImageUrl;
@property(copy, nonatomic) NSString *joinImageUrl; // @synthesize joinImageUrl=_joinImageUrl;
@property(copy, nonatomic) NSString *medalImageUrl; // @synthesize medalImageUrl=_medalImageUrl;
@property(copy, nonatomic) NSString *levelExplainUrl; // @synthesize levelExplainUrl=_levelExplainUrl;
@property(nonatomic) _Bool isJoined; // @synthesize isJoined=_isJoined;
@property(copy, nonatomic) NSString *viewCountText; // @synthesize viewCountText=_viewCountText;
@property(nonatomic) long long fansIdentity; // @synthesize fansIdentity=_fansIdentity;
- (void).cxx_destruct;
- (_Bool)isFandomGroupPost;
@property(nonatomic) long long praisedCount;
@property(nonatomic) _Bool isLike;
- (long long)curentUserId;
- (id)initWithDanmakuDetailModel:(id)arg1;
- (id)initWithDanmakuReplyModel:(id)arg1;
- (id)initWithPostReplyModel:(struct YKFCommunityPostReplyPO *)arg1;
- (id)initWithPostModel:(struct YKFCommunityPostPO *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
