//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LFStreamPackage.h"

@class NSData, NSObject<OS_dispatch_semaphore>, NSString;

@interface LFFlvPackage : NSObject <LFStreamPackage>
{
    NSObject<OS_dispatch_semaphore> *_lock;
    NSData *_sps;
    NSData *_pps;
    NSData *_spec;
    struct CGSize _videoSize;
    struct __sFILE *fp;
    _Bool enabledWriteVideoFile;
    _Bool enabledWriteFlvHeaderVideoFile;
}

+ (id)flvHeads:(long long)arg1 videoHeight:(long long)arg2 sps:(id)arg3 pps:(id)arg4 audioHeader:(id)arg5;
+ (id)flvTagWithAudioHeader:(id)arg1 timeStamp:(unsigned int)arg2;
+ (id)flvTagWithVideoHeader:(id)arg1 pps:(id)arg2;
+ (id)metaData:(long long)arg1 height:(long long)arg2;
+ (id)h264PacketHeader:(_Bool)arg1 nalu:(_Bool)arg2;
+ (id)flvTagHeader:(unsigned char)arg1 size:(unsigned int)arg2 timeStamp:(unsigned int)arg3;
+ (id)flvHeader;
- (void).cxx_destruct;
- (id)GetFilePathByfileName:(char *)arg1;
- (void)initForFilePath;
- (id)h264Packet:(id)arg1;
- (id)aaCPacket:(id)arg1;
- (void)dealloc;
- (id)initWithVideoSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

