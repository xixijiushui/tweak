//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HLPCkey : NSObject
{
    NSString *_errorCode;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (id)getCkeyWithParams:(id)arg1;

@end
