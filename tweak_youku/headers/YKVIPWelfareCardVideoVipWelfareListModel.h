//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, VIPCMSAction;

@interface YKVIPWelfareCardVideoVipWelfareListModel : NSObject
{
    NSString *_img;
    NSString *_ruleTitle;
    NSString *_wid;
    NSString *_tab;
    NSString *_receiveState;
    NSString *_num;
    NSString *_numAll;
    NSString *_ruleDesc;
    VIPCMSAction *_action;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_title;
    NSString *_status;
    NSString *_code;
}

@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) VIPCMSAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *ruleDesc; // @synthesize ruleDesc=_ruleDesc;
@property(retain, nonatomic) NSString *numAll; // @synthesize numAll=_numAll;
@property(retain, nonatomic) NSString *num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *receiveState; // @synthesize receiveState=_receiveState;
@property(retain, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(copy, nonatomic) NSString *wid; // @synthesize wid=_wid;
@property(copy, nonatomic) NSString *ruleTitle; // @synthesize ruleTitle=_ruleTitle;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
- (void).cxx_destruct;
- (void)setUpWithCMSInfo:(id)arg1;

@end

