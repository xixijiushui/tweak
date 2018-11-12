//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YYModel.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface LFRoomChatMessage : NSObject <YYModel>
{
    _Bool _isSuperAdmin;
    _Bool _showManage;
    _Bool _renew;
    _Bool _firstSendStar;
    long long _messageType;
    NSString *_userID;
    NSString *_userName;
    long long _userLevel;
    NSURL *_userAvatar;
    long long _anchorLevel;
    long long _userGender;
    NSArray *_medals;
    NSString *_message;
    NSString *_roomid;
    NSString *_anchorId;
    NSString *_loginUserID;
    NSString *_giftID;
    long long _giftCount;
    NSString *_toUserID;
    NSString *_toUserName;
    long long _coinCount;
    NSString *_systemMessage;
    NSNumber *_operate;
    NSString *_redpackHandName;
    NSString *_redpackHandUid;
    NSString *_redpackUid;
    NSString *_rid;
    NSDictionary *_dic;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)roomChatMessageWithDict:(id)arg1 messageName:(id)arg2;
@property(retain, nonatomic) NSDictionary *dic; // @synthesize dic=_dic;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSString *redpackUid; // @synthesize redpackUid=_redpackUid;
@property(retain, nonatomic) NSString *redpackHandUid; // @synthesize redpackHandUid=_redpackHandUid;
@property(retain, nonatomic) NSString *redpackHandName; // @synthesize redpackHandName=_redpackHandName;
@property(nonatomic) _Bool firstSendStar; // @synthesize firstSendStar=_firstSendStar;
@property(nonatomic) _Bool renew; // @synthesize renew=_renew;
@property(retain, nonatomic) NSNumber *operate; // @synthesize operate=_operate;
@property(retain, nonatomic) NSString *systemMessage; // @synthesize systemMessage=_systemMessage;
@property(nonatomic) long long coinCount; // @synthesize coinCount=_coinCount;
@property(retain, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;
@property(retain, nonatomic) NSString *toUserID; // @synthesize toUserID=_toUserID;
@property(nonatomic) long long giftCount; // @synthesize giftCount=_giftCount;
@property(retain, nonatomic) NSString *giftID; // @synthesize giftID=_giftID;
@property(nonatomic, getter=isShowManage) _Bool showManage; // @synthesize showManage=_showManage;
@property(retain, nonatomic) NSString *loginUserID; // @synthesize loginUserID=_loginUserID;
@property(retain, nonatomic) NSString *anchorId; // @synthesize anchorId=_anchorId;
@property(retain, nonatomic) NSString *roomid; // @synthesize roomid=_roomid;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) _Bool isSuperAdmin; // @synthesize isSuperAdmin=_isSuperAdmin;
@property(retain, nonatomic) NSArray *medals; // @synthesize medals=_medals;
@property(nonatomic) long long userGender; // @synthesize userGender=_userGender;
@property(nonatomic) long long anchorLevel; // @synthesize anchorLevel=_anchorLevel;
@property(retain, nonatomic) NSURL *userAvatar; // @synthesize userAvatar=_userAvatar;
@property(nonatomic) long long userLevel; // @synthesize userLevel=_userLevel;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

