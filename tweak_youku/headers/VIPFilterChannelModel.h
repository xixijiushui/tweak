//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VIPFilterChannelModel : NSObject
{
    _Bool _isSelection;
    NSString *_title;
    NSString *_category;
    long long _channelId;
    NSString *_type;
    long long _parentChannelId;
}

@property(nonatomic) long long parentChannelId; // @synthesize parentChannelId=_parentChannelId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool isSelection; // @synthesize isSelection=_isSelection;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setDataWithParameters:(id)arg1;

@end

