//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, VIPCMSAction, VIPNCContentItemCheckModel, VIPNCContentItemUnCheckModel;

@interface VIPNCContentItemModel : NSObject
{
    NSString *_des;
    NSString *_icon;
    NSString *_title;
    VIPCMSAction *_action;
    long long _state;
    NSString *_type;
    VIPNCContentItemUnCheckModel *_unCheckModel;
    VIPNCContentItemCheckModel *_checkModel;
    long long _curIndex;
    long long _isVIP;
    NSArray *_thirdPartyLoginBindArr;
}

@property(retain, nonatomic) NSArray *thirdPartyLoginBindArr; // @synthesize thirdPartyLoginBindArr=_thirdPartyLoginBindArr;
@property(nonatomic) long long isVIP; // @synthesize isVIP=_isVIP;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(retain, nonatomic) VIPNCContentItemCheckModel *checkModel; // @synthesize checkModel=_checkModel;
@property(retain, nonatomic) VIPNCContentItemUnCheckModel *unCheckModel; // @synthesize unCheckModel=_unCheckModel;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) VIPCMSAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *des; // @synthesize des=_des;
- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;

@end
