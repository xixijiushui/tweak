//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEngineAdPlayerVideoItem.h"
#import "YTEnginePlayerItem.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, YTEngineAdPlayerVideoURLItem;

@interface YTEngineAdPlayerVideoItem : NSObject <YTEngineAdPlayerVideoItem, YTEnginePlayerItem>
{
    _Bool mIsLocalPlay;
    _Bool mNeedEncrypt;
    _Bool mIsExclusiveVideo;
    _Bool mIsRtmp;
    _Bool isInteractiveVideo;
    _Bool isPanoroma;
    _Bool enableSkip;
    _Bool isTryWatch;
    int mShowLogo;
    NSDictionary *mVideoUrlsDic;
    NSString *mVideoId;
    NSString *mShowId;
    NSString *mVideoLanguage;
    NSDictionary *mPayInfoDic;
    NSDictionary *mVipInfoDic;
    long long mVideoSequeue;
    double mTotalSeconds;
    NSDictionary *mSidDataDic;
    NSString *mVideoIdPlay;
    NSArray *mSubtitleUrls;
    NSString *mPreloadInfo;
    double mStartTime;
    double mTailTime;
    double mHeadTime;
    NSArray *mMidPointArray;
    NSArray *mStandardAdPointArray;
    NSDictionary *mAirPlayUrlsDic;
    NSDictionary *mStreamLogos;
    NSString *mRegisterId;
    NSString *mCertificateId;
    long long mInteract;
    long long mShowIcon;
    YTEngineAdPlayerVideoURLItem *mAudioItem;
    NSDictionary *mHeadSections;
    NSDictionary *mTailSections;
    long long mTotalHeadSeconds;
    long long mTotalTailSeconds;
    NSDictionary *drmData;
    NSString *isDrm;
    NSString *dolby_type;
    NSString *drm_type;
    NSString *title;
    long long panoromaType;
    long long tryWatchType;
    long long tryWatchTimes;
    NSMutableDictionary *videoSectionPanoramatypeDic;
}

@property(retain, nonatomic) NSMutableDictionary *videoSectionPanoramatypeDic; // @synthesize videoSectionPanoramatypeDic;
@property(nonatomic) long long tryWatchTimes; // @synthesize tryWatchTimes;
@property(nonatomic) long long tryWatchType; // @synthesize tryWatchType;
@property(nonatomic) _Bool isTryWatch; // @synthesize isTryWatch;
@property(nonatomic) long long panoromaType; // @synthesize panoromaType;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) _Bool enableSkip; // @synthesize enableSkip;
@property(nonatomic) _Bool isPanoroma; // @synthesize isPanoroma;
@property(copy, nonatomic) NSString *drm_type; // @synthesize drm_type;
@property(copy, nonatomic) NSString *dolby_type; // @synthesize dolby_type;
@property(copy, nonatomic) NSString *isDrm; // @synthesize isDrm;
@property(retain, nonatomic) NSDictionary *drmData; // @synthesize drmData;
@property(nonatomic) _Bool isInteractiveVideo; // @synthesize isInteractiveVideo;
@property(nonatomic) _Bool isRtmp; // @synthesize isRtmp=mIsRtmp;
@property(nonatomic) long long totalTailSeconds; // @synthesize totalTailSeconds=mTotalTailSeconds;
@property(nonatomic) long long totalHeadSeconds; // @synthesize totalHeadSeconds=mTotalHeadSeconds;
@property(retain, nonatomic) NSDictionary *tailSections; // @synthesize tailSections=mTailSections;
@property(retain, nonatomic) NSDictionary *headSections; // @synthesize headSections=mHeadSections;
@property(retain, nonatomic) YTEngineAdPlayerVideoURLItem *audioItem; // @synthesize audioItem=mAudioItem;
@property(nonatomic) _Bool isExclusiveVideo; // @synthesize isExclusiveVideo=mIsExclusiveVideo;
@property(nonatomic) long long showIcon; // @synthesize showIcon=mShowIcon;
@property(nonatomic) long long interact; // @synthesize interact=mInteract;
@property(retain, nonatomic) NSString *certificateId; // @synthesize certificateId=mCertificateId;
@property(retain, nonatomic) NSString *registerId; // @synthesize registerId=mRegisterId;
@property(nonatomic) _Bool needEncrypt; // @synthesize needEncrypt=mNeedEncrypt;
@property(retain, nonatomic) NSDictionary *streamlogos; // @synthesize streamlogos=mStreamLogos;
@property(nonatomic) int showLogo; // @synthesize showLogo=mShowLogo;
@property(nonatomic) _Bool isLocalPlay; // @synthesize isLocalPlay=mIsLocalPlay;
@property(retain, nonatomic) NSDictionary *airPlayUrlsDic; // @synthesize airPlayUrlsDic=mAirPlayUrlsDic;
@property(retain, nonatomic) NSArray *standardAdPointArray; // @synthesize standardAdPointArray=mStandardAdPointArray;
@property(retain, nonatomic) NSArray *midPointArray; // @synthesize midPointArray=mMidPointArray;
@property(nonatomic) double headTime; // @synthesize headTime=mHeadTime;
@property(nonatomic) double tailTime; // @synthesize tailTime=mTailTime;
@property(nonatomic) double startTime; // @synthesize startTime=mStartTime;
@property(copy, nonatomic) NSString *preloadInfo; // @synthesize preloadInfo=mPreloadInfo;
@property(retain, nonatomic) NSArray *subtitleUrls; // @synthesize subtitleUrls=mSubtitleUrls;
@property(copy, nonatomic) NSString *videoIdPlay; // @synthesize videoIdPlay=mVideoIdPlay;
@property(retain, nonatomic) NSDictionary *sidDataDic; // @synthesize sidDataDic=mSidDataDic;
@property(nonatomic) double totalSeconds; // @synthesize totalSeconds=mTotalSeconds;
@property(nonatomic) long long videoSequeue; // @synthesize videoSequeue=mVideoSequeue;
@property(retain, nonatomic) NSDictionary *vipInfoDic; // @synthesize vipInfoDic=mVipInfoDic;
@property(retain, nonatomic) NSDictionary *payInfoDic; // @synthesize payInfoDic=mPayInfoDic;
@property(copy, nonatomic) NSString *videoLanguage; // @synthesize videoLanguage=mVideoLanguage;
@property(copy, nonatomic) NSString *showId; // @synthesize showId=mShowId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=mVideoId;
@property(retain, nonatomic) NSDictionary *videoUrlsDic; // @synthesize videoUrlsDic=mVideoUrlsDic;
- (_Bool)isTryWatchFinished;
- (id)contentAdPoints;
- (id)midAdPoints;
- (double)durationForDisplay;
- (double)totalDuration;
- (double)endTime;
- (long long)panoromaVideoType;
- (_Bool)isPanoromaVideo;
- (_Bool)isLocalPlayWithQuality:(id)arg1;
- (_Bool)isRtmpeVideoWithQuality:(id)arg1;
- (_Bool)isDolbyVideoWithQuality:(id)arg1;
- (_Bool)isH265VideoWithQuality:(id)arg1;
- (id)quality:(id)arg1;
- (id)hevcQuality:(id)arg1;
- (id)tailVideoURLsWithQuality:(id)arg1;
- (id)headVideoURLsWithQuality:(id)arg1;
- (id)videoM3U8URLWithQuality:(id)arg1;
- (id)videoURLsWithQuality:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
