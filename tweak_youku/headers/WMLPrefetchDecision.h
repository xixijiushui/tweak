//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface WMLPrefetchDecision : NSObject
{
    unsigned long long _type;
    NSString *_handlerName;
    NSURL *_redirect;
    NSString *_externalKey;
}

@property(copy, nonatomic) NSString *externalKey; // @synthesize externalKey=_externalKey;
@property(retain, nonatomic) NSURL *redirect; // @synthesize redirect=_redirect;
@property(copy, nonatomic) NSString *handlerName; // @synthesize handlerName=_handlerName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

