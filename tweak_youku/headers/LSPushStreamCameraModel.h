//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSParser.h"

@class NSString;

@interface LSPushStreamCameraModel : NSObject <LSParser>
{
    long long _quality;
    NSString *_videoUrl;
    NSString *_videoUrlCode;
    NSString *_islogin;
    NSString *_streamIndex;
    NSString *_rtmpStreamUrl;
    NSString *_hlsStreamUrl;
    NSString *_flvStreamUrl;
    NSString *_h265flvStreamUrl;
    long long _rand;
}

@property(nonatomic) long long rand; // @synthesize rand=_rand;
@property(copy, nonatomic) NSString *h265flvStreamUrl; // @synthesize h265flvStreamUrl=_h265flvStreamUrl;
@property(copy, nonatomic) NSString *flvStreamUrl; // @synthesize flvStreamUrl=_flvStreamUrl;
@property(copy, nonatomic) NSString *hlsStreamUrl; // @synthesize hlsStreamUrl=_hlsStreamUrl;
@property(copy, nonatomic) NSString *rtmpStreamUrl; // @synthesize rtmpStreamUrl=_rtmpStreamUrl;
@property(copy, nonatomic) NSString *streamIndex; // @synthesize streamIndex=_streamIndex;
@property(copy, nonatomic) NSString *islogin; // @synthesize islogin=_islogin;
@property(copy, nonatomic) NSString *videoUrlCode; // @synthesize videoUrlCode=_videoUrlCode;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) long long quality; // @synthesize quality=_quality;
- (void).cxx_destruct;
- (void)parseObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

