//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LFRStreamModel : NSObject
{
    _Bool _status;
    NSString *_appId;
    NSString *_alias;
    NSString *_token;
    NSString *_userId;
    NSString *_plurl;
    long long _definition;
    NSString *_sc;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *sc; // @synthesize sc=_sc;
@property(nonatomic) long long definition; // @synthesize definition=_definition;
@property(copy, nonatomic) NSString *plurl; // @synthesize plurl=_plurl;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

@end
