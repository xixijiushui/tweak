//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKLiveBarragePacket.h"

@class YKLiveBarrageSystemInfo;

@interface YKLiveBarrageSystemInfoPacket : YKLiveBarragePacket
{
    YKLiveBarrageSystemInfo *_systemInfo;
}

+ (void)load;
@property(retain, nonatomic) YKLiveBarrageSystemInfo *systemInfo; // @synthesize systemInfo=_systemInfo;
- (void).cxx_destruct;
- (void)mergeFromJSON:(id)arg1;

@end

