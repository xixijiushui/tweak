//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSMutableURLRequest, NSString, NSURLResponse;

@interface YTPlaylinkErrorInfo : NSObject
{
    NSString *_vid;
    NSDictionary *_dic;
    NSError *_error;
    NSURLResponse *_response;
    NSMutableURLRequest *_request;
    NSString *_responseString;
}

@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *dic; // @synthesize dic=_dic;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end

