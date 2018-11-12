//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSPageItem.h"

@class ChannelBaseContent, NSArray, NSDictionary, NSString, VIPCMSJsonRequest;

@interface VIPCMSPageItem : CMSPageItem
{
    long long _type;
    NSString *_identifier;
    NSString *_className;
    NSDictionary *_pageInfo;
    ChannelBaseContent *_channelContent;
    NSArray *_filters;
    NSString *_pageSpm;
    NSString *_channelKey;
    NSString *_headBackgroundImage;
    NSString *_backgroundColor;
    NSString *_fontColor;
}

@property(copy, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *headBackgroundImage; // @synthesize headBackgroundImage=_headBackgroundImage;
@property(copy, nonatomic) NSString *channelKey; // @synthesize channelKey=_channelKey;
@property(copy, nonatomic) NSString *pageSpm; // @synthesize pageSpm=_pageSpm;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) ChannelBaseContent *channelContent; // @synthesize channelContent=_channelContent;
@property(retain, nonatomic) NSDictionary *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)pvExtend;
- (id)spmAB;
- (id)pageName;
- (_Bool)isSamePage:(id)arg1;
- (_Bool)setupWithCMSInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) VIPCMSJsonRequest *request; // @dynamic request;

@end

