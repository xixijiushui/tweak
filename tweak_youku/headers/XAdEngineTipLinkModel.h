//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XAdEngineTipLinkModel : NSObject
{
    NSString *_statusCode;
    NSString *_desc;
    NSString *_optLink;
    NSString *_opt;
}

@property(copy, nonatomic) NSString *opt; // @synthesize opt=_opt;
@property(copy, nonatomic) NSString *optLink; // @synthesize optLink=_optLink;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (_Bool)hasValidData;
- (id)init;

@end

