//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WMBHandlerInfo : NSObject
{
    _Bool _stringParamsCompatible;
    _Bool _secure;
    _Bool _threadSafe;
}

@property(nonatomic, getter=isThreadSafe) _Bool threadSafe; // @synthesize threadSafe=_threadSafe;
@property(nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_secure;
@property(nonatomic) _Bool stringParamsCompatible; // @synthesize stringParamsCompatible=_stringParamsCompatible;

@end

