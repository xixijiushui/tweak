//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseListViewModel.h"

#import "YKFHorzScrollEntryViewVM.h"

@class NSArray, NSString;

@interface YKFSquareFollowedFandomsViewModel : ALMBaseListViewModel <YKFHorzScrollEntryViewVM>
{
    NSArray *_fandoms;
    long long _totalCount;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)createViewModelWithDataModel:(id)arg1 iterationBlock:(CDUnknownBlockType)arg2;
+ (void)routeToFandomDetail:(id)arg1;
+ (id)createMoreEntryItemVMWithURL:(id)arg1;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSArray *fandoms; // @synthesize fandoms=_fandoms;
- (void).cxx_destruct;
- (id)ykf_entryList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

