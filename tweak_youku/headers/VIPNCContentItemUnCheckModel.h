//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, VIPCMSAction;

@interface VIPNCContentItemUnCheckModel : NSObject
{
    NSString *_des;
    NSString *_icon;
    NSString *_title;
    VIPCMSAction *_action;
}

@property(retain, nonatomic) VIPCMSAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *des; // @synthesize des=_des;
- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;

@end
