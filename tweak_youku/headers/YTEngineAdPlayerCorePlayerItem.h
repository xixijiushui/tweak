//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTCorePlayerItem.h"

@class NSArray, NSDictionary, NSString, YTCoreURLItem;

@interface YTEngineAdPlayerCorePlayerItem : NSObject <YTCorePlayerItem>
{
    _Bool needEncrypt;
    _Bool isRtmp;
    NSDictionary *videoUrlsDic;
    NSArray *preAdURLs;
    NSArray *midAdURLs;
    NSArray *postAdURLs;
    NSArray *subtitleUrls;
    double startTime;
    double head;
    double tail;
    double _headVideoTime;
    double _tailVideoTime;
    NSString *_audioUrl;
    YTCoreURLItem *_audioItem;
    long long _headURLs;
    long long _tailURLs;
}

@property(nonatomic) long long tailURLs; // @synthesize tailURLs=_tailURLs;
@property(nonatomic) long long headURLs; // @synthesize headURLs=_headURLs;
@property(retain, nonatomic) YTCoreURLItem *audioItem; // @synthesize audioItem=_audioItem;
@property(copy, nonatomic) NSString *audioUrl; // @synthesize audioUrl=_audioUrl;
@property(nonatomic) double tailVideoTime; // @synthesize tailVideoTime=_tailVideoTime;
@property(nonatomic) double headVideoTime; // @synthesize headVideoTime=_headVideoTime;
@property(nonatomic) _Bool isRtmp; // @synthesize isRtmp;
@property(nonatomic) _Bool needEncrypt; // @synthesize needEncrypt;
@property(nonatomic) double tail; // @synthesize tail;
@property(nonatomic) double head; // @synthesize head;
@property(nonatomic) double startTime; // @synthesize startTime;
@property(retain, nonatomic) NSArray *subtitleUrls; // @synthesize subtitleUrls;
@property(retain, nonatomic) NSArray *postAdURLs; // @synthesize postAdURLs;
@property(retain, nonatomic) NSArray *midAdURLs; // @synthesize midAdURLs;
@property(retain, nonatomic) NSArray *preAdURLs; // @synthesize preAdURLs;
@property(retain, nonatomic) NSDictionary *videoUrlsDic; // @synthesize videoUrlsDic;
- (id)topURLs:(unsigned long long)arg1;
- (id)topVideoURLsWithQuality:(unsigned long long)arg1;
- (_Bool)isH265URL:(unsigned long long)arg1;
- (id)quality:(unsigned long long)arg1;
- (id)hevcQuality:(unsigned long long)arg1;
- (id)videoURLsWithQuality:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) double adStartTime;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDictionary *drmData;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAtomsHDR;
@property(nonatomic) _Bool isLive;
@property(nonatomic) _Bool isLocalPlay;
@property(nonatomic) _Bool isSDRVideo;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *videoInfo;
@property(retain, nonatomic) NSArray *videoURLs;

@end

