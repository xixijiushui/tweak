//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKAConfiguration : NSObject
{
    _Bool _isLogging;
    unsigned long long _buildType;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long buildType; // @synthesize buildType=_buildType;
@property(nonatomic) _Bool isLogging; // @synthesize isLogging=_isLogging;
- (id)init;

@end
