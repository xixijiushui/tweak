//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChildBaseUserTrackProtocol.h"

@interface ChildBaseUserTrackImpl : NSObject <ChildBaseUserTrackProtocol>
{
}

- (void)collectSPMPageClickWithPage:(id)arg1 controlName:(id)arg2 SPM:(id)arg3 extend:(id)arg4;
- (void)collectSPMPageEnd:(id)arg1 pageName:(id)arg2 nextPageProperties:(id)arg3 extend:(id)arg4;
- (void)collectSPMPageStart:(id)arg1 pageName:(id)arg2 spm:(id)arg3 extend:(id)arg4;
- (void)collectCustomEventWithEventID:(id)arg1 pageName:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 args:(id)arg5;

@end

