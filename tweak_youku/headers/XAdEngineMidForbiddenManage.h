//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XAdEngineMidForbiddenManage : NSObject
{
    _Bool _canHandleMid;
    long long _mForbidenTime;
    long long _mForbidenStartTime;
}

@property(nonatomic) _Bool canHandleMid; // @synthesize canHandleMid=_canHandleMid;
@property(nonatomic) long long mForbidenStartTime; // @synthesize mForbidenStartTime=_mForbidenStartTime;
@property(nonatomic) long long mForbidenTime; // @synthesize mForbidenTime=_mForbidenTime;
- (void)reset;
- (void)continueForbidenTimer;
- (void)suspendForbidenTimer;
- (void)resetForbiddenMidAdTimer;
- (void)startForbiddenMidAdTimer;
- (id)init;

@end

