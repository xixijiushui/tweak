//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEnginePlayerItem.h"

@class NSDictionary, NSString;

@interface YTEnginePlayerLightVideoItem : NSObject <YTEnginePlayerItem>
{
    _Bool _isRtmp;
    int _showLogo;
    NSString *_videoId;
    NSString *_title;
    double _startTime;
    double _totalSeconds;
    NSDictionary *_videoUrlsDic;
    NSDictionary *_showlogoInfos;
    NSString *_quality;
    double _timeStamp;
}

@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *quality; // @synthesize quality=_quality;
@property(nonatomic) _Bool isRtmp; // @synthesize isRtmp=_isRtmp;
@property(retain, nonatomic) NSDictionary *showlogoInfos; // @synthesize showlogoInfos=_showlogoInfos;
@property(nonatomic) int showLogo; // @synthesize showLogo=_showLogo;
@property(retain, nonatomic) NSDictionary *videoUrlsDic; // @synthesize videoUrlsDic=_videoUrlsDic;
@property(nonatomic) double totalSeconds; // @synthesize totalSeconds=_totalSeconds;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (id)vipInfoDic;
- (long long)videoSequeue;
- (id)videoLanguage;
- (id)showId;
- (long long)preloadInfo;
- (id)payInfoDic;
- (long long)interact;
- (id)audioItem;
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
- (id)tailVideoURLsWithQuality:(id)arg1;
- (id)headVideoURLsWithQuality:(id)arg1;
- (id)videoM3U8URLWithQuality:(id)arg1;
- (id)videoURLsWithQuality:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *isDrm;
@property(readonly) Class superclass;

@end

