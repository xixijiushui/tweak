//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LFPlayerImpairmentMonitorItem : NSObject
{
    NSString *_videoFormat;
    double _impairmentDuration;
    double _impairmentTime;
    double _impairmentInterval;
    unsigned long long _videoType;
}

@property(nonatomic) unsigned long long videoType; // @synthesize videoType=_videoType;
@property(nonatomic) double impairmentInterval; // @synthesize impairmentInterval=_impairmentInterval;
@property(nonatomic) double impairmentTime; // @synthesize impairmentTime=_impairmentTime;
@property(nonatomic) double impairmentDuration; // @synthesize impairmentDuration=_impairmentDuration;
@property(copy, nonatomic) NSString *videoFormat; // @synthesize videoFormat=_videoFormat;
- (void).cxx_destruct;

@end
