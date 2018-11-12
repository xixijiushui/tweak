//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PMStatusCenter : NSObject
{
    NSMutableDictionary *_topics;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *topics; // @synthesize topics=_topics;
- (void).cxx_destruct;
- (id)getAllTopicStatus;
- (id)getBizKey:(id)arg1;
- (id)getBizTag:(id)arg1;
- (long long)unbindCallback:(id)arg1 param:(id)arg2;
- (long long)bindCallback:(id)arg1 param:(id)arg2;
- (id)createTagStatus:(id)arg1;
- (id)getTagStatus:(id)arg1 bizTag:(id)arg2;
- (id)createTopicStatus:(id)arg1;
- (long long)checkStatusTopic:(id)arg1 param:(id)arg2;
- (id)getStatusTopic:(id)arg1;
- (id)getTagStatusByTopic:(id)arg1 bizTag:(id)arg2;
- (_Bool)getMsgArrive:(id)arg1 bizTag:(id)arg2;
- (void)pullMsgDone:(id)arg1 bizTag:(id)arg2;
- (void)msgArrive:(id)arg1 bizTag:(id)arg2;
- (id)getPullOffset:(id)arg1 bizTag:(id)arg2;
- (void)updatePull:(id)arg1 bizTag:(id)arg2 offset:(id)arg3;
- (id)getPullInfo:(id)arg1 bizTag:(id)arg2;
- (void)setPullInfo:(id)arg1 bizTag:(id)arg2 pullInfo:(id)arg3;
- (_Bool)needPullMsg:(id)arg1 bizTag:(id)arg2;
- (_Bool)haveListener:(id)arg1 bizTag:(id)arg2;
- (id)getCallback:(id)arg1;
- (long long)getStatus:(id)arg1 bizTag:(id)arg2;
- (void)setStatus:(id)arg1 bizTag:(id)arg2 status:(long long)arg3;
- (long long)unbind:(id)arg1;
- (long long)bind:(id)arg1;

@end
