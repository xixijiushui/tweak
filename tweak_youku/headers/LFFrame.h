//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface LFFrame : NSObject
{
    unsigned long long _timestamp;
    NSData *_data;
    NSData *_header;
}

@property(retain, nonatomic) NSData *header; // @synthesize header=_header;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;

@end
