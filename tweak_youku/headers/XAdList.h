//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface XAdList : NSObject
{
    long long _pos;
    long long _duration;
    NSArray *_ads;
    NSString *_adurl;
}

+ (id)parse:(id)arg1 reqTime:(double)arg2;
@property(copy, nonatomic) NSString *adurl; // @synthesize adurl=_adurl;
@property(copy, nonatomic) NSArray *ads; // @synthesize ads=_ads;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long pos; // @synthesize pos=_pos;
- (void).cxx_destruct;

@end

