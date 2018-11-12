//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EventWatcherProtocol.h"

@class DataSynchronizer, NSString;

@interface TBEventMonitorBase : NSObject <EventWatcherProtocol>
{
    DataSynchronizer *_dataSynchronizer;
}

@property(retain) DataSynchronizer *dataSynchronizer; // @synthesize dataSynchronizer=_dataSynchronizer;
- (void).cxx_destruct;
- (void)unRegisterWatchers;
- (void)registerWatchers;
- (id)initWithDataSynchronizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

