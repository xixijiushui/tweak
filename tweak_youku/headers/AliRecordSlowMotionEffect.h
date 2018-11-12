//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliRecordEffect.h"

@class AliRecordPlayer, NSString;

@interface AliRecordSlowMotionEffect : NSObject <AliRecordEffect>
{
    _Bool _seeking;
    AliRecordPlayer *_recordPlayer;
    double _recordProgress;
    double _slowDuration;
    double _continueDuration;
}

@property(nonatomic) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic) double continueDuration; // @synthesize continueDuration=_continueDuration;
@property(nonatomic) double slowDuration; // @synthesize slowDuration=_slowDuration;
@property(nonatomic) double recordProgress; // @synthesize recordProgress=_recordProgress;
@property(nonatomic) __weak AliRecordPlayer *recordPlayer; // @synthesize recordPlayer=_recordPlayer;
- (void).cxx_destruct;
@property(readonly, nonatomic) double speed;
- (void)closeEffect;
- (void)openEffect;
@property(nonatomic) double progress;
@property(nonatomic) __weak AliRecordPlayer *player;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
