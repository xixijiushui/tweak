//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MKTConfigCenter : NSObject
{
}

+ (_Bool)enableMonitorDB;
+ (_Bool)startArvUpload;
+ (id)getPMSendChannel;
+ (_Bool)sendSwitch;
+ (id)getPullErrorMax;
+ (id)getLimitDelayTime;
+ (id)getPullTimeout;
+ (id)getPullChkTimer;
+ (id)getPullTimer;
+ (id)getForcePullMode;
+ (id)getMonitorDefaultTime;
+ (id)getArvMod;
+ (id)getArvRight;
+ (id)getArvLeft;
+ (_Bool)getArvOpen;
+ (long long)getMonitorAll;
+ (_Bool)getMonitorArvMsgNoPull;
+ (_Bool)getMonitorArvMsg;
+ (long long)getArvMonitorConfig;
+ (id)getSybTypeLimitConfig;
+ (id)getConfigByGroupName:(id)arg1 key:(id)arg2;
+ (id)sharedInstance;
- (id)getValueByGroup:(id)arg1 key:(id)arg2;

@end

