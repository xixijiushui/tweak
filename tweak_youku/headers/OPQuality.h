//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OPQuality : NSObject
{
    long long _type;
    long long _trueType;
    NSString *_name;
    NSString *_playerCode;
    NSString *_cacheCode;
}

+ (id)nameFromType:(long long)arg1;
+ (long long)typeFromCacheCode:(id)arg1;
+ (long long)typeFromPlayerCode:(id)arg1;
+ (id)playerCodeFromType:(long long)arg1;
@property(copy, nonatomic) NSString *cacheCode; // @synthesize cacheCode=_cacheCode;
@property(copy, nonatomic) NSString *playerCode; // @synthesize playerCode=_playerCode;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long trueType; // @synthesize trueType=_trueType;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

