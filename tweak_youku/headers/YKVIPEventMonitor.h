//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVIPBaseMonitor.h"

@interface YKVIPEventMonitor : YKVIPBaseMonitor
{
}

+ (void)exposeWithPageName:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 args:(id)arg4;
+ (void)collectSPMPageEnd:(id)arg1 pageName:(id)arg2 nextPageProperties:(id)arg3 extend:(id)arg4;
+ (void)collectSPMPageStart:(id)arg1 pageName:(id)arg2 spm:(id)arg3 extend:(id)arg4;
+ (void)collectSPMPageClickWithPage:(id)arg1 controlName:(id)arg2 SPM:(id)arg3 extend:(id)arg4;
+ (void)tLogWithType:(unsigned long long)arg1 key:(id)arg2 dictionary:(id)arg3;
+ (void)commitStatWithNode:(id)arg1 Status:(id)arg2 ErrorCode:(id)arg3 OrderId:(id)arg4;
+ (void)registerStat;

@end

