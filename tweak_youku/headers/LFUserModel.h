//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LFUserModel.h"

@class NSDate, NSString, NSURL;

@interface LFUserModel : NSObject <LFUserModel>
{
    int _age;
    int _gender;
    NSString *_ID;
    NSString *_nickname;
    NSURL *_avatarURL;
    unsigned long long _role;
    NSDate *_birthday;
}

@property(copy, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
@property(copy, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(nonatomic) int age; // @synthesize age=_age;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
@property(readonly) _Bool isAuthor;
@property(readonly) _Bool isSuperAdministrator;
@property(readonly) _Bool isNormal;
@property(readonly) _Bool isRoomAdministrator;
- (_Bool)isEqualToUser:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

