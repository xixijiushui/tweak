//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HYThirdPartyBindingInfo : NSObject
{
    NSString *_source;
    NSString *_openUserId;
    NSString *_nickname;
    NSString *_avatarUrl;
    NSString *_ytid;
}

+ (id)buildFromJsonDict:(id)arg1;
@property(retain, nonatomic) NSString *ytid; // @synthesize ytid=_ytid;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *openUserId; // @synthesize openUserId=_openUserId;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;

@end

