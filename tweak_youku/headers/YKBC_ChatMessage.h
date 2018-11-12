//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, UIImage;

@interface YKBC_ChatMessage : NSObject
{
    _Bool _showDateLabel;
    _Bool _isOwner;
    _Bool _isStar;
    _Bool _isSenderPresenter;
    _Bool _isME;
    NSString *_messageId;
    NSString *_clientMsgId;
    NSString *_strIcon;
    NSString *_strId;
    NSString *_strTime;
    NSString *_strName;
    NSString *_senderUtdid;
    NSString *_strContent;
    UIImage *_picture;
    NSData *_voice;
    NSString *_strVoiceTime;
    long long _type;
    long long _from;
    long long _subscript;
    long long _senderYtid;
    NSString *_resourceUrl;
    NSString *_uploadfileId;
    long long _voiceFinishStatus;
    long long _voiceLength;
}

@property(nonatomic) long long voiceLength; // @synthesize voiceLength=_voiceLength;
@property(nonatomic) long long voiceFinishStatus; // @synthesize voiceFinishStatus=_voiceFinishStatus;
@property(retain, nonatomic) NSString *uploadfileId; // @synthesize uploadfileId=_uploadfileId;
@property(retain, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(nonatomic) _Bool isME; // @synthesize isME=_isME;
@property(nonatomic) long long senderYtid; // @synthesize senderYtid=_senderYtid;
@property(nonatomic) long long subscript; // @synthesize subscript=_subscript;
@property(nonatomic) _Bool isSenderPresenter; // @synthesize isSenderPresenter=_isSenderPresenter;
@property(nonatomic) _Bool isStar; // @synthesize isStar=_isStar;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(nonatomic) _Bool showDateLabel; // @synthesize showDateLabel=_showDateLabel;
@property(nonatomic) long long from; // @synthesize from=_from;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *strVoiceTime; // @synthesize strVoiceTime=_strVoiceTime;
@property(copy, nonatomic) NSData *voice; // @synthesize voice=_voice;
@property(copy, nonatomic) UIImage *picture; // @synthesize picture=_picture;
@property(copy, nonatomic) NSString *strContent; // @synthesize strContent=_strContent;
@property(copy, nonatomic) NSString *senderUtdid; // @synthesize senderUtdid=_senderUtdid;
@property(copy, nonatomic) NSString *strName; // @synthesize strName=_strName;
@property(copy, nonatomic) NSString *strTime; // @synthesize strTime=_strTime;
@property(copy, nonatomic) NSString *strId; // @synthesize strId=_strId;
@property(copy, nonatomic) NSString *strIcon; // @synthesize strIcon=_strIcon;
@property(copy, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (void)minuteOffSetStart:(id)arg1 end:(id)arg2;
- (id)changeTheDateString:(id)arg1;
- (void)setWithDict:(id)arg1;

@end

