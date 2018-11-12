//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEngineYoukuPlayerItem.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, YTEngineYoukuPlayerVideoSectionInstanceItem;

@interface YTEngineYoukuPlayerInstanceItem : NSObject <YTEngineYoukuPlayerItem>
{
    _Bool mNeedEncrypt;
    _Bool mIsCacheUpsInfo;
    _Bool mIsP2pPlay;
    _Bool suggestSightEnhance;
    _Bool mIsExclusiveVideo;
    _Bool mIsCacheVideosComplete;
    _Bool _paid;
    _Bool _isTryWatch;
    _Bool _isRtmp;
    _Bool _isInteractiveVideo;
    _Bool _subscribeVideo;
    _Bool _supportSuperHD2Video;
    _Bool _remove_prevideoad_ifwrong;
    _Bool _shortfilm_remove_prevideoad;
    _Bool _remove_prevideoad_ifrepeated;
    int mShowLogo;
    NSString *mStatus;
    long long mCode;
    NSString *mErrorDesc;
    NSDictionary *mVideoSections;
    NSDictionary *mAllVideoSections;
    NSArray *mVideoPoints;
    NSArray *mLanguages;
    long long mVideoSequeue;
    long long mTotalSeconds;
    NSDictionary *mAllTotalSeconds;
    NSArray *mSubtitleUrls;
    NSString *mImageUrl;
    NSString *mTitle;
    NSString *mShowId;
    NSString *mVideoId;
    NSString *mWebUrl;
    id <YTEngineYoukuPlayerItem> mNextPlayItem;
    NSString *mNextVid;
    NSString *mNextTitle;
    long long mNextVideoSequeue;
    NSDictionary *mSidDatas;
    NSDictionary *mPayInfos;
    NSDictionary *mShowLogoInfos;
    NSDictionary *mAllShowLogoInfos;
    NSString *mCurrentPlayVideoId;
    NSDate *mVideoDate;
    NSString *mTryWatchDesc;
    long long mVideoType;
    NSArray *mVideoTypeArray;
    NSString *mViddecode;
    long long mPanorama;
    NSString *mRegisterId;
    NSString *mCertificateId;
    unsigned long long mP2PTryCount;
    long long mVideoStreamType;
    unsigned long long mTryWatchDetailType;
    NSString *mAutomaticQuality;
    long long mautomaticOptionQualityType;
    long long mAdShowIcon;
    NSString *mCid;
    NSMutableDictionary *mAirPlayUrls;
    NSMutableDictionary *mAllAirPlayUrls;
    NSString *mSite;
    NSString *mCs;
    NSString *mCt;
    NSString *mS;
    NSDictionary *mHeadSections;
    NSDictionary *mTailSections;
    NSDictionary *mAllHeadsSections;
    NSDictionary *mAllTailsSections;
    NSDictionary *mAllTotalHeadSeconds;
    NSDictionary *mAllTotalTailSeconds;
    NSDictionary *mapp_buy_info;
    NSArray *mShowKinds;
    NSDictionary *mAdDictionaries;
    NSDictionary *mUpsDictionaries;
    NSArray *mVideodbTypes;
    NSMutableDictionary *mSupportQuality;
    NSDictionary *mTrialDictionaries;
    NSDictionary *mPreviewDictionaries;
    NSDictionary *mUpsResponseDict;
    NSMutableDictionary *mAllAudioItemDic;
    long long _historyPlayPoint;
    NSDictionary *_drmData;
    unsigned long long _tryWatchType;
    long long _tryWatchSequeues;
    long long _tryWatchTime;
    NSString *_showVideoType;
    long long _interact;
    NSString *_dolby_type;
    NSString *_drm_type;
    NSDictionary *_hoverInfoDic;
    NSString *_showiddecode;
    NSString *_channelid;
    NSString *_schannelid;
    NSString *_playlistid;
    NSString *_playlistchannelid;
    NSString *_splaylistchannelid;
    NSString *_showchannelid;
    NSString *_sshowchannelid;
    NSString *_paystate;
    NSString *_copyright;
    NSString *_trailers;
    NSString *_videoOwner;
    long long _panoramaType;
    NSDictionary *_vipPayInfo;
    NSDictionary *_zpdPayInfo;
    NSDictionary *_pay;
    NSDictionary *_vipInfo;
    NSString *_ownName;
    NSString *_ownUid;
    NSString *_ownPhoto;
    long long _ownFansCount;
    double _preVideoAdReturnTime;
    NSString *_errorDescLink;
    NSString *_nocopyrightLink;
    NSMutableDictionary *_videoSizeSectionDic;
    NSMutableDictionary *_videoRTMPESectionDic;
    NSMutableDictionary *_videoSectionPanoramatypeDic;
    NSMutableDictionary *_allVideoSectionPanoramatypeDic;
    NSMutableDictionary *_allVideoSizeSectionDic;
    NSMutableDictionary *_allVideoRTMPESectionDic;
    YTEngineYoukuPlayerVideoSectionInstanceItem *_audioItem;
    long long _totalHeadSeconds;
    long long _totalTailSeconds;
    long long _cachedVideoSeconds;
    NSString *_preloadInfo;
}

@property(copy, nonatomic) NSString *preloadInfo; // @synthesize preloadInfo=_preloadInfo;
@property(nonatomic) long long cachedVideoSeconds; // @synthesize cachedVideoSeconds=_cachedVideoSeconds;
@property(nonatomic) long long totalTailSeconds; // @synthesize totalTailSeconds=_totalTailSeconds;
@property(nonatomic) long long totalHeadSeconds; // @synthesize totalHeadSeconds=_totalHeadSeconds;
@property(nonatomic) _Bool remove_prevideoad_ifrepeated; // @synthesize remove_prevideoad_ifrepeated=_remove_prevideoad_ifrepeated;
@property(nonatomic) _Bool shortfilm_remove_prevideoad; // @synthesize shortfilm_remove_prevideoad=_shortfilm_remove_prevideoad;
@property(nonatomic) _Bool remove_prevideoad_ifwrong; // @synthesize remove_prevideoad_ifwrong=_remove_prevideoad_ifwrong;
@property(retain, nonatomic) YTEngineYoukuPlayerVideoSectionInstanceItem *audioItem; // @synthesize audioItem=_audioItem;
@property(retain, nonatomic) NSMutableDictionary *allVideoRTMPESectionDic; // @synthesize allVideoRTMPESectionDic=_allVideoRTMPESectionDic;
@property(retain, nonatomic) NSMutableDictionary *allVideoSizeSectionDic; // @synthesize allVideoSizeSectionDic=_allVideoSizeSectionDic;
@property(retain, nonatomic) NSMutableDictionary *allVideoSectionPanoramatypeDic; // @synthesize allVideoSectionPanoramatypeDic=_allVideoSectionPanoramatypeDic;
@property(retain, nonatomic) NSMutableDictionary *videoSectionPanoramatypeDic; // @synthesize videoSectionPanoramatypeDic=_videoSectionPanoramatypeDic;
@property(retain, nonatomic) NSMutableDictionary *videoRTMPESectionDic; // @synthesize videoRTMPESectionDic=_videoRTMPESectionDic;
@property(retain, nonatomic) NSMutableDictionary *videoSizeSectionDic; // @synthesize videoSizeSectionDic=_videoSizeSectionDic;
@property(nonatomic) _Bool supportSuperHD2Video; // @synthesize supportSuperHD2Video=_supportSuperHD2Video;
@property(retain, nonatomic) NSString *nocopyrightLink; // @synthesize nocopyrightLink=_nocopyrightLink;
@property(retain, nonatomic) NSString *errorDescLink; // @synthesize errorDescLink=_errorDescLink;
@property(nonatomic) double preVideoAdReturnTime; // @synthesize preVideoAdReturnTime=_preVideoAdReturnTime;
@property(nonatomic) _Bool subscribeVideo; // @synthesize subscribeVideo=_subscribeVideo;
@property(nonatomic) long long ownFansCount; // @synthesize ownFansCount=_ownFansCount;
@property(retain, nonatomic) NSString *ownPhoto; // @synthesize ownPhoto=_ownPhoto;
@property(retain, nonatomic) NSString *ownUid; // @synthesize ownUid=_ownUid;
@property(retain, nonatomic) NSString *ownName; // @synthesize ownName=_ownName;
@property(retain, nonatomic) NSDictionary *vipInfo; // @synthesize vipInfo=_vipInfo;
@property(retain, nonatomic) NSDictionary *pay; // @synthesize pay=_pay;
@property(retain, nonatomic) NSDictionary *zpdPayInfo; // @synthesize zpdPayInfo=_zpdPayInfo;
@property(retain, nonatomic) NSDictionary *vipPayInfo; // @synthesize vipPayInfo=_vipPayInfo;
@property(nonatomic) long long panoramaType; // @synthesize panoramaType=_panoramaType;
@property(retain, nonatomic) NSString *videoOwner; // @synthesize videoOwner=_videoOwner;
@property(retain, nonatomic) NSString *trailers; // @synthesize trailers=_trailers;
@property(retain, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(retain, nonatomic) NSString *paystate; // @synthesize paystate=_paystate;
@property(retain, nonatomic) NSString *sshowchannelid; // @synthesize sshowchannelid=_sshowchannelid;
@property(retain, nonatomic) NSString *showchannelid; // @synthesize showchannelid=_showchannelid;
@property(retain, nonatomic) NSString *splaylistchannelid; // @synthesize splaylistchannelid=_splaylistchannelid;
@property(retain, nonatomic) NSString *playlistchannelid; // @synthesize playlistchannelid=_playlistchannelid;
@property(retain, nonatomic) NSString *playlistid; // @synthesize playlistid=_playlistid;
@property(retain, nonatomic) NSString *schannelid; // @synthesize schannelid=_schannelid;
@property(retain, nonatomic) NSString *channelid; // @synthesize channelid=_channelid;
@property(retain, nonatomic) NSString *showiddecode; // @synthesize showiddecode=_showiddecode;
@property(retain, nonatomic) NSDictionary *hoverInfoDic; // @synthesize hoverInfoDic=_hoverInfoDic;
@property(copy, nonatomic) NSString *drm_type; // @synthesize drm_type=_drm_type;
@property(copy, nonatomic) NSString *dolby_type; // @synthesize dolby_type=_dolby_type;
@property(nonatomic) _Bool isInteractiveVideo; // @synthesize isInteractiveVideo=_isInteractiveVideo;
@property(nonatomic) _Bool isRtmp; // @synthesize isRtmp=_isRtmp;
@property(nonatomic) long long interact; // @synthesize interact=_interact;
@property(copy, nonatomic) NSString *showVideoType; // @synthesize showVideoType=_showVideoType;
@property(nonatomic) long long tryWatchTime; // @synthesize tryWatchTime=_tryWatchTime;
@property(nonatomic) long long tryWatchSequeues; // @synthesize tryWatchSequeues=_tryWatchSequeues;
@property(nonatomic) unsigned long long tryWatchType; // @synthesize tryWatchType=_tryWatchType;
@property(nonatomic) _Bool isTryWatch; // @synthesize isTryWatch=_isTryWatch;
@property(retain, nonatomic) NSDictionary *drmData; // @synthesize drmData=_drmData;
@property(nonatomic) long long historyPlayPoint; // @synthesize historyPlayPoint=_historyPlayPoint;
@property(nonatomic) _Bool paid; // @synthesize paid=_paid;
@property(retain, nonatomic) NSMutableDictionary *allAudioItemDic; // @synthesize allAudioItemDic=mAllAudioItemDic;
@property(retain, nonatomic) NSDictionary *upsResponseDict; // @synthesize upsResponseDict=mUpsResponseDict;
@property(retain, nonatomic) NSDictionary *previewDictionaries; // @synthesize previewDictionaries=mPreviewDictionaries;
@property(retain, nonatomic) NSDictionary *trialDictionaries; // @synthesize trialDictionaries=mTrialDictionaries;
@property(retain, nonatomic) NSMutableDictionary *supportQuality; // @synthesize supportQuality=mSupportQuality;
@property(retain, nonatomic) NSArray *videodbTypes; // @synthesize videodbTypes=mVideodbTypes;
@property(retain, nonatomic) NSDictionary *upsDictionaries; // @synthesize upsDictionaries=mUpsDictionaries;
@property(retain, nonatomic) NSDictionary *adDictionaries; // @synthesize adDictionaries=mAdDictionaries;
@property(retain, nonatomic) NSArray *showKinds; // @synthesize showKinds=mShowKinds;
@property(nonatomic) _Bool isCacheVideosComplete; // @synthesize isCacheVideosComplete=mIsCacheVideosComplete;
@property(retain, nonatomic) NSDictionary *app_buy_info; // @synthesize app_buy_info=mapp_buy_info;
@property(retain, nonatomic) NSDictionary *allTotalTailSeconds; // @synthesize allTotalTailSeconds=mAllTotalTailSeconds;
@property(retain, nonatomic) NSDictionary *allTotalHeadSeconds; // @synthesize allTotalHeadSeconds=mAllTotalHeadSeconds;
@property(retain, nonatomic) NSDictionary *allTailSections; // @synthesize allTailSections=mAllTailsSections;
@property(retain, nonatomic) NSDictionary *allHeadSections; // @synthesize allHeadSections=mAllHeadsSections;
@property(retain, nonatomic) NSDictionary *tailSections; // @synthesize tailSections=mTailSections;
@property(retain, nonatomic) NSDictionary *headSections; // @synthesize headSections=mHeadSections;
@property(retain, nonatomic) NSString *s; // @synthesize s=mS;
@property(retain, nonatomic) NSString *ct; // @synthesize ct=mCt;
@property(retain, nonatomic) NSString *cs; // @synthesize cs=mCs;
@property(retain, nonatomic) NSString *site; // @synthesize site=mSite;
@property(retain, nonatomic) NSMutableDictionary *allAirPlayUrls; // @synthesize allAirPlayUrls=mAllAirPlayUrls;
@property(retain, nonatomic) NSMutableDictionary *airPlayUrls; // @synthesize airPlayUrls=mAirPlayUrls;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=mCid;
@property(nonatomic) _Bool isExclusiveVideo; // @synthesize isExclusiveVideo=mIsExclusiveVideo;
@property(nonatomic) long long adShowIcon; // @synthesize adShowIcon=mAdShowIcon;
@property(nonatomic) long long automaticOptionQualityType; // @synthesize automaticOptionQualityType=mautomaticOptionQualityType;
@property(retain, nonatomic) NSString *automaticQuality; // @synthesize automaticQuality=mAutomaticQuality;
@property(nonatomic) _Bool suggestSightEnhance; // @synthesize suggestSightEnhance;
@property(nonatomic) unsigned long long tryWatchDetailType; // @synthesize tryWatchDetailType=mTryWatchDetailType;
@property(nonatomic) long long videoStreamType; // @synthesize videoStreamType=mVideoStreamType;
@property(nonatomic) _Bool isP2pPlay; // @synthesize isP2pPlay=mIsP2pPlay;
@property(nonatomic) unsigned long long p2pTryCount; // @synthesize p2pTryCount=mP2PTryCount;
@property(retain, nonatomic) NSString *certificateId; // @synthesize certificateId=mCertificateId;
@property(retain, nonatomic) NSString *registerId; // @synthesize registerId=mRegisterId;
@property(nonatomic) long long panorama; // @synthesize panorama=mPanorama;
@property(nonatomic) _Bool isCacheUpsInfo; // @synthesize isCacheUpsInfo=mIsCacheUpsInfo;
@property(nonatomic) _Bool needEncrypt; // @synthesize needEncrypt=mNeedEncrypt;
@property(retain, nonatomic) NSString *viddecode; // @synthesize viddecode=mViddecode;
@property(retain, nonatomic) NSArray *videoTypeArray; // @synthesize videoTypeArray=mVideoTypeArray;
@property(nonatomic) long long videoType; // @synthesize videoType=mVideoType;
@property(retain, nonatomic) NSString *tryWatchDesc; // @synthesize tryWatchDesc=mTryWatchDesc;
@property(retain, nonatomic) NSDate *videoDate; // @synthesize videoDate=mVideoDate;
@property(copy, nonatomic) NSString *currentPlayVideoId; // @synthesize currentPlayVideoId=mCurrentPlayVideoId;
@property(nonatomic) int showLogo; // @synthesize showLogo=mShowLogo;
@property(retain, nonatomic) NSDictionary *allShowlogoInfos; // @synthesize allShowlogoInfos=mAllShowLogoInfos;
@property(retain, nonatomic) NSDictionary *showlogoInfos; // @synthesize showlogoInfos=mShowLogoInfos;
@property(retain, nonatomic) NSDictionary *payInfos; // @synthesize payInfos=mPayInfos;
@property(retain, nonatomic) NSDictionary *sidDatas; // @synthesize sidDatas=mSidDatas;
@property(nonatomic) long long nextVideoSequeue; // @synthesize nextVideoSequeue=mNextVideoSequeue;
@property(copy, nonatomic) NSString *nextTitle; // @synthesize nextTitle=mNextTitle;
@property(copy, nonatomic) NSString *nextVid; // @synthesize nextVid=mNextVid;
@property(retain, nonatomic) id <YTEngineYoukuPlayerItem> nextPlayItem; // @synthesize nextPlayItem=mNextPlayItem;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=mWebUrl;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=mVideoId;
@property(copy, nonatomic) NSString *showId; // @synthesize showId=mShowId;
@property(copy, nonatomic) NSString *title; // @synthesize title=mTitle;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=mImageUrl;
@property(retain, nonatomic) NSArray *subtitleUrls; // @synthesize subtitleUrls=mSubtitleUrls;
@property(retain, nonatomic) NSDictionary *allTotalSeconds; // @synthesize allTotalSeconds=mAllTotalSeconds;
@property(nonatomic) long long totalSeconds; // @synthesize totalSeconds=mTotalSeconds;
@property(nonatomic) long long videoSequeue; // @synthesize videoSequeue=mVideoSequeue;
@property(retain, nonatomic) NSArray *languages; // @synthesize languages=mLanguages;
@property(retain, nonatomic) NSArray *videoPoints; // @synthesize videoPoints=mVideoPoints;
@property(retain, nonatomic) NSDictionary *allVideoSections; // @synthesize allVideoSections=mAllVideoSections;
@property(retain, nonatomic) NSDictionary *videoSections; // @synthesize videoSections=mVideoSections;
@property(copy, nonatomic) NSString *errorDesc; // @synthesize errorDesc=mErrorDesc;
@property(nonatomic) long long code; // @synthesize code=mCode;
@property(copy, nonatomic) NSString *status; // @synthesize status=mStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

