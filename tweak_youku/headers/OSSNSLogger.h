//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OSSDDAbstractLogger.h"

#import "OSSDDLogger.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface OSSNSLogger : OSSDDAbstractLogger <OSSDDLogger>
{
}

+ (id)sharedInstance;
- (void)logMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <OSSDDLogFormatter> logFormatter;
@property(readonly, nonatomic) NSString *loggerName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end

