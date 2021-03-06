//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKSpeechCurve : NSObject
{
    float _bias;
    float _seed;
    float _speed;
    float _tick;
    float _volume;
}

@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float tick; // @synthesize tick=_tick;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float seed; // @synthesize seed=_seed;
@property(nonatomic) float bias; // @synthesize bias=_bias;
- (float)calculate:(float)arg1;
- (void)updateTick:(float)arg1;
- (void)respawn;

@end

