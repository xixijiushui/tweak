//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseUserRequest.h"

@class NSString;

@interface HYFindPartnerInfoRequest : HYBaseUserRequest
{
    NSString *_ytid;
    NSString *_openUserId;
    NSString *_source;
}

@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *openUserId; // @synthesize openUserId=_openUserId;
@property(copy, nonatomic) NSString *ytid; // @synthesize ytid=_ytid;
- (void).cxx_destruct;
- (id)toJsonDict;
- (id)init;

@end

