//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LFStreamingBufferConfiguration : NSObject
{
    float _terribleSendSpeed;
    float _currentSendSpeed;
    float _simplingInterval;
    long long _qualityInterval;
    long long _minTimeLength;
    long long _maxTimeLength;
    long long _maxBufferLength;
    unsigned long long _currentDropState;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) float simplingInterval; // @synthesize simplingInterval=_simplingInterval;
@property(nonatomic) float currentSendSpeed; // @synthesize currentSendSpeed=_currentSendSpeed;
@property(nonatomic) unsigned long long currentDropState; // @synthesize currentDropState=_currentDropState;
@property(nonatomic) long long maxBufferLength; // @synthesize maxBufferLength=_maxBufferLength;
@property(nonatomic) float terribleSendSpeed; // @synthesize terribleSendSpeed=_terribleSendSpeed;
@property(nonatomic) long long maxTimeLength; // @synthesize maxTimeLength=_maxTimeLength;
@property(nonatomic) long long minTimeLength; // @synthesize minTimeLength=_minTimeLength;
@property(nonatomic) long long qualityInterval; // @synthesize qualityInterval=_qualityInterval;

@end

