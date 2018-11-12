//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEngineAdPlayerVideoURLItem.h"

@class NSMutableDictionary, NSString;

@interface YTEngineAdPlayerVideoURLItem : NSObject <YTEngineAdPlayerVideoURLItem>
{
    NSString *mUrl;
    long long mItemId;
    double mSeconds;
    long long mSize;
    NSString *mM3u8Url;
    NSString *mM3u8FilePath;
    double mMilliseconds;
    NSString *mSliceId;
    NSString *mFileId;
    NSString *mServerMd5;
    NSMutableDictionary *drminfo;
    long long isFlowAd;
}

@property(nonatomic) long long isFlowAd; // @synthesize isFlowAd;
@property(retain, nonatomic) NSMutableDictionary *drminfo; // @synthesize drminfo;
@property(copy, nonatomic) NSString *serverMd5; // @synthesize serverMd5=mServerMd5;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=mFileId;
@property(copy, nonatomic) NSString *sliceId; // @synthesize sliceId=mSliceId;
@property(nonatomic) double milliseconds; // @synthesize milliseconds=mMilliseconds;
@property(copy, nonatomic) NSString *m3u8FilePath; // @synthesize m3u8FilePath=mM3u8FilePath;
@property(copy, nonatomic) NSString *m3u8Url; // @synthesize m3u8Url=mM3u8Url;
@property(nonatomic) long long size; // @synthesize size=mSize;
@property(nonatomic) double seconds; // @synthesize seconds=mSeconds;
@property(nonatomic) long long itemId; // @synthesize itemId=mItemId;
@property(copy, nonatomic) NSString *url; // @synthesize url=mUrl;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
