//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKBCParser.h"

@class NSString;

@interface BCRoomParticipant : NSObject <YKBCParser>
{
    long long _owner;
    long long _star;
    NSString *_utdid;
    long long _ytid;
    NSString *_avatar;
    NSString *_name;
    NSString *_starAvatar;
    NSString *_starName;
    long long _wcAttrType;
    long long _wcAttrValue;
}

@property(nonatomic) long long wcAttrValue; // @synthesize wcAttrValue=_wcAttrValue;
@property(nonatomic) long long wcAttrType; // @synthesize wcAttrType=_wcAttrType;
@property(copy, nonatomic) NSString *starName; // @synthesize starName=_starName;
@property(copy, nonatomic) NSString *starAvatar; // @synthesize starAvatar=_starAvatar;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) long long ytid; // @synthesize ytid=_ytid;
@property(copy, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(nonatomic) long long star; // @synthesize star=_star;
@property(nonatomic) long long owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)parseObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

