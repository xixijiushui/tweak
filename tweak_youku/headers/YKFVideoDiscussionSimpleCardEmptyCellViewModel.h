//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFVideoDiscussionCellViewModel.h"

@class RACCommand;

@interface YKFVideoDiscussionSimpleCardEmptyCellViewModel : YKFVideoDiscussionCellViewModel
{
    RACCommand *_addCommentCommand;
}

@property(retain, nonatomic) RACCommand *addCommentCommand; // @synthesize addCommentCommand=_addCommentCommand;
- (void).cxx_destruct;
- (double)heightOfCell;
- (id)cellIdentifier;
- (id)cellClass;

@end

