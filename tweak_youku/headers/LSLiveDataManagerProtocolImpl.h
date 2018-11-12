//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSLiveDataManagerProc.h"

@class LSLivePlayNewController, NSString;

@interface LSLiveDataManagerProtocolImpl : NSObject <LSLiveDataManagerProc>
{
    LSLivePlayNewController *_controller;
}

@property(nonatomic) __weak LSLivePlayNewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)removePmsgInteractListener:(id)arg1;
- (void)addPmsgInteractListener:(id)arg1;
- (id)readCallback;
- (id)readViewController;
- (id)readLiveInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

