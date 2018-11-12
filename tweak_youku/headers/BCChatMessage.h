//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKBCParser.h"

@class NSString;

@interface BCChatMessage : NSObject <YKBCParser>
{
    _Bool _arrived;
    int _senderIsOwner;
    int _senderIsStar;
    int _isSenderPresenter;
    NSString *_messageId;
    NSString *_clientMsgId;
    long long _timestamp;
    long long _id;
    NSString *_contentType;
    NSString *_text;
    NSString *_resourceUrl;
    NSString *_senderAvatar;
    long long _senderYtid;
    NSString *_senderUtdid;
    NSString *_senderName;
    long long _imageWidth;
    long long _imageHeight;
    long long _voiceLength;
    long long _senderType;
    long long _subscript;
    NSString *_uploadfileId;
    long long _voiceFinishStatus;
    NSString *_bizType;
}

@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) long long voiceFinishStatus; // @synthesize voiceFinishStatus=_voiceFinishStatus;
@property(retain, nonatomic) NSString *uploadfileId; // @synthesize uploadfileId=_uploadfileId;
@property(nonatomic) long long subscript; // @synthesize subscript=_subscript;
@property(nonatomic) long long senderType; // @synthesize senderType=_senderType;
@property(nonatomic) long long voiceLength; // @synthesize voiceLength=_voiceLength;
@property(nonatomic) long long imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) long long imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) _Bool arrived; // @synthesize arrived=_arrived;
@property(copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(nonatomic) int isSenderPresenter; // @synthesize isSenderPresenter=_isSenderPresenter;
@property(nonatomic) int senderIsStar; // @synthesize senderIsStar=_senderIsStar;
@property(nonatomic) int senderIsOwner; // @synthesize senderIsOwner=_senderIsOwner;
@property(copy, nonatomic) NSString *senderUtdid; // @synthesize senderUtdid=_senderUtdid;
@property(nonatomic) long long senderYtid; // @synthesize senderYtid=_senderYtid;
@property(copy, nonatomic) NSString *senderAvatar; // @synthesize senderAvatar=_senderAvatar;
@property(copy, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (void)parseObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

