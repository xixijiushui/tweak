//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class LFAddress, NSDate, NSString, NSURL;

@interface LFProfile : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isShotVideo;
    _Bool _canSpeak;
    _Bool _canLogIn;
    _Bool _isAnchor;
    _Bool _isLogged;
    NSString *_userID;
    NSString *_username;
    NSURL *_avatarURL;
    NSString *_cityID;
    NSDate *_birthday;
    NSURL *_posterURL;
    NSString *_phoneNumber;
    NSString *_promo;
    NSDate *_firstShowDate;
    NSString *_introduction;
    NSDate *_refreshDate;
    LFAddress *_address;
    long long _gender;
    long long _levelOfAnchor;
    long long _level;
    long long _currentExperience;
    long long _upgradeExperience;
    double _balance;
    long long _unreadFeeds;
    id <LFProfileRoomScanHistory> _roomHistory;
}

+ (id)fetchCachedProfile;
+ (void)cacheProfile:(id)arg1;
+ (id)_profileWithDictionary:(id)arg1 error:(id *)arg2;
+ (void)fetchProfileWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)setCurrentProfile:(id)arg1;
+ (id)currentProfile;
+ (void)enableUpdatesOnAccessTokenChange:(_Bool)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <LFProfileRoomScanHistory> roomHistory; // @synthesize roomHistory=_roomHistory;
@property(nonatomic) long long unreadFeeds; // @synthesize unreadFeeds=_unreadFeeds;
@property(nonatomic) double balance; // @synthesize balance=_balance;
@property(nonatomic) long long upgradeExperience; // @synthesize upgradeExperience=_upgradeExperience;
@property(nonatomic) long long currentExperience; // @synthesize currentExperience=_currentExperience;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) long long levelOfAnchor; // @synthesize levelOfAnchor=_levelOfAnchor;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool isLogged; // @synthesize isLogged=_isLogged;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) _Bool canLogIn; // @synthesize canLogIn=_canLogIn;
@property(nonatomic) _Bool canSpeak; // @synthesize canSpeak=_canSpeak;
@property(nonatomic) _Bool isShotVideo; // @synthesize isShotVideo=_isShotVideo;
@property(copy, nonatomic) LFAddress *address; // @synthesize address=_address;
@property(copy, nonatomic) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(copy, nonatomic) NSDate *firstShowDate; // @synthesize firstShowDate=_firstShowDate;
@property(copy, nonatomic) NSString *promo; // @synthesize promo=_promo;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSURL *posterURL; // @synthesize posterURL=_posterURL;
@property(copy, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *cityID; // @synthesize cityID=_cityID;
@property(copy, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToProfile:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)asDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isRegistered;
- (id)initWithUserID:(id)arg1;
- (id)init;

@end

