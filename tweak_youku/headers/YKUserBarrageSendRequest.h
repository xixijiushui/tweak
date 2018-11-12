//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKBarrageBaseRequest.h"

@class NSNumber, NSString;

@interface YKUserBarrageSendRequest : YKBarrageBaseRequest
{
    long long _playAt;
    NSString *_contents;
    NSString *_properties;
    NSString *_adsId;
    NSNumber *_dmfid;
}

@property(copy, nonatomic) NSNumber *dmfid; // @synthesize dmfid=_dmfid;
@property(copy, nonatomic) NSString *adsId; // @synthesize adsId=_adsId;
@property(copy, nonatomic) NSString *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *contents; // @synthesize contents=_contents;
@property(nonatomic) long long playAt; // @synthesize playAt=_playAt;
- (void).cxx_destruct;
- (id)requestId;
- (id)toJsonDict;
- (id)init;

@end

