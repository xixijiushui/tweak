//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RemoteDebugMessagePacket.h"

@class NSString;

@interface RemoteDebugResponse : RemoteDebugMessagePacket
{
}

@property(copy, nonatomic) NSString *replyMessage;
@property(copy, nonatomic) NSString *replyCode;
@property(copy, nonatomic) NSString *replyId;

@end

