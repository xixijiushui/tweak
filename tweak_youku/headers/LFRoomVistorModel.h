//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LFUserModel.h"

@class NSArray, NSDate, NSString, NSURL;

@interface LFRoomVistorModel : NSObject <LFUserModel>
{
    _Bool _newUser;
    int _gender;
    int _age;
    NSURL *_avatarURL;
    NSString *_ID;
    NSString *_nickname;
    unsigned long long _role;
    NSDate *_birthday;
    long long _anchorLevel;
    long long _enterEffect;
    long long _userLevel;
    NSArray *_medals;
    long long _patronusStatus;
    NSString *_time;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(nonatomic) long long patronusStatus; // @synthesize patronusStatus=_patronusStatus;
@property(retain, nonatomic) NSArray *medals; // @synthesize medals=_medals;
@property(nonatomic) _Bool newUser; // @synthesize newUser=_newUser;
@property(nonatomic) long long userLevel; // @synthesize userLevel=_userLevel;
@property(nonatomic) long long enterEffect; // @synthesize enterEffect=_enterEffect;
@property(nonatomic) long long anchorLevel; // @synthesize anchorLevel=_anchorLevel;
@property(copy, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) int age; // @synthesize age=_age;
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

