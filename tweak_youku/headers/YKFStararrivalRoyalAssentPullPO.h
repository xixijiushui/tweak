//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFStararrivalRoyalAssentPullVORoyalAssentItemVO>;

@interface YKFStararrivalRoyalAssentPullPO : YKFAPIModel
{
    long long _currUserId;
    NSArray<YKFStararrivalRoyalAssentPullVORoyalAssentItemVO> *_royalAssents;
    long long _timestamp;
}

@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSArray<YKFStararrivalRoyalAssentPullVORoyalAssentItemVO> *royalAssents; // @synthesize royalAssents=_royalAssents;
@property(nonatomic) long long currUserId; // @synthesize currUserId=_currUserId;
- (void).cxx_destruct;

@end
