//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFLiveAudioConfiguration, NSData;

@protocol LFAudioEncoding <NSObject>
- (void)stopEncoder;
- (void)encodeAudioData:(NSData *)arg1 timeStamp:(unsigned long long)arg2;

@optional
- (NSData *)adtsData:(long long)arg1 rawDataLength:(long long)arg2;
- (void)setDelegate:(id <LFAudioEncodingDelegate>)arg1;
- (id)initWithAudioStreamConfiguration:(LFLiveAudioConfiguration *)arg1;
@end
