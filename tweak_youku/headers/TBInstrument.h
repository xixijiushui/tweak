//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBInstrument : NSObject
{
}

+ (void)injectEvent:(id)arg1;
+ (_Bool)isMethodTracingEnabled;
+ (void)stopMethodTracing;
+ (void)startMethodTracing:(id)arg1 bufferSize:(long long)arg2 samplingInterval:(long long)arg3 useMmap:(_Bool)arg4;

@end

