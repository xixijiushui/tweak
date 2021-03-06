//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AILPPlayerProtocol.h"

@class NSString;

@interface AILPPlayerDefaultAdapter : NSObject <AILPPlayerProtocol>
{
}

- (void)updateFrame;
- (void)shutDown;
- (void)startUp;
- (void)setDlnaDevicesListener:(id)arg1;
- (void)setPtsInfoListener:(id)arg1;
- (void)setEventInfoListener:(id)arg1;
- (void)event:(id)arg1;
- (void)config:(id)arg1;
- (void)control:(id)arg1;
- (id)features;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

