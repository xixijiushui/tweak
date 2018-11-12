//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString;

@interface ALBBResponse : NSObject
{
    _Bool _success;
    NSError *_resultError;
    NSString *_actionType;
    NSString *_code;
    NSString *_codeGroup;
    NSString *_message;
    NSString *_msgCode;
    NSString *_msgInfo;
    NSDictionary *_returnValue;
}

@property(retain, nonatomic) NSDictionary *returnValue; // @synthesize returnValue=_returnValue;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *msgInfo; // @synthesize msgInfo=_msgInfo;
@property(copy, nonatomic) NSString *msgCode; // @synthesize msgCode=_msgCode;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *codeGroup; // @synthesize codeGroup=_codeGroup;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
- (void).cxx_destruct;
- (id)init:(id)arg1 error:(id)arg2;

@end

