//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol ZPDChannelBridgeProtocol_YoukuAnalytics <NSObject>
- (void)collectSPMPageClickWithPage:(NSString *)arg1 controlName:(NSString *)arg2 SPM:(NSString *)arg3 extend:(NSDictionary *)arg4;
- (void)collectSPMPageEnd:(id)arg1 pageName:(NSString *)arg2 nextPageProperties:(NSDictionary *)arg3 extend:(NSDictionary *)arg4;
- (void)collectSPMPageStart:(id)arg1 pageName:(NSString *)arg2 spm:(NSString *)arg3 extend:(NSDictionary *)arg4;
- (void)collectCustomEvent:(NSString *)arg1 andPage:(NSString *)arg2 andtarget:(NSString *)arg3 andExtend:(NSDictionary *)arg4;
- (void)collectPageClickEventName:(NSString *)arg1 InPage:(NSString *)arg2 withTarget:(NSString *)arg3 withRefercode:(NSString *)arg4 withExtend:(NSDictionary *)arg5;
@end
