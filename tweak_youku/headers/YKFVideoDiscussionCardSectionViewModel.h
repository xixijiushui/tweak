//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFVideoDiscussionSectionViewModel.h"

@class NSMutableArray, RACCommand;

@interface YKFVideoDiscussionCardSectionViewModel : YKFVideoDiscussionSectionViewModel
{
    RACCommand *_removeCardCommand;
    NSMutableArray *_weexCellViewModels;
    long long _tagId;
    long long _cardType;
}

+ (id)createInstanceWithDataModel:(id)arg1 atIndex:(long long)arg2 videoId:(id)arg3 showId:(id)arg4 tagId:(long long)arg5 cardType:(long long)arg6;
+ (id)createInstanceWithDataModel:(id)arg1 atIndex:(long long)arg2 videoId:(id)arg3 showId:(id)arg4 tagId:(long long)arg5;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) long long tagId; // @synthesize tagId=_tagId;
@property(retain, nonatomic) NSMutableArray *weexCellViewModels; // @synthesize weexCellViewModels=_weexCellViewModels;
@property(retain, nonatomic) RACCommand *removeCardCommand; // @synthesize removeCardCommand=_removeCardCommand;
- (void).cxx_destruct;
- (long long)lastPostId;
- (_Bool)isEmpty;
- (id)mixWithItems:(id)arg1 videoId:(id)arg2 showId:(id)arg3 reqId:(id)arg4 fromIndex:(long long)arg5 inSection:(long long)arg6;
- (void)appendWithDataModel:(id)arg1;
- (void)removeLocalDataModelAtIndex:(long long)arg1;
- (void)insertLocalDataModel:(id)arg1;
- (void)refreshIndex;
- (id)createEmptyCellViewModel;
- (id)init;

@end

