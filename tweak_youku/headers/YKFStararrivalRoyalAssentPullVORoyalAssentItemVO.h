//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFStararrivalRoyalAssentPullVORoyalAssentItemVO : YKFAPIModel
{
    NSString *_artistName;
    long long _artistUserId;
    long long _type;
    long long _userId;
    NSString *_userName;
}

@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long artistUserId; // @synthesize artistUserId=_artistUserId;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (void).cxx_destruct;

@end

