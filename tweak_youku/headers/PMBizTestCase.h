//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PMBizTestCase : NSObject
{
    NSString *_topic;
    long long _bizCode;
}

+ (void)messageArrive:(id)arg1;
+ (void)start;
@property(nonatomic) long long bizCode; // @synthesize bizCode=_bizCode;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (void)subAndUnsub;
- (void)pullUnitTest;
- (void)reportTest;
- (void)arvTest;
- (void)mockMultiTopic;
- (void)pushMyself;
- (void)mockFlowLimit;
- (void)requestTopicStat;
- (void)requestTopicUser;
- (void)requestMsgList;
- (void)multiUnsubscribe;
- (void)multiSubscribe;
- (void)unsubscribe;
- (void)subscribe;
- (void)count;
- (void)sendDig;
- (void)sendJoinMsg;
- (void)sendMoneyMsg;
- (void)sendGiftMsg;
- (void)sendNewSysMsg;
- (void)sendSystemMsg;
- (void)sendBigTextMsg;
- (void)sendTextMsg;
- (void)registe;

@end

