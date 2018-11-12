//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTEngineYoukuLivePlayerInstanceItem.h"

@class NSMutableArray, NSString, YTEngineYoukuNewLivePlayerItemEncryptInfo, YTEngineYoukuNewLivePlayerItemStreamInfo;

@interface YTEngineYoukuNewLivePlayerInstanceItem : YTEngineYoukuLivePlayerInstanceItem
{
    NSString *_live_id;
    NSString *_start_date;
    NSString *_end_date;
    YTEngineYoukuNewLivePlayerItemStreamInfo *_defaultStream;
    NSMutableArray *_streamInfos;
    long long _preferedSequeue;
}

@property(nonatomic) long long preferedSequeue; // @synthesize preferedSequeue=_preferedSequeue;
@property(retain, nonatomic) NSMutableArray *streamInfos; // @synthesize streamInfos=_streamInfos;
@property(retain, nonatomic) YTEngineYoukuNewLivePlayerItemStreamInfo *defaultStream; // @synthesize defaultStream=_defaultStream;
@property(retain, nonatomic) NSString *end_date; // @synthesize end_date=_end_date;
@property(retain, nonatomic) NSString *start_date; // @synthesize start_date=_start_date;
@property(retain, nonatomic) NSString *live_id; // @synthesize live_id=_live_id;
- (_Bool)permissionStatusIsSuccess:(long long)arg1;
- (void)dealloc;
- (id)getStringForKey:(id)arg1 key:(id)arg2;
- (_Bool)p_panoramaMachine;
@property(retain, nonatomic) YTEngineYoukuNewLivePlayerItemEncryptInfo *encryptInfo; // @dynamic encryptInfo;
- (id)initWithJson:(id)arg1 viewSequence:(long long)arg2;

@end
