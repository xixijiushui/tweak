//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseListViewModel.h"

@class NSMutableArray, NSString;

@interface YKFStarArrivalDetailSignInViewModel : ALMBaseListViewModel
{
    NSMutableArray *_sectionHeaderViewModelMArray;
    NSMutableArray *_sectionShareViewModelMArray;
    NSMutableArray *_sectionVoteViewModelMArray;
    NSMutableArray *_sectionHotTalkViewModelMArray;
    NSMutableArray *_sectionStarSectionMArray;
    NSMutableArray *_voteViewModelMArray;
    NSString *_videoURL;
}

@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSMutableArray *voteViewModelMArray; // @synthesize voteViewModelMArray=_voteViewModelMArray;
@property(retain, nonatomic) NSMutableArray *sectionStarSectionMArray; // @synthesize sectionStarSectionMArray=_sectionStarSectionMArray;
@property(retain, nonatomic) NSMutableArray *sectionHotTalkViewModelMArray; // @synthesize sectionHotTalkViewModelMArray=_sectionHotTalkViewModelMArray;
@property(retain, nonatomic) NSMutableArray *sectionVoteViewModelMArray; // @synthesize sectionVoteViewModelMArray=_sectionVoteViewModelMArray;
@property(retain, nonatomic) NSMutableArray *sectionShareViewModelMArray; // @synthesize sectionShareViewModelMArray=_sectionShareViewModelMArray;
@property(retain, nonatomic) NSMutableArray *sectionHeaderViewModelMArray; // @synthesize sectionHeaderViewModelMArray=_sectionHeaderViewModelMArray;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end
