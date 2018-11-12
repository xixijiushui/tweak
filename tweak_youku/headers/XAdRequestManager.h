//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XAdRequestQueue;

@interface XAdRequestManager : NSObject
{
    XAdRequestQueue *_requestQueue;
}

+ (id)defaultManager;
@property(retain, nonatomic) XAdRequestQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void).cxx_destruct;
- (void)requestWithUrl:(id)arg1 method:(id)arg2 httpHeaders:(id)arg3 parameters:(id)arg4 orderBy:(id)arg5 timeout:(double)arg6 retry:(unsigned long long)arg7 invokeType:(long long)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (id)init;

@end
