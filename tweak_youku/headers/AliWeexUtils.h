//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliWeexUtils : NSObject
{
}

+ (id)parseURLParams:(id)arg1;
+ (id)handlePageName:(id)arg1;
+ (id)cacheForkey:(id)arg1;
+ (double)getStatusBarHeight;
+ (void)monitorAlarm:(id)arg1 monitorPoint:(id)arg2 success:(_Bool)arg3 errorCode:(id)arg4 errorMsg:(id)arg5 arg:(id)arg6;
+ (void)monitorWithNetWorkResponse:(id)arg1 instance:(id)arg2 response:(id)arg3 data:(id)arg4 error:(id)arg5;
+ (_Bool)isBlankString:(id)arg1;
+ (id)modelArrayWithJSON:(id)arg1 class:(Class)arg2;

@end

