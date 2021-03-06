//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, YTCoreURLItem;

@protocol YTCorePlayerItem <NSObject>
@property(nonatomic) _Bool isSDRVideo;
@property(nonatomic) _Bool isLocalPlay;
@property(nonatomic) _Bool isAtomsHDR;
@property(nonatomic) _Bool isLive;
@property(retain, nonatomic) NSDictionary *videoInfo;
@property(nonatomic) _Bool isRtmp;
@property(retain, nonatomic) YTCoreURLItem *audioItem;
@property(copy, nonatomic) NSString *audioUrl;
@property(retain, nonatomic) NSDictionary *drmData;
@property(nonatomic) _Bool needEncrypt;
@property(nonatomic) double tailVideoTime;
@property(nonatomic) double headVideoTime;
@property(nonatomic) double tail;
@property(nonatomic) double head;
@property(nonatomic) double adStartTime;
@property(nonatomic) double startTime;
@property(retain, nonatomic) NSArray *subtitleUrls;
@property(retain, nonatomic) NSArray *midAdURLs;
@property(retain, nonatomic) NSArray *preAdURLs;
@property(retain, nonatomic) NSArray *postAdURLs;
@property(retain, nonatomic) NSArray *videoURLs;
- (NSArray *)topVideoURLsWithQuality:(unsigned long long)arg1;
- (NSArray *)videoURLsWithQuality:(unsigned long long)arg1;
- (_Bool)isAtomsHDRURL:(unsigned long long)arg1;
- (_Bool)isH265URL:(unsigned long long)arg1;
@end

