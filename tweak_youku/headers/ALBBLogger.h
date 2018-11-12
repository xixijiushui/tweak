//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ILogger.h"

@class NSString;

@interface ALBBLogger : NSObject <ILogger>
{
    _Bool _innerLogEnabled;
}

@property _Bool innerLogEnabled; // @synthesize innerLogEnabled=_innerLogEnabled;
- (_Bool)getLogEnabled;
- (void)setLogEnabled:(_Bool)arg1;
- (void)AlibabaAuthLogInfo:(id)arg1;
- (void)AlibabaAuthLogWarning:(id)arg1;
- (void)AlibabaAuthLogDebug:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

