//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HYOAuthSignInfo : NSObject
{
    NSString *_sdkVersion;
    NSString *_clientId;
    NSString *_source;
}

@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
- (void).cxx_destruct;
- (id)toJsonDict;

@end

