//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPModule.h"

@class NSTimer;

@interface MPSmartPromote : CPModule
{
    _Bool _lastFading;
    NSTimer *_promoteTimer;
    id _promoter;
}

@property(retain, nonatomic) id promoter; // @synthesize promoter=_promoter;
@property(retain, nonatomic) NSTimer *promoteTimer; // @synthesize promoteTimer=_promoteTimer;
- (void).cxx_destruct;
- (_Bool)isSoftDecodePlayer;
- (_Bool)isLocalPlay;
- (_Bool)conformsToProtocolGeneralPlayerFeature;
- (_Bool)conformsToProtocolMediaPlayerFeature;
- (void)promote;
- (void)endSection:(id)arg1;
- (void)endPend;
- (void)willPend;
- (void)deinitModule;
- (void)dealloc;

@end
