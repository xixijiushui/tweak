//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VICSpmInfoProtocol.h"

@class NSString;

@interface VICSpmInfoAdapter : NSObject <VICSpmInfoProtocol>
{
}

- (void)collectALiCustomEventWithEventIDSpm:(id)arg1 controlName:(id)arg2 property:(id)arg3;
- (void)collectSPMPageClick:(id)arg1 controlName:(id)arg2 property:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

