//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol YTEngineRequestDataSource <NSObject>
- (long long)ctu;
- (id <YTEngineHistoryInfo>)playHistoryWithVid:(NSString *)arg1;
- (_Bool)needFreeFlow;
- (_Bool)isVipUser;
- (NSString *)userId;
- (NSDictionary *)adCookieValue;
- (NSString *)adext;
- (NSDictionary *)adParams;
- (NSDictionary *)videoParams;
- (void)timestampInvalid:(long long)arg1;
- (long long)timestamp;
- (NSString *)userAgent;
@end

