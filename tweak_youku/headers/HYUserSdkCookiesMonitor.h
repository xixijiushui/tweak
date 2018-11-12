//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface HYUserSdkCookiesMonitor : NSObject
{
    NSOperationQueue *_observeringQueue;
    NSOperationQueue *_handlerQueue;
    id <NSObject> _cookieUpdatedObserver;
}

+ (void)stopMonitor;
+ (void)startMonitor;
+ (id)sharedInstance;
@property(retain, nonatomic) id <NSObject> cookieUpdatedObserver; // @synthesize cookieUpdatedObserver=_cookieUpdatedObserver;
@property(retain, nonatomic) NSOperationQueue *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(retain, nonatomic) NSOperationQueue *observeringQueue; // @synthesize observeringQueue=_observeringQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopMonitor;
- (void)syncUserSessionCookie;
- (void)startMonitor;
- (id)init;

@end
