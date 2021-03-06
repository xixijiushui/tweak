//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSLiveIteming.h"
#import "LSParser.h"

@class NSString;

@interface LSClienLiveItem : NSObject <LSLiveIteming, LSParser>
{
    _Bool _isShowLiveCount;
    _Bool _isSubScrib;
    _Bool _isPaid;
    _Bool _isShowSubscribeCount;
    _Bool _isShowLiveNoticeCount;
    _Bool _isVIP;
    _Bool _isToday;
    NSString *_title;
    NSString *_liveID;
    NSString *_categoryID;
    NSString *_userID;
    NSString *_videoDescription;
    NSString *_linkURL;
    NSString *_imageURL_Phone;
    NSString *_imageURL_Pad;
    NSString *_imageURL;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_subTitle;
    unsigned long long _liveState;
    unsigned long long _liveSoure;
    unsigned long long _livePlayWay;
    long long _liveUserCount;
    long long _subscribeCount;
    long long _paidCount;
    long long _hotCount;
}

@property(nonatomic) _Bool isToday; // @synthesize isToday=_isToday;
@property(nonatomic) _Bool isVIP; // @synthesize isVIP=_isVIP;
@property(nonatomic) _Bool isShowLiveNoticeCount; // @synthesize isShowLiveNoticeCount=_isShowLiveNoticeCount;
@property(nonatomic) _Bool isShowSubscribeCount; // @synthesize isShowSubscribeCount=_isShowSubscribeCount;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(nonatomic) _Bool isSubScrib; // @synthesize isSubScrib=_isSubScrib;
@property(nonatomic) long long hotCount; // @synthesize hotCount=_hotCount;
@property(nonatomic) long long paidCount; // @synthesize paidCount=_paidCount;
@property(nonatomic) long long subscribeCount; // @synthesize subscribeCount=_subscribeCount;
@property(nonatomic) _Bool isShowLiveCount; // @synthesize isShowLiveCount=_isShowLiveCount;
@property(nonatomic) long long liveUserCount; // @synthesize liveUserCount=_liveUserCount;
@property(nonatomic) unsigned long long livePlayWay; // @synthesize livePlayWay=_livePlayWay;
@property(nonatomic) unsigned long long liveSoure; // @synthesize liveSoure=_liveSoure;
@property(nonatomic) unsigned long long liveState; // @synthesize liveState=_liveState;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *imageURL_Pad; // @synthesize imageURL_Pad=_imageURL_Pad;
@property(copy, nonatomic) NSString *imageURL_Phone; // @synthesize imageURL_Phone=_imageURL_Phone;
@property(copy, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
@property(copy, nonatomic) NSString *videoDescription; // @synthesize videoDescription=_videoDescription;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *liveID; // @synthesize liveID=_liveID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)watchPeopleSubTitle;
- (unsigned long long)getCurrentState;
- (_Bool)shouldDisplayToady;
- (void)parseObject:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *day_desc;
@property(copy, nonatomic) NSString *day_time;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *desc;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <LSCMSExtraing> extra;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *itemID;
@property(copy, nonatomic) NSString *lfRoomID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *userAvatar;
@property(copy, nonatomic) NSString *userName;

@end

