//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YKMediaInfo : NSObject
{
    NSString *_url;
    NSString *_stream_type;
    long long _size;
    long long _urlType;
}

@property(nonatomic) long long urlType; // @synthesize urlType=_urlType;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *stream_type; // @synthesize stream_type=_stream_type;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

