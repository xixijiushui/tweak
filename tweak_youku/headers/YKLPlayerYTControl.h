//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface YKLPlayerYTControl : NSObject
{
    _Bool _panorama;
    _Bool _smooth;
    _Bool _timeshift;
    NSString *_url;
    NSDictionary *_utParams;
}

@property(nonatomic) _Bool timeshift; // @synthesize timeshift=_timeshift;
@property(nonatomic) _Bool smooth; // @synthesize smooth=_smooth;
@property(nonatomic) _Bool panorama; // @synthesize panorama=_panorama;
@property(retain, nonatomic) NSDictionary *utParams; // @synthesize utParams=_utParams;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

