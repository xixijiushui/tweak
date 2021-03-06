//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WMLMonitorAlarm : NSObject
{
    NSString *_monitorModule;
    NSString *_monitorPoint;
    NSString *_arg;
    NSString *_errorCode;
    NSString *_errorMsg;
}

+ (id)failWithMonitorPoint:(id)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;
+ (id)successWithMonitorPoint:(id)arg1;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *arg; // @synthesize arg=_arg;
@property(copy, nonatomic) NSString *monitorPoint; // @synthesize monitorPoint=_monitorPoint;
@property(copy, nonatomic) NSString *monitorModule; // @synthesize monitorModule=_monitorModule;
- (void).cxx_destruct;
- (id)init;

@end

