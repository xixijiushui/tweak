//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LFAudioEncoding.h"

@class LFLiveAudioConfiguration, NSString;

@interface LFHardwareAudioEncoder : NSObject <LFAudioEncoding>
{
    struct OpaqueAudioConverter *m_converter;
    char *leftBuf;
    char *aacBuf;
    long long leftLength;
    struct __sFILE *fp;
    _Bool enabledWriteVideoFile;
    LFLiveAudioConfiguration *_configuration;
    id <LFAudioEncodingDelegate> _aacDeleage;
}

@property(nonatomic) __weak id <LFAudioEncodingDelegate> aacDeleage; // @synthesize aacDeleage=_aacDeleage;
@property(retain, nonatomic) LFLiveAudioConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)GetFilePathByfileName:(id)arg1;
- (void)initForFilePath;
- (long long)sampleRateIndex:(long long)arg1;
- (id)adtsData:(long long)arg1 rawDataLength:(long long)arg2;
- (_Bool)createAudioConvert;
- (void)stopEncoder;
- (void)encodeBuffer:(char *)arg1 timeStamp:(unsigned long long)arg2;
- (void)encodeAudioData:(id)arg1 timeStamp:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithAudioStreamConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

