//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEngineYoukuPlayerVideoSectionItem.h"

@class NSString;

@interface YTEngineYoukuPlayerVideoSectionInstanceItem : NSObject <YTEngineYoukuPlayerVideoSectionItem>
{
    long long mItemId;
    long long mSize;
    NSString *mUrl;
    double mSeconds;
    double mMilliseconds;
    NSString *mFreestreamUrl;
    NSString *mP2pUrl;
    NSString *mcdnUrl;
    NSString *mSliceId;
    NSString *mFileId;
    NSString *mServerMd5;
    long long isFlowAd;
    long long _suggestPanoramaType;
    struct CGSize mVideoSize;
}

@property(nonatomic) long long suggestPanoramaType; // @synthesize suggestPanoramaType=_suggestPanoramaType;
@property(nonatomic) long long isFlowAd; // @synthesize isFlowAd;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=mVideoSize;
@property(copy, nonatomic) NSString *serverMd5; // @synthesize serverMd5=mServerMd5;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=mFileId;
@property(copy, nonatomic) NSString *sliceId; // @synthesize sliceId=mSliceId;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=mcdnUrl;
@property(retain, nonatomic) NSString *p2pUrl; // @synthesize p2pUrl=mP2pUrl;
@property(retain, nonatomic) NSString *freestreamUrl; // @synthesize freestreamUrl=mFreestreamUrl;
@property(nonatomic) double milliseconds; // @synthesize milliseconds=mMilliseconds;
@property(nonatomic) double seconds; // @synthesize seconds=mSeconds;
@property(copy, nonatomic) NSString *url; // @synthesize url=mUrl;
@property(nonatomic) long long size; // @synthesize size=mSize;
@property(nonatomic) long long itemId; // @synthesize itemId=mItemId;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

