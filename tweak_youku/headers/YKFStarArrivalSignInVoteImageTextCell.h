//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFStarArrivalBaseCell.h"

#import "YKFStarArrivalDetailSignInItemViewDelegate.h"

@class NSMutableArray, NSString, YKFStarArrivalSignInVoteImageTextViewModel, YKFStarArrivalSignInVoteTitleView;

@interface YKFStarArrivalSignInVoteImageTextCell : YKFStarArrivalBaseCell <YKFStarArrivalDetailSignInItemViewDelegate>
{
    YKFStarArrivalSignInVoteImageTextViewModel *_voteViewModel;
    YKFStarArrivalSignInVoteTitleView *_titleView;
    NSMutableArray *_itemsMArray;
}

+ (double)calculateHeight:(id)arg1;
@property(retain, nonatomic) NSMutableArray *itemsMArray; // @synthesize itemsMArray=_itemsMArray;
@property(retain, nonatomic) YKFStarArrivalSignInVoteTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) YKFStarArrivalSignInVoteImageTextViewModel *voteViewModel; // @synthesize voteViewModel=_voteViewModel;
- (void).cxx_destruct;
- (void)viewVoteImageWithIndex:(long long)arg1;
- (void)signVoteWithIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)bindViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

