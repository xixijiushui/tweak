//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseUserRequest.h"

@class NSString;

@interface HYExtendSessionRequest : HYBaseUserRequest
{
    NSString *_persistToken;
}

@property(copy, nonatomic) NSString *persistToken; // @synthesize persistToken=_persistToken;
- (void).cxx_destruct;
- (id)encrptPersistToken:(id)arg1;
- (id)toJsonDict;
- (id)init;

@end

