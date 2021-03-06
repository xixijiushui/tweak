//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface YKUDRequestStatManager : NSObject
{
    NSMutableDictionary *_statInfo;
    NSObject<OS_dispatch_queue> *_statQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statQueue; // @synthesize statQueue=_statQueue;
@property(retain, nonatomic) NSMutableDictionary *statInfo; // @synthesize statInfo=_statInfo;
- (void).cxx_destruct;
- (void)clearStatInfo;
- (void)checkSize:(id)arg1 withData:(id)arg2 expected:(long long)arg3;
- (void)doCommitStat:(id)arg1 downloadId:(id)arg2 finishSize:(long long)arg3 expected:(long long)arg4 andReason:(id)arg5 code:(long long)arg6 range:(id)arg7;
- (void)commit:(id)arg1 withResp:(id)arg2 andSize:(long long)arg3;
- (id)init;

@end

