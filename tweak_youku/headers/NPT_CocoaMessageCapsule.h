//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NPT_CocoaMessageCapsule : NSObject
{
    struct NPT_Message *message;
    struct NPT_MessageHandler *handler;
    struct NPT_MessageHandlerProxy *proxy;
}

- (void)handle;
- (void)dealloc;
- (id)initWithMessage:(struct NPT_Message *)arg1 andHandler:(struct NPT_MessageHandler *)arg2;

@end

