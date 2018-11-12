//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary, NSString;

@interface YTCoreURLItem : NSObject <NSCopying>
{
    NSMutableDictionary *drminfo;
    NSString *_url;
    long long _itemid;
    double _seconds;
    double _milliseconds;
    long long _size;
    NSString *_m3u8URL;
    NSString *_m3u8FilePath;
    NSString *_p2pUrl;
    NSString *_cdnUrl;
    NSString *_itemType;
    NSString *_sliceId;
    NSString *_fileId;
    NSString *_serverMd5;
    long long _isFlowAd;
}

@property(nonatomic) long long isFlowAd; // @synthesize isFlowAd=_isFlowAd;
@property(copy, nonatomic) NSString *serverMd5; // @synthesize serverMd5=_serverMd5;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(copy, nonatomic) NSString *sliceId; // @synthesize sliceId=_sliceId;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *p2pUrl; // @synthesize p2pUrl=_p2pUrl;
@property(copy, nonatomic) NSString *m3u8FilePath; // @synthesize m3u8FilePath=_m3u8FilePath;
@property(copy, nonatomic) NSString *m3u8URL; // @synthesize m3u8URL=_m3u8URL;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) double milliseconds; // @synthesize milliseconds=_milliseconds;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;
@property(nonatomic) long long itemid; // @synthesize itemid=_itemid;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableDictionary *drminfo; // @synthesize drminfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
