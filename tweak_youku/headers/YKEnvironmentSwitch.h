//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKEnvironmentSwitch : NSObject
{
    long long _currentEnvironmentType;
}

+ (id)sharedInstance;
@property(nonatomic) long long currentEnvironmentType; // @synthesize currentEnvironmentType=_currentEnvironmentType;
- (long long)switchEnvironmentType:(long long)arg1;
- (long long)ykEnvironmentType;

@end

