//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PTSubscribeRequest : NSObject
{
    _Bool _isShow;
    long long _type;
    NSString *_showid;
    NSString *_uid;
    NSString *_from;
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *showid; // @synthesize showid=_showid;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithUid:(id)arg1 type:(long long)arg2 showid:(id)arg3 isshow:(_Bool)arg4 from:(id)arg5 identifier:(id)arg6;
- (id)initWithUid:(id)arg1 type:(long long)arg2 showid:(id)arg3 isshow:(_Bool)arg4 from:(id)arg5;
- (id)initWithUid:(id)arg1 type:(long long)arg2 showid:(id)arg3 isshow:(_Bool)arg4;
- (id)initWithUid:(id)arg1 type:(long long)arg2 showid:(id)arg3;
- (id)initWithUid:(id)arg1 type:(long long)arg2;
- (id)initWithUid:(id)arg1 from:(id)arg2;
- (id)initWithUid:(id)arg1;
- (id)init;

@end

