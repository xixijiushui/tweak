//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSJsonResponse.h"

@class ChannelJsonRequest, NSArray, YKChannelPageItem;

@interface ChannelJsonResponse : CMSJsonResponse
{
    NSArray *_filters;
}

@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (void)calculateMD5:(CDUnknownBlockType)arg1;
- (_Bool)isRequestPageItem:(id)arg1;
- (void)processResponse;

// Remaining properties
@property(retain, nonatomic) ChannelJsonRequest *request; // @dynamic request;
@property(retain, nonatomic) YKChannelPageItem *requestPageItem; // @dynamic requestPageItem;

@end
