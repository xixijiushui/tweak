//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AILPRoomLiveConfiguration : NSObject
{
    NSString *_sign;
    NSArray *_quantity;
    NSArray *_micNums;
    NSString *_bizData;
    long long _format;
}

@property(nonatomic) long long format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *bizData; // @synthesize bizData=_bizData;
@property(copy, nonatomic) NSArray *micNums; // @synthesize micNums=_micNums;
@property(copy, nonatomic) NSArray *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
- (void).cxx_destruct;

@end

