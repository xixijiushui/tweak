//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIASBaseComponent.h"

#import "AIASInteractMsgProtocol.h"

@class AIANoticeView, NSString;

@interface AIANoticeComponent : AIASBaseComponent <AIASInteractMsgProtocol>
{
    AIANoticeView *_noticeView;
}

@property(retain, nonatomic) AIANoticeView *noticeView; // @synthesize noticeView=_noticeView;
- (void).cxx_destruct;
- (void)onDisableStatusChange:(_Bool)arg1;
- (void)onRevMsg:(id)arg1;
- (id)getView;
- (void)initFinish;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

