//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface YKUDReqStatModel : NSObject
{
    NSString *_url;
    NSNumber *_downloadCount;
    NSNumber *_total;
    NSNumber *_fileSize;
    NSString *_extInfo;
    NSString *_ts;
}

@property(retain, nonatomic) NSString *ts; // @synthesize ts=_ts;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(retain, nonatomic) NSNumber *downloadCount; // @synthesize downloadCount=_downloadCount;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

