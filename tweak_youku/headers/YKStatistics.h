//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YKJSONClient;

@interface YKStatistics : NSObject
{
    NSString *market;
    long long type;
    long long pass;
    YKJSONClient *_jsonclient;
}

+ (id)sharedInstance;
@property(retain, nonatomic) YKJSONClient *jsonclient; // @synthesize jsonclient=_jsonclient;
@property(nonatomic) long long pass; // @synthesize pass;
@property(nonatomic) long long type; // @synthesize type;
@property(retain, nonatomic) NSString *market; // @synthesize market;
- (void).cxx_destruct;
- (id)videoFormat;
- (_Bool)determineFormat;
- (void)sendHistoryVid:(id)arg1 sid:(id)arg2 played:(double)arg3 lanCode:(id)arg4;
- (void)sendVideoPlayInfoEnd:(id)arg1 session:(id)arg2 finished:(_Bool)arg3 playedTime:(double)arg4 reso2nCount:(long long)arg5 reso2nTime:(double)arg6 reso2hCount:(long long)arg7 reso2hTime:(double)arg8 reso2hdCount:(long long)arg9 reso2hdTime:(double)arg10 loads:(id)arg11 playRate:(id)arg12 preloadTime:(double)arg13 adpreloadTime:(double)arg14 duration:(double)arg15 local:(_Bool)arg16 offline:(_Bool)arg17 parameters:(id)arg18 success:(CDUnknownBlockType)arg19 failure:(CDUnknownBlockType)arg20;
- (void)sendVideoPlayInfoBegin:(id)arg1 session:(id)arg2 errCode:(int)arg3 local:(_Bool)arg4 offline:(_Bool)arg5 parameters:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)init;

@end

