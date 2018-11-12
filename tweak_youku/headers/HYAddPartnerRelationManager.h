//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HYPartnerRealtionViewModel;

@interface HYAddPartnerRelationManager : NSObject
{
    CDUnknownBlockType _completion;
    HYPartnerRealtionViewModel *_viewModel;
}

@property(retain, nonatomic) HYPartnerRealtionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)bindTaobao;
- (_Bool)hasSession;
- (void)sessionEnd;
- (void)sessionBegin;
- (void)handleUnbindTaobao;
- (void)handleGetRelationFailureWithError:(id)arg1;
- (void)handleGetRelationSuccess;
- (void)requestTaobaoRelation;
- (void)showImportTaobaoViewController;
- (void)addPartnerRelation;

@end

