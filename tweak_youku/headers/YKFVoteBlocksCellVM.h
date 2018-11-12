//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFPlanetLinearLayoutBlocksCellVM.h"

#import "YKFVoteLogicProtocol.h"

@class NSArray, NSMutableArray, NSString, YKFCellOutlineBlockVM, YKFCellVoteActionBlockVM, YKFCommunityPostReplyServiceVoteAPI;

@interface YKFVoteBlocksCellVM : YKFPlanetLinearLayoutBlocksCellVM <YKFVoteLogicProtocol>
{
    _Bool finished;
    _Bool voted;
    _Bool _selectEnable;
    long long totalApproves;
    double _deadlineInterval;
    long long _optionCount;
    long long _optionalNumber;
    long long _participants;
    YKFCellOutlineBlockVM *_outlineBlockVM;
    NSArray *_voteItemBlockVMs;
    YKFCellVoteActionBlockVM *_voteActionBlockVM;
    YKFCommunityPostReplyServiceVoteAPI *_voteAPI;
    long long _selectedCount;
    NSMutableArray *_selectedOptions;
}

@property(retain, nonatomic) NSMutableArray *selectedOptions; // @synthesize selectedOptions=_selectedOptions;
@property(nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(nonatomic) _Bool selectEnable; // @synthesize selectEnable=_selectEnable;
@property(readonly, nonatomic) YKFCommunityPostReplyServiceVoteAPI *voteAPI; // @synthesize voteAPI=_voteAPI;
@property(retain, nonatomic) YKFCellVoteActionBlockVM *voteActionBlockVM; // @synthesize voteActionBlockVM=_voteActionBlockVM;
@property(retain, nonatomic) NSArray *voteItemBlockVMs; // @synthesize voteItemBlockVMs=_voteItemBlockVMs;
@property(retain, nonatomic) YKFCellOutlineBlockVM *outlineBlockVM; // @synthesize outlineBlockVM=_outlineBlockVM;
@property(nonatomic) long long participants; // @synthesize participants=_participants;
@property(nonatomic) long long optionalNumber; // @synthesize optionalNumber=_optionalNumber;
@property(nonatomic) long long optionCount; // @synthesize optionCount=_optionCount;
@property(nonatomic) double deadlineInterval; // @synthesize deadlineInterval=_deadlineInterval;
@property(nonatomic) _Bool voted; // @synthesize voted;
@property(nonatomic) _Bool finished; // @synthesize finished;
@property(nonatomic) long long totalApproves; // @synthesize totalApproves;
- (void).cxx_destruct;
- (id)subTitleWithTotalCount:(long long)arg1 deadline:(double)arg2;
- (void)updateApproves:(long long)arg1 withOptionId:(long long)arg2;
- (id)selectedOptionId;
- (void)handleVoteEvent;
- (void)checkSelectEnable;
- (void)shouldSelectVoteItemBlockVM:(id)arg1;
- (void)configureSignals;
- (void)custumBlockVms;
- (Class)cellClass;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

