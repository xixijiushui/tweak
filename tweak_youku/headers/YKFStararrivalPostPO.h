//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFStararrivalPostMixedContentPO>, NSArray<YKFStararrivalPostTagPO>, NSArray<YKFStararrivalPostTopicPO>, NSArray<YKFStararrivalUserPO>, NSString, YKFStararrivalFandomCellPO, YKFStararrivalFandomFansDetailPO, YKFStararrivalFandomFansPO, YKFStararrivalPostCountPO, YKFStararrivalPostCursorPO, YKFStararrivalPostJHWPO, YKFStararrivalPostVotePO, YKFStararrivalResponsePostViewerPO;

@interface YKFStararrivalPostPO : YKFAPIModel
{
    _Bool _isEssence;
    _Bool _isHot;
    _Bool _isStick;
    YKFStararrivalPostCountPO *_count;
    YKFStararrivalPostCursorPO *_cursor;
    NSString *_detailUrl;
    NSString *_deviceAgent;
    NSArray<YKFStararrivalPostTagPO> *_displayTags;
    NSString *_exposeGuid;
    YKFStararrivalFandomCellPO *_fandom;
    NSString *_feature;
    long long _gmtCreate;
    long long _hot;
    YKFStararrivalPostJHWPO *_jhw;
    long long _lastReplyTime;
    long long _materialId;
    NSArray<YKFStararrivalPostMixedContentPO> *_mixedContents;
    NSString *_operatingPicUrl;
    long long _postId;
    NSString *_pvid;
    NSString *_recommendReason;
    NSString *_scm;
    NSString *_sharedUrl;
    long long _sourceType;
    long long _status;
    NSArray<YKFStararrivalPostTagPO> *_tags;
    NSString *_title;
    NSArray<YKFStararrivalPostTopicPO> *_topics;
    long long _type;
    YKFStararrivalFandomFansPO *_user;
    YKFStararrivalFandomFansDetailPO *_userDetail;
    NSArray<YKFStararrivalUserPO> *_userVOs;
    YKFStararrivalResponsePostViewerPO *_viewer;
    YKFStararrivalPostVotePO *_vote;
}

@property(retain, nonatomic) YKFStararrivalPostVotePO *vote; // @synthesize vote=_vote;
@property(retain, nonatomic) YKFStararrivalResponsePostViewerPO *viewer; // @synthesize viewer=_viewer;
@property(retain, nonatomic) NSArray<YKFStararrivalUserPO> *userVOs; // @synthesize userVOs=_userVOs;
@property(retain, nonatomic) YKFStararrivalFandomFansDetailPO *userDetail; // @synthesize userDetail=_userDetail;
@property(retain, nonatomic) YKFStararrivalFandomFansPO *user; // @synthesize user=_user;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray<YKFStararrivalPostTopicPO> *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray<YKFStararrivalPostTagPO> *tags; // @synthesize tags=_tags;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *sharedUrl; // @synthesize sharedUrl=_sharedUrl;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSString *pvid; // @synthesize pvid=_pvid;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(retain, nonatomic) NSString *operatingPicUrl; // @synthesize operatingPicUrl=_operatingPicUrl;
@property(retain, nonatomic) NSArray<YKFStararrivalPostMixedContentPO> *mixedContents; // @synthesize mixedContents=_mixedContents;
@property(nonatomic) long long materialId; // @synthesize materialId=_materialId;
@property(nonatomic) long long lastReplyTime; // @synthesize lastReplyTime=_lastReplyTime;
@property(retain, nonatomic) YKFStararrivalPostJHWPO *jhw; // @synthesize jhw=_jhw;
@property(nonatomic) _Bool isStick; // @synthesize isStick=_isStick;
@property(nonatomic) _Bool isHot; // @synthesize isHot=_isHot;
@property(nonatomic) _Bool isEssence; // @synthesize isEssence=_isEssence;
@property(nonatomic) long long hot; // @synthesize hot=_hot;
@property(nonatomic) long long gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) YKFStararrivalFandomCellPO *fandom; // @synthesize fandom=_fandom;
@property(retain, nonatomic) NSString *exposeGuid; // @synthesize exposeGuid=_exposeGuid;
@property(retain, nonatomic) NSArray<YKFStararrivalPostTagPO> *displayTags; // @synthesize displayTags=_displayTags;
@property(retain, nonatomic) NSString *deviceAgent; // @synthesize deviceAgent=_deviceAgent;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) YKFStararrivalPostCursorPO *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) YKFStararrivalPostCountPO *count; // @synthesize count=_count;
- (void).cxx_destruct;

@end

