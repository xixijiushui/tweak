//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface LFRPGrabResponseModel : NSObject
{
    _Bool _followed;
    NSString *_rid;
    long long _grabType;
    double _sendTime;
    NSString *_limitLevel;
    double _takeTime;
    long long _grabCoins;
    NSArray *_grabUsers;
    NSString *_nickname;
    NSString *_userId;
    NSString *_avatar;
    unsigned long long _partCount;
    long long _coins;
    unsigned long long _restPartCount;
    long long _restCoins;
    NSString *_message;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long restCoins; // @synthesize restCoins=_restCoins;
@property(nonatomic) unsigned long long restPartCount; // @synthesize restPartCount=_restPartCount;
@property(nonatomic) long long coins; // @synthesize coins=_coins;
@property(nonatomic) unsigned long long partCount; // @synthesize partCount=_partCount;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic, getter=isFollowed) _Bool followed; // @synthesize followed=_followed;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSArray *grabUsers; // @synthesize grabUsers=_grabUsers;
@property(nonatomic) long long grabCoins; // @synthesize grabCoins=_grabCoins;
@property(nonatomic) double takeTime; // @synthesize takeTime=_takeTime;
@property(retain, nonatomic) NSString *limitLevel; // @synthesize limitLevel=_limitLevel;
@property(nonatomic) double sendTime; // @synthesize sendTime=_sendTime;
@property(nonatomic) long long grabType; // @synthesize grabType=_grabType;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

