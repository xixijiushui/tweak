//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSLiveWxController.h"

@class NSString;

@interface LSLivePlayWxController : LSLiveWxController
{
    _Bool _isWeexFirstLoad;
    NSString *_liveId;
}

+ (_Bool)canDowngrade;
@property(nonatomic) _Bool isWeexFirstLoad; // @synthesize isWeexFirstLoad=_isWeexFirstLoad;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;
- (void)orangeRender;
- (void)requestRender;
- (void)renderOnLoad;
- (void)createdWithPage;
- (id)getAppMonitorParameters;
- (id)init;

@end

