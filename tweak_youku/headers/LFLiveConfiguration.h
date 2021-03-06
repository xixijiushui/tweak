//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFStreamingBufferConfiguration, NSString;

@interface LFLiveConfiguration : NSObject
{
    _Bool _logReport;
    float _videoBitRateWifi;
    float _videoBitRateNOWifi;
    NSString *_sc;
    NSString *_guid;
    NSString *_token;
    NSString *_secretKey;
    NSString *_requestHost;
    LFStreamingBufferConfiguration *_bufferConfiguration;
}

+ (_Bool)isNewThaniPhone5S;
+ (_Bool)isNewThaniPhone6;
+ (id)deviceName;
+ (id)shareConfiguration;
@property(nonatomic) float videoBitRateNOWifi; // @synthesize videoBitRateNOWifi=_videoBitRateNOWifi;
@property(nonatomic) float videoBitRateWifi; // @synthesize videoBitRateWifi=_videoBitRateWifi;
@property(retain, nonatomic) LFStreamingBufferConfiguration *bufferConfiguration; // @synthesize bufferConfiguration=_bufferConfiguration;
@property(copy, nonatomic) NSString *requestHost; // @synthesize requestHost=_requestHost;
@property(copy, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool logReport; // @synthesize logReport=_logReport;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *sc; // @synthesize sc=_sc;
- (void).cxx_destruct;

@end

