//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface YKFreeFlowVideoInfo : NSObject
{
    NSString *_videoid;
    NSString *_title;
    unsigned long long _qulity;
    NSArray *_urls;
    NSString *_m3u8_url;
}

@property(copy, nonatomic) NSString *m3u8_url; // @synthesize m3u8_url=_m3u8_url;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(nonatomic) unsigned long long qulity; // @synthesize qulity=_qulity;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *videoid; // @synthesize videoid=_videoid;
- (void).cxx_destruct;

@end

