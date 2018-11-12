//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APBCImageItemsVM, NSArray, NSDictionary, NSString, YKFCommunityCardItemPO, YKFCommunityMemberRolePO, YKFPostTopicInfo;

@interface APBCPostCardModel : NSObject
{
    _Bool _fandomNameHidden;
    _Bool _optionMenuHidden;
    _Bool _levelIconHidden;
    _Bool _managerIdentifierHidden;
    _Bool _postDetailPageFromFandomHidden;
    _Bool _isStarVisited;
    _Bool _isJoin;
    _Bool _isPraised;
    _Bool _isExcellentPost;
    _Bool _participated;
    _Bool _isPlayFun;
    _Bool _enableFullcardPlayButton;
    YKFCommunityCardItemPO *_cardItemPO;
    long long _postCardType;
    long long _fandomType;
    NSArray *_tags;
    NSString *_dramaInfoTitle;
    NSString *_dramaInfoURL;
    NSString *_dramaInfoImage;
    NSString *_scm;
    NSString *_feature;
    NSDictionary *_commonAnalytics;
    long long _objectType;
    NSString *_avatarUrl;
    NSString *_posterName;
    long long _timeInterval;
    NSString *_fromFandomName;
    NSString *_fandomCoverPicUrl;
    long long _userId;
    NSString *_userHomePageUrl;
    long long _userIdentify;
    NSString *_userIdentifyPicUrl;
    long long _managerGroupID;
    NSString *_manageGroupImageUrl;
    long long _userLevel;
    NSString *_levelImageUrl;
    NSString *_medalImageUrl;
    NSString *_nameplate;
    long long _viewCount;
    long long _fandomMemberCount;
    long long _fandomContentCount;
    NSString *_recommendReason;
    long long _praiseCount;
    long long _commentCount;
    long long _praiseType;
    NSString *_shareUrl;
    NSString *_shareTitle;
    NSString *_shareDescription;
    NSString *_shareImgUrl;
    NSString *_platformDesc;
    APBCImageItemsVM *_imageItemsVM;
    long long _coverImageType;
    NSString *_coverImageUrl;
    long long _imageType;
    NSString *_title;
    YKFPostTopicInfo *_topicInfo;
    long long _bizId;
    long long _fandomId;
    NSString *_detailPageSchemeURL;
    NSString *_userMedalImageUrl;
    NSString *_userMedalLinkUrl;
    NSString *_highlight_keyword;
    long long _mixedType;
    NSString *_mixedResourceURL;
    long long _videoType;
    NSString *_mixedContentString;
    long long _mixedResourceDuration;
    long long _orientation;
    double _videoWidth;
    double _videoHeight;
    NSString *_voteContentString;
    long long _voteItemsCount;
    long long _voteSelectableItemsCount;
    long long _participantsCount;
    long long _gmtExpiration;
    long long _headerType;
    long long _brandType;
    long long _playId;
    NSString *_playFunPageUrl;
    YKFCommunityMemberRolePO *_memberRole;
}

+ (id)postCardModelsCreationWithSearchPostList:(id)arg1 keyword:(id)arg2;
+ (id)postCardModelsCreationWithPostList:(id)arg1;
+ (id)postCardCreationWithPostModel:(id)arg1;
+ (id)postCardCreationWithCardItemPO:(id)arg1 keyword:(id)arg2;
+ (void)parsePostTopicsWithCardModel:(id)arg1 topics:(id)arg2;
+ (void)setCardModelFandomType:(id)arg1 fromFandom:(id)arg2;
+ (long long)modelFandomTypeWithType:(long long)arg1;
+ (id)postCardCreationWithStarComingModel:(id)arg1;
+ (long long)isGifUrl:(id)arg1;
+ (id)postCardCreationWithStarTrendModel:(id)arg1;
@property(retain, nonatomic) YKFCommunityMemberRolePO *memberRole; // @synthesize memberRole=_memberRole;
@property(nonatomic) _Bool enableFullcardPlayButton; // @synthesize enableFullcardPlayButton=_enableFullcardPlayButton;
@property(copy, nonatomic) NSString *playFunPageUrl; // @synthesize playFunPageUrl=_playFunPageUrl;
@property(nonatomic) long long playId; // @synthesize playId=_playId;
@property(nonatomic) _Bool isPlayFun; // @synthesize isPlayFun=_isPlayFun;
@property(nonatomic) long long brandType; // @synthesize brandType=_brandType;
@property(nonatomic) long long headerType; // @synthesize headerType=_headerType;
@property(nonatomic) _Bool participated; // @synthesize participated=_participated;
@property(nonatomic) long long gmtExpiration; // @synthesize gmtExpiration=_gmtExpiration;
@property(nonatomic) long long participantsCount; // @synthesize participantsCount=_participantsCount;
@property(nonatomic) long long voteSelectableItemsCount; // @synthesize voteSelectableItemsCount=_voteSelectableItemsCount;
@property(nonatomic) long long voteItemsCount; // @synthesize voteItemsCount=_voteItemsCount;
@property(copy, nonatomic) NSString *voteContentString; // @synthesize voteContentString=_voteContentString;
@property(nonatomic) double videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) double videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long mixedResourceDuration; // @synthesize mixedResourceDuration=_mixedResourceDuration;
@property(copy, nonatomic) NSString *mixedContentString; // @synthesize mixedContentString=_mixedContentString;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(copy, nonatomic) NSString *mixedResourceURL; // @synthesize mixedResourceURL=_mixedResourceURL;
@property(nonatomic) long long mixedType; // @synthesize mixedType=_mixedType;
@property(copy, nonatomic) NSString *highlight_keyword; // @synthesize highlight_keyword=_highlight_keyword;
@property(copy, nonatomic) NSString *userMedalLinkUrl; // @synthesize userMedalLinkUrl=_userMedalLinkUrl;
@property(copy, nonatomic) NSString *userMedalImageUrl; // @synthesize userMedalImageUrl=_userMedalImageUrl;
@property(nonatomic) _Bool isExcellentPost; // @synthesize isExcellentPost=_isExcellentPost;
@property(copy, nonatomic) NSString *detailPageSchemeURL; // @synthesize detailPageSchemeURL=_detailPageSchemeURL;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(nonatomic) long long bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) YKFPostTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(copy, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(nonatomic) long long coverImageType; // @synthesize coverImageType=_coverImageType;
@property(retain, nonatomic) APBCImageItemsVM *imageItemsVM; // @synthesize imageItemsVM=_imageItemsVM;
@property(retain, nonatomic) NSString *platformDesc; // @synthesize platformDesc=_platformDesc;
@property(copy, nonatomic) NSString *shareImgUrl; // @synthesize shareImgUrl=_shareImgUrl;
@property(copy, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) long long praiseType; // @synthesize praiseType=_praiseType;
@property(nonatomic) _Bool isPraised; // @synthesize isPraised=_isPraised;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) long long praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) long long fandomContentCount; // @synthesize fandomContentCount=_fandomContentCount;
@property(nonatomic) long long fandomMemberCount; // @synthesize fandomMemberCount=_fandomMemberCount;
@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(copy, nonatomic) NSString *nameplate; // @synthesize nameplate=_nameplate;
@property(copy, nonatomic) NSString *medalImageUrl; // @synthesize medalImageUrl=_medalImageUrl;
@property(copy, nonatomic) NSString *levelImageUrl; // @synthesize levelImageUrl=_levelImageUrl;
@property(nonatomic) long long userLevel; // @synthesize userLevel=_userLevel;
@property(nonatomic) _Bool isJoin; // @synthesize isJoin=_isJoin;
@property(nonatomic) _Bool isStarVisited; // @synthesize isStarVisited=_isStarVisited;
@property(copy, nonatomic) NSString *manageGroupImageUrl; // @synthesize manageGroupImageUrl=_manageGroupImageUrl;
@property(nonatomic) long long managerGroupID; // @synthesize managerGroupID=_managerGroupID;
@property(copy, nonatomic) NSString *userIdentifyPicUrl; // @synthesize userIdentifyPicUrl=_userIdentifyPicUrl;
@property(nonatomic) long long userIdentify; // @synthesize userIdentify=_userIdentify;
@property(copy, nonatomic) NSString *userHomePageUrl; // @synthesize userHomePageUrl=_userHomePageUrl;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *fandomCoverPicUrl; // @synthesize fandomCoverPicUrl=_fandomCoverPicUrl;
@property(copy, nonatomic) NSString *fromFandomName; // @synthesize fromFandomName=_fromFandomName;
@property(nonatomic) long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property(copy, nonatomic) NSString *posterName; // @synthesize posterName=_posterName;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
@property(retain, nonatomic) NSDictionary *commonAnalytics; // @synthesize commonAnalytics=_commonAnalytics;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *dramaInfoImage; // @synthesize dramaInfoImage=_dramaInfoImage;
@property(copy, nonatomic) NSString *dramaInfoURL; // @synthesize dramaInfoURL=_dramaInfoURL;
@property(copy, nonatomic) NSString *dramaInfoTitle; // @synthesize dramaInfoTitle=_dramaInfoTitle;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) _Bool postDetailPageFromFandomHidden; // @synthesize postDetailPageFromFandomHidden=_postDetailPageFromFandomHidden;
@property(nonatomic) long long fandomType; // @synthesize fandomType=_fandomType;
@property(nonatomic) _Bool managerIdentifierHidden; // @synthesize managerIdentifierHidden=_managerIdentifierHidden;
@property(nonatomic) _Bool levelIconHidden; // @synthesize levelIconHidden=_levelIconHidden;
@property(nonatomic) _Bool optionMenuHidden; // @synthesize optionMenuHidden=_optionMenuHidden;
@property(nonatomic) _Bool fandomNameHidden; // @synthesize fandomNameHidden=_fandomNameHidden;
@property(nonatomic) long long postCardType; // @synthesize postCardType=_postCardType;
@property(retain, nonatomic) YKFCommunityCardItemPO *cardItemPO; // @synthesize cardItemPO=_cardItemPO;
- (void).cxx_destruct;
- (id)init;
- (_Bool)isSameToCardModel:(id)arg1;

@end

