//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ZCacheResourceInfo : NSObject
{
    NSString *_md5;
    NSDictionary *_header;
}

+ (id)empty;
@property(readonly, copy, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(readonly, copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;
- (_Bool)verifyResource:(id)arg1;
- (id)initWithMD5:(id)arg1 withHeader:(id)arg2;

@end

