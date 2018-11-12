//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEngineURLItem.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface YKSPlayerSliceObj : NSObject <YTEngineURLItem>
{
    NSString *_url;
    long long _itemId;
    double _seconds;
    double _milliseconds;
    long long _size;
    NSString *_itemType;
    NSString *_m3u8Url;
    id <YKSPlayerVideoInfoSliceObj> _mainModel;
}

@property(retain, nonatomic) id <YKSPlayerVideoInfoSliceObj> mainModel; // @synthesize mainModel=_mainModel;
@property(copy, nonatomic) NSString *m3u8Url; // @synthesize m3u8Url=_m3u8Url;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) double milliseconds; // @synthesize milliseconds=_milliseconds;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithRootModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDictionary *drmData;
@property(copy, nonatomic) NSMutableDictionary *drminfo;
@property(copy, nonatomic) NSString *fileId;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long isFlowAd;
@property(copy, nonatomic) NSString *serverMd5;
@property(copy, nonatomic) NSString *sliceId;
@property(readonly) Class superclass;

@end

