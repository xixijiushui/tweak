//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTEBaseModel.h"

@class NSString;

@interface YTEUpsNodeUpsModel : YTEBaseModel
{
    NSString *_ups_client_netip;
    NSString *_ups_ts;
    NSString *_psid;
}

@property(copy, nonatomic) NSString *psid; // @synthesize psid=_psid;
@property(copy, nonatomic) NSString *ups_ts; // @synthesize ups_ts=_ups_ts;
@property(copy, nonatomic) NSString *ups_client_netip; // @synthesize ups_client_netip=_ups_client_netip;

@end

