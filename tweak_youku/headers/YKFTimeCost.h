//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKFTimeCost : NSObject
{
    unsigned long long _beginTime;
}

@property(nonatomic) unsigned long long beginTime; // @synthesize beginTime=_beginTime;
- (void)end;
- (unsigned long long)timeCost;
- (void)begin;
- (unsigned long long)elapsedMilliseconds;

@end

