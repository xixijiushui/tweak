//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKBarrageBaseRequest.h"

@class NSNumber;

@interface YKBarrageStarLikeRequest : YKBarrageBaseRequest
{
    _Bool _isLiveBarrage;
    NSNumber *_dmID;
}

@property(nonatomic) _Bool isLiveBarrage; // @synthesize isLiveBarrage=_isLiveBarrage;
@property(copy, nonatomic) NSNumber *dmID; // @synthesize dmID=_dmID;
- (void).cxx_destruct;
- (id)requestId;
- (id)toJsonDict;
- (id)init;

@end
