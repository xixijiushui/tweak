//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LFFrame.h"

@class NSData;

@interface LFVideoFrame : LFFrame
{
    _Bool _isKeyFrame;
    NSData *_sps;
    NSData *_pps;
}

@property(retain, nonatomic) NSData *pps; // @synthesize pps=_pps;
@property(retain, nonatomic) NSData *sps; // @synthesize sps=_sps;
@property(nonatomic) _Bool isKeyFrame; // @synthesize isKeyFrame=_isKeyFrame;
- (void).cxx_destruct;

@end
