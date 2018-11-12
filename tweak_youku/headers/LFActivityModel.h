//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface LFActivityModel : NSObject
{
    NSString *_imageUrl;
    NSString *_name;
    long long _startTime;
    long long _endTime;
    NSURL *_webUrl;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSURL *webUrl; // @synthesize webUrl=_webUrl;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;

@end
