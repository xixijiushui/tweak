//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ZPDChannelBridgeProtocol_YoukuAnalytics.h"

@class NSString;

@interface ZPDChannelBridgeImp_YoukuAnalytics : NSObject <ZPDChannelBridgeProtocol_YoukuAnalytics>
{
}

- (void)collectSPMPageClickWithPage:(id)arg1 controlName:(id)arg2 SPM:(id)arg3 extend:(id)arg4;
- (void)collectSPMPageEnd:(id)arg1 pageName:(id)arg2 nextPageProperties:(id)arg3 extend:(id)arg4;
- (void)collectSPMPageStart:(id)arg1 pageName:(id)arg2 spm:(id)arg3 extend:(id)arg4;
- (void)collectCustomEvent:(id)arg1 andPage:(id)arg2 andtarget:(id)arg3 andExtend:(id)arg4;
- (void)collectPageClickEventName:(id)arg1 InPage:(id)arg2 withTarget:(id)arg3 withRefercode:(id)arg4 withExtend:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

