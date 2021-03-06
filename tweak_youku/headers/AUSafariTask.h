//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "SFSafariViewControllerDelegate.h"

@class NSObject<OS_dispatch_semaphore>, NSString, SFSafariViewController;

@interface AUSafariTask : NSOperation <SFSafariViewControllerDelegate>
{
    _Bool _isTaskFinished;
    int _type;
    long long _failCount;
    NSString *_audid;
    CDUnknownBlockType _auSafariRefreshBlock;
    CDUnknownBlockType _auSafariSetBlock;
    NSObject<OS_dispatch_semaphore> *_delegateSemaphore;
    SFSafariViewController *_safariViewController;
}

@property(retain, nonatomic) SFSafariViewController *safariViewController; // @synthesize safariViewController=_safariViewController;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *delegateSemaphore; // @synthesize delegateSemaphore=_delegateSemaphore;
@property(copy, nonatomic) CDUnknownBlockType auSafariSetBlock; // @synthesize auSafariSetBlock=_auSafariSetBlock;
@property(copy, nonatomic) CDUnknownBlockType auSafariRefreshBlock; // @synthesize auSafariRefreshBlock=_auSafariRefreshBlock;
@property(nonatomic) _Bool isTaskFinished; // @synthesize isTaskFinished=_isTaskFinished;
@property(copy, nonatomic) NSString *audid; // @synthesize audid=_audid;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isFinished;
- (void)dealloc;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)mainThreadLoadSafariWithUrl:(id)arg1 viewController:(id)arg2;
- (_Bool)isSupport;
- (void)releaseSafariViewController;
- (id)viewControllerFromRootVC:(id)arg1;
- (void)tryGetRootViewControllerWithBlock:(CDUnknownBlockType)arg1;
- (void)cleanAudid;
- (void)setAudid;
- (void)refreshAudid;
- (void)main;
- (id)initWithType:(int)arg1 audid:(id)arg2 refreshBlock:(CDUnknownBlockType)arg3 setBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

