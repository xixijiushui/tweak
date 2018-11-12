//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, RemoteDebugMessagePacket;

@interface LogUploadCommand : NSObject
{
    _Bool _allowNotWifi;
    NSArray *_logFeatures;
    RemoteDebugMessagePacket *_remoteDebugMessagePacket;
}

@property(retain, nonatomic) RemoteDebugMessagePacket *remoteDebugMessagePacket; // @synthesize remoteDebugMessagePacket=_remoteDebugMessagePacket;
@property(copy, nonatomic) NSArray *logFeatures; // @synthesize logFeatures=_logFeatures;
@property(nonatomic) _Bool allowNotWifi; // @synthesize allowNotWifi=_allowNotWifi;
- (void).cxx_destruct;
- (id)initWithRemoteDebugMessagePacket:(id)arg1;

@end

