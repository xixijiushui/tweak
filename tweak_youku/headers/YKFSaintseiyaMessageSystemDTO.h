//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFSaintseiyaMessageBaseDTO.h"

@class NSString, YKFSaintseiyaMessageJumpInfoDTO;

@interface YKFSaintseiyaMessageSystemDTO : YKFSaintseiyaMessageBaseDTO
{
    YKFSaintseiyaMessageJumpInfoDTO *_jumpInfo;
    long long _readStatus;
    NSString *_sysContent;
    NSString *_sysIcon;
    NSString *_sysTitle;
}

@property(retain, nonatomic) NSString *sysTitle; // @synthesize sysTitle=_sysTitle;
@property(retain, nonatomic) NSString *sysIcon; // @synthesize sysIcon=_sysIcon;
@property(retain, nonatomic) NSString *sysContent; // @synthesize sysContent=_sysContent;
@property(nonatomic) long long readStatus; // @synthesize readStatus=_readStatus;
@property(retain, nonatomic) YKFSaintseiyaMessageJumpInfoDTO *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
- (void).cxx_destruct;

@end
