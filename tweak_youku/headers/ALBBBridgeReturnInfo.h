//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALBBBridgeReturnData, NSString;

@interface ALBBBridgeReturnInfo : NSObject
{
    long long _code;
    NSString *_message;
    ALBBBridgeReturnData *_data;
}

@property(retain, nonatomic) ALBBBridgeReturnData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)init;

@end

