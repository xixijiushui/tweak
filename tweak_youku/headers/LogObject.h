//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LogObject : NSObject
{
    long long _logLevel;
    NSString *_type;
    NSString *_module;
    NSString *_tag;
    NSString *_curTimeString;
    NSString *_content;
    NSString *_exception;
}

@property(copy, nonatomic) NSString *exception; // @synthesize exception=_exception;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *curTimeString; // @synthesize curTimeString=_curTimeString;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long logLevel; // @synthesize logLevel=_logLevel;
- (void).cxx_destruct;

@end
