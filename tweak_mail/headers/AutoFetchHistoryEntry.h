//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AutoFetchHistoryEntry : NSObject
{
    NSString *_mailboxPath;
    unsigned long long _frequency;
    double _lastFetchTime;
    double _lastFetchDuration;
}

@property(nonatomic) double lastFetchDuration; // @synthesize lastFetchDuration=_lastFetchDuration;
@property(nonatomic) double lastFetchTime; // @synthesize lastFetchTime=_lastFetchTime;
@property(nonatomic) unsigned long long frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) NSString *mailboxPath; // @synthesize mailboxPath=_mailboxPath;
- (void)dealloc;
- (id)initWithMailboxPath:(id)arg1;

@end

