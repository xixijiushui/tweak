//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SubscribeActionItem : NSObject
{
    _Bool _isShow;
    NSString *_uid;
    NSString *_showid;
    NSString *_actionOne;
    NSString *_actionTwo;
    NSString *_cancelAction;
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *cancelAction; // @synthesize cancelAction=_cancelAction;
@property(retain, nonatomic) NSString *actionTwo; // @synthesize actionTwo=_actionTwo;
@property(retain, nonatomic) NSString *actionOne; // @synthesize actionOne=_actionOne;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) NSString *showid; // @synthesize showid=_showid;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)initWithUid:(id)arg1 showid:(id)arg2 isshow:(_Bool)arg3 identifier:(id)arg4 actionOne:(id)arg5 actionTwo:(id)arg6 cancelAction:(id)arg7;

@end
