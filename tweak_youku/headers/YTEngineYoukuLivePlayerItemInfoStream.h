//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YTEngineYoukuLivePlayerItemInfoStream : NSObject
{
    NSString *_stream;
    NSString *_title;
    NSString *_server;
    NSString *_bps;
    NSString *_offset;
    NSString *_channel;
}

@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *bps; // @synthesize bps=_bps;
@property(copy, nonatomic) NSString *server; // @synthesize server=_server;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *stream; // @synthesize stream=_stream;
- (void)dealloc;
- (id)initWithJson:(id)arg1;

@end

