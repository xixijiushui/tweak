//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface YKBarrageAdvertisementInfo : NSObject <NSCopying>
{
    NSString *_adsId;
    long long _beginTime;
    long long _duration;
}

@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) NSString *adsId; // @synthesize adsId=_adsId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

