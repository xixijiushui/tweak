//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface AliSVAudioConfiguration : NSObject <NSCoding, NSCopying>
{
    unsigned long long _numberOfChannels;
    unsigned long long _audioSampleRate;
    unsigned long long _audioBitrate;
    char *_asc;
}

+ (id)defaultConfigurationForQuality:(unsigned long long)arg1;
+ (id)defaultConfiguration;
@property(readonly, nonatomic) char *asc; // @synthesize asc=_asc;
@property(nonatomic) unsigned long long audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) unsigned long long audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) unsigned long long numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)sampleRateIndex:(long long)arg1;
@property(readonly, nonatomic) unsigned long long bufferLength;
- (void)dealloc;
- (id)init;

@end

