//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFVideoDiscussionCellViewModel.h"

@class RACCommand;

@interface YKFVideoDiscussionEmptyCellViewModel : YKFVideoDiscussionCellViewModel
{
    long long _contentState;
    RACCommand *_reloadCommand;
}

@property(retain, nonatomic) RACCommand *reloadCommand; // @synthesize reloadCommand=_reloadCommand;
@property(nonatomic) long long contentState; // @synthesize contentState=_contentState;
- (void).cxx_destruct;
- (id)cellIdentifier;
- (id)cellClass;
- (double)heightOfCell;
- (id)init;

@end

