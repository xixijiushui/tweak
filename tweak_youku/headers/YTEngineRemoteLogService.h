//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YTEngineRemoteLogService : NSObject
{
}

+ (id)sharedInstance;
- (void)immediateLogModule:(long long)arg1 extra:(id)arg2;
- (void)logModule:(long long)arg1 extra:(id)arg2;
- (id)toJSONString:(id)arg1;
- (id)moduleValue:(long long)arg1;

@end

