//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFMultipartFormData.h"

@class AFMultipartBodyStream, NSMutableURLRequest, NSString;

@interface AFStreamingMultipartFormData : NSObject <AFMultipartFormData>
{
    NSMutableURLRequest *_request;
    AFMultipartBodyStream *_bodyStream;
    unsigned long long _stringEncoding;
    NSString *_boundary;
}

@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain, nonatomic) AFMultipartBodyStream *bodyStream; // @synthesize bodyStream=_bodyStream;
@property(copy, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)requestByFinalizingMultipartFormData;
- (void)throttleBandwidthWithPacketSize:(unsigned long long)arg1 delay:(double)arg2;
- (void)appendPartWithHeaders:(id)arg1 body:(id)arg2;
- (void)appendPartWithFormData:(id)arg1 name:(id)arg2;
- (void)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
- (void)appendPartWithInputStream:(id)arg1 name:(id)arg2 fileName:(id)arg3 length:(unsigned long long)arg4 mimeType:(id)arg5;
- (_Bool)appendPartWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 error:(id *)arg5;
- (_Bool)appendPartWithFileURL:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)initWithURLRequest:(id)arg1 stringEncoding:(unsigned long long)arg2;

@end

