//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFStararrivalItemPO.h"

@class NSArray<YKFStararrivalModelIndexPO>, NSArray<YKFStararrivalMsicPO>, NSArray<YKFStararrivalRecommendActivitiesPO>, NSString, YKFStararrivalCommonPostViewerPO, YKFStararrivalDanmukuPO, YKFStararrivalDateDurationPO, YKFStararrivalGuideDescPO, YKFStararrivalLivingPO, YKFStararrivalManagerGroupInfoPO, YKFStararrivalManagerRoleInfoPO, YKFStararrivalRecommendPostPO, YKFStararrivalRecommendVideoPO, YKFStararrivalRoyalAssentPO, YKFStararrivalSharingOptionPO, YKFStararrivalSubjectPO, YKFStararrivalUserRankListPO, YKFStararrivalWelfarePO;

@interface YKFStararrivalDetailsPO : YKFStararrivalItemPO
{
    _Bool _followed;
    _Bool _online;
    _Bool _praised;
    _Bool _subscribed;
    long long _comments;
    long long _contentCount;
    YKFStararrivalDanmukuPO *_danmuku;
    YKFStararrivalDateDurationPO *_duration;
    long long _fansCount;
    long long _gmtNow;
    long long _gmtStartFirst;
    YKFStararrivalGuideDescPO *_guideDescVO;
    YKFStararrivalLivingPO *_living;
    YKFStararrivalManagerGroupInfoPO *_managerGroup;
    YKFStararrivalManagerRoleInfoPO *_managerRole;
    NSArray<YKFStararrivalModelIndexPO> *_modelIndex;
    NSArray<YKFStararrivalMsicPO> *_msicInfos;
    long long _myComments;
    long long _myFansIdentity;
    long long _pageView;
    long long _praises;
    YKFStararrivalUserRankListPO *_rankList;
    NSArray<YKFStararrivalRecommendActivitiesPO> *_recommendActivities;
    YKFStararrivalRecommendPostPO *_recommendPost;
    YKFStararrivalRecommendVideoPO *_recommendVideo;
    long long _reserves;
    YKFStararrivalRoyalAssentPO *_royalAssent;
    long long _royalAssentPullMillis;
    long long _royalcount;
    YKFStararrivalSharingOptionPO *_shareConfig;
    YKFStararrivalDateDurationPO *_showingDuration;
    NSString *_skinBkgColor;
    NSString *_skinImageUrl;
    long long _skinStyle;
    long long _starHotChatPraises;
    YKFStararrivalSubjectPO *_subject;
    YKFStararrivalCommonPostViewerPO *_viewer;
    YKFStararrivalWelfarePO *_welfare;
}

@property(retain, nonatomic) YKFStararrivalWelfarePO *welfare; // @synthesize welfare=_welfare;
@property(retain, nonatomic) YKFStararrivalCommonPostViewerPO *viewer; // @synthesize viewer=_viewer;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) YKFStararrivalSubjectPO *subject; // @synthesize subject=_subject;
@property(nonatomic) long long starHotChatPraises; // @synthesize starHotChatPraises=_starHotChatPraises;
@property(nonatomic) long long skinStyle; // @synthesize skinStyle=_skinStyle;
@property(retain, nonatomic) NSString *skinImageUrl; // @synthesize skinImageUrl=_skinImageUrl;
@property(retain, nonatomic) NSString *skinBkgColor; // @synthesize skinBkgColor=_skinBkgColor;
@property(retain, nonatomic) YKFStararrivalDateDurationPO *showingDuration; // @synthesize showingDuration=_showingDuration;
@property(retain, nonatomic) YKFStararrivalSharingOptionPO *shareConfig; // @synthesize shareConfig=_shareConfig;
@property(nonatomic) long long royalcount; // @synthesize royalcount=_royalcount;
@property(nonatomic) long long royalAssentPullMillis; // @synthesize royalAssentPullMillis=_royalAssentPullMillis;
@property(retain, nonatomic) YKFStararrivalRoyalAssentPO *royalAssent; // @synthesize royalAssent=_royalAssent;
@property(nonatomic) long long reserves; // @synthesize reserves=_reserves;
@property(retain, nonatomic) YKFStararrivalRecommendVideoPO *recommendVideo; // @synthesize recommendVideo=_recommendVideo;
@property(retain, nonatomic) YKFStararrivalRecommendPostPO *recommendPost; // @synthesize recommendPost=_recommendPost;
@property(retain, nonatomic) NSArray<YKFStararrivalRecommendActivitiesPO> *recommendActivities; // @synthesize recommendActivities=_recommendActivities;
@property(retain, nonatomic) YKFStararrivalUserRankListPO *rankList; // @synthesize rankList=_rankList;
@property(nonatomic) long long praises; // @synthesize praises=_praises;
@property(nonatomic) _Bool praised; // @synthesize praised=_praised;
@property(nonatomic) long long pageView; // @synthesize pageView=_pageView;
@property(nonatomic) _Bool online; // @synthesize online=_online;
@property(nonatomic) long long myFansIdentity; // @synthesize myFansIdentity=_myFansIdentity;
@property(nonatomic) long long myComments; // @synthesize myComments=_myComments;
@property(retain, nonatomic) NSArray<YKFStararrivalMsicPO> *msicInfos; // @synthesize msicInfos=_msicInfos;
@property(retain, nonatomic) NSArray<YKFStararrivalModelIndexPO> *modelIndex; // @synthesize modelIndex=_modelIndex;
@property(retain, nonatomic) YKFStararrivalManagerRoleInfoPO *managerRole; // @synthesize managerRole=_managerRole;
@property(retain, nonatomic) YKFStararrivalManagerGroupInfoPO *managerGroup; // @synthesize managerGroup=_managerGroup;
@property(retain, nonatomic) YKFStararrivalLivingPO *living; // @synthesize living=_living;
@property(retain, nonatomic) YKFStararrivalGuideDescPO *guideDescVO; // @synthesize guideDescVO=_guideDescVO;
@property(nonatomic) long long gmtStartFirst; // @synthesize gmtStartFirst=_gmtStartFirst;
@property(nonatomic) long long gmtNow; // @synthesize gmtNow=_gmtNow;
@property(nonatomic) _Bool followed; // @synthesize followed=_followed;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
@property(retain, nonatomic) YKFStararrivalDateDurationPO *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) YKFStararrivalDanmukuPO *danmuku; // @synthesize danmuku=_danmuku;
@property(nonatomic) long long contentCount; // @synthesize contentCount=_contentCount;
@property(nonatomic) long long comments; // @synthesize comments=_comments;
- (void).cxx_destruct;

@end

