//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KKHotSpotMenuItem.h"

@class NSString;

@interface HLKKHotSpotMenuItem : KKHotSpotMenuItem
{
    _Bool _hasNext;
    _Bool _autoPlay;
    NSString *_spmAB;
    NSString *_pageName;
    NSString *_refreshType;
    NSString *_channelid;
    NSString *_channelType;
    NSString *_queryId;
    NSString *_queryType;
    NSString *_videoId;
    NSString *_cmsBaoluoId;
    NSString *_feedBaoluoId;
    long long _pn;
}

@property(nonatomic) long long pn; // @synthesize pn=_pn;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(retain, nonatomic) NSString *feedBaoluoId; // @synthesize feedBaoluoId=_feedBaoluoId;
@property(retain, nonatomic) NSString *cmsBaoluoId; // @synthesize cmsBaoluoId=_cmsBaoluoId;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSString *queryType; // @synthesize queryType=_queryType;
@property(retain, nonatomic) NSString *queryId; // @synthesize queryId=_queryId;
@property(retain, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(nonatomic) NSString *channelid; // @synthesize channelid=_channelid;
@property(retain, nonatomic) NSString *refreshType; // @synthesize refreshType=_refreshType;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *spmAB; // @synthesize spmAB=_spmAB;
- (void).cxx_destruct;

@end

