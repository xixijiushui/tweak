//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XAdDataRequest.h"

@class NSString;

@interface XAdEmsRequest : XAdDataRequest
{
    NSString *_vid;
    long long _emsType;
    NSString *_reqId;
}

@property(copy, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(nonatomic) long long emsType; // @synthesize emsType=_emsType;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (id)getEmsParamsMd5Source;
- (id)httpHeaders;
- (id)method;
- (id)url;
- (id)parameters;

@end

