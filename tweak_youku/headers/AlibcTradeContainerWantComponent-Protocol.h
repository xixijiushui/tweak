//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AlibcTradeContainerComponent.h"

@class AlibcTradeTaokeParams, NSDictionary, NSString;

@protocol AlibcTradeContainerWantComponent <AlibcTradeContainerComponent>
- (void)asyncExecuteWithQueryParams:(NSDictionary *)arg1 action:(NSString *)arg2 taokeParams:(AlibcTradeTaokeParams *)arg3 trackParams:(NSDictionary *)arg4 successBlock:(void (^)(id))arg5 failedBlock:(void (^)(ALiNetError *, id))arg6;
- (long long)getSupportDataType;
@end

