//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFVideoDiscussionCellViewModel.h"

@class NSArray;

@interface YKFDiscussTopicsViewModel : YKFVideoDiscussionCellViewModel
{
    NSArray *_items;
    unsigned long long _showType;
}

@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)cellIdentifier;
- (id)cellClass;
- (double)heightOfCell;
- (id)initWithDataModel:(id)arg1 videoId:(id)arg2 showId:(id)arg3;

@end

