//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DownloadFlagManager : NSObject
{
}

+ (void)cancelDownloadFlagRequestWithJSONClient:(id)arg1;
+ (void)mtop_requestRealDownloadFlagWithJSONClient:(id)arg1 tid:(id)arg2 page:(long long)arg3 timeout:(double)arg4 extendParams:(id)arg5 order:(int)arg6 cancelPrevious:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (void)mtop_requestRealDownloadFlagWithJSONClient:(id)arg1 tid:(id)arg2 page:(long long)arg3 timeout:(double)arg4 extendParams:(id)arg5 reverseOrder:(_Bool)arg6 cancelPrevious:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (void)requestRealDownloadFlagWithJSONClient:(id)arg1 tid:(id)arg2 page:(long long)arg3 timeout:(double)arg4 reverseOrder:(_Bool)arg5 cancelPrevious:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)requestRealDownloadFlagWithJSONClient:(id)arg1 tid:(id)arg2 page:(long long)arg3 reverseOrder:(_Bool)arg4 cancelPrevious:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)requestDownloadFlagWithJSONClient:(id)arg1 tid:(id)arg2 page:(long long)arg3 reverseOrder:(_Bool)arg4 cancelPrevious:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)requestDownloadFlagWithJSONClient:(id)arg1 vid:(id)arg2 cancelPreviousRequest:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)requestDownloadFlagWithJSONClient:(id)arg1 vid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

