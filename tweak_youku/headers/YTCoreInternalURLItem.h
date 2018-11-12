//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTCoreSchemeURLItem.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface YTCoreInternalURLItem : NSObject <YTCoreSchemeURLItem>
{
    NSString *url;
    long long itemid;
    double seconds;
    long long size;
    NSString *m3u8URL;
    NSString *m3u8FilePath;
}

@property(copy, nonatomic) NSString *m3u8FilePath; // @synthesize m3u8FilePath;
@property(copy, nonatomic) NSString *m3u8URL; // @synthesize m3u8URL;
@property(nonatomic) long long size; // @synthesize size;
@property(nonatomic) double seconds; // @synthesize seconds;
@property(nonatomic) long long itemid; // @synthesize itemid;
@property(copy, nonatomic) NSString *url; // @synthesize url;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDictionary *drmData;
@property(retain, nonatomic) NSMutableDictionary *drminfo;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *itemType;
@property(nonatomic) double milliseconds;
@property(readonly) Class superclass;

@end

