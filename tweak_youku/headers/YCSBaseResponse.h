//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YCSBaseResponse : NSObject
{
    long long _errCode;
    NSString *_errStr;
}

@property(retain, nonatomic) NSString *errStr; // @synthesize errStr=_errStr;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
- (void).cxx_destruct;

@end

