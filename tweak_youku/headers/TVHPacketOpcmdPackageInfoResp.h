//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHPacketBase.h"

@class NSDictionary, NSString;

@interface TVHPacketOpcmdPackageInfoResp : TVHPacketBase
{
    NSString *_packageName;
    NSDictionary *_packageInfoDict;
}

@property(retain, nonatomic) NSDictionary *packageInfoDict; // @synthesize packageInfoDict=_packageInfoDict;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
- (void).cxx_destruct;
- (void)decodeWithPacket:(struct tagTVHRemoteControlPacket *)arg1;

@end

