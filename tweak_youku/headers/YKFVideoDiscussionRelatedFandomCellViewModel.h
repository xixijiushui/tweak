//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFVideoDiscussionCellViewModel.h"

#import "YKFHorzScrollEntryViewVM.h"

@class NSArray, NSString;

@interface YKFVideoDiscussionRelatedFandomCellViewModel : YKFVideoDiscussionCellViewModel <YKFHorzScrollEntryViewVM>
{
    NSArray *_fandoms;
}

@property(retain, nonatomic) NSArray *fandoms; // @synthesize fandoms=_fandoms;
- (void).cxx_destruct;
- (id)ykf_entryList;
- (id)cellIdentifier;
- (id)cellClass;
- (double)heightOfCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

