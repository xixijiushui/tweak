//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface ICDrawingViewTransform : NSObject
{
    NSDate *_startTime;
    double _duration;
    struct CGAffineTransform _from;
    struct CGAffineTransform _to;
    struct CGAffineTransform _final;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) struct CGAffineTransform final; // @synthesize final=_final;
@property(nonatomic) struct CGAffineTransform to; // @synthesize to=_to;
@property(nonatomic) struct CGAffineTransform from; // @synthesize from=_from;
- (void).cxx_destruct;

@end
