//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFCommunityFandomIdRO.h"

@class NSString;

@interface YKFCommunityInformCompatRO : YKFCommunityFandomIdRO
{
    NSString *_extJson;
    long long _reason;
    long long _sourceId;
    long long _sourceType;
}

@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) long long sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *extJson; // @synthesize extJson=_extJson;
- (void).cxx_destruct;

@end

