//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseReq.h"

@class ArkObject, QQApiObject;

@interface SendMessageToQQReq : QQBaseReq
{
    QQApiObject *_message;
    ArkObject *_arkMessage;
}

+ (id)reqWithContent:(id)arg1;
+ (id)reqWithArkContent:(id)arg1;
@property(retain, nonatomic) ArkObject *arkMessage; // @synthesize arkMessage=_arkMessage;
@property(retain, nonatomic) QQApiObject *message; // @synthesize message=_message;
- (void)dealloc;

@end

