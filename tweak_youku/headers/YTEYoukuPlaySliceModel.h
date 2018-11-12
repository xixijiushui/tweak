//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEngineURLItem.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface YTEYoukuPlaySliceModel : NSObject <YTEngineURLItem>
{
    double _seconds;
    NSString *_url;
    long long _itemId;
    double _milliseconds;
    long long _size;
    NSString *_itemType;
    NSString *_sliceId;
    NSString *_fileId;
    NSString *_serverMd5;
    NSString *_m3u8URL;
    long long _isFlowAd;
}

@property(nonatomic) long long isFlowAd; // @synthesize isFlowAd=_isFlowAd;
@property(copy, nonatomic) NSString *m3u8URL; // @synthesize m3u8URL=_m3u8URL;
@property(copy, nonatomic) NSString *serverMd5; // @synthesize serverMd5=_serverMd5;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(copy, nonatomic) NSString *sliceId; // @synthesize sliceId=_sliceId;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) double milliseconds; // @synthesize milliseconds=_milliseconds;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;
- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableDictionary *drminfo;
- (long long)itemid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDictionary *drmData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

