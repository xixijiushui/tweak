//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKLiveBarragePacket.h"

@class NSArray;

@interface YKLiveBarrageMessagePacket : YKLiveBarragePacket
{
    NSArray *_barrages;
}

+ (void)load;
@property(retain, nonatomic) NSArray *barrages; // @synthesize barrages=_barrages;
- (void).cxx_destruct;
- (void)mergeFromJSON:(id)arg1;

@end

