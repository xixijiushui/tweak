//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPSession.h"

@interface GPSession : MPSession
{
    _Bool _lastPlay;
}

@property(nonatomic) _Bool lastPlay; // @synthesize lastPlay=_lastPlay;
- (_Bool)isTopicPlay;
- (_Bool)isSoftDecodePlayer;
- (_Bool)conformsToProtocolGeneralPlayerFeature;
- (_Bool)conformsToProtocolMediaPlayerFeature;
- (void)interrupt:(int)arg1;

@end

