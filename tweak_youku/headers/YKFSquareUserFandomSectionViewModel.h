//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFSquareBSectionViewModel.h"

@class NSString, YKFSquareFollowedFandomsViewModel;

@interface YKFSquareUserFandomSectionViewModel : YKFSquareBSectionViewModel
{
    _Bool _isHideFollowed;
    YKFSquareFollowedFandomsViewModel *_followedFandomsViewModel;
    NSString *_followedFandomTips;
}

@property(retain, nonatomic) NSString *followedFandomTips; // @synthesize followedFandomTips=_followedFandomTips;
@property(retain, nonatomic) YKFSquareFollowedFandomsViewModel *followedFandomsViewModel; // @synthesize followedFandomsViewModel=_followedFandomsViewModel;
@property(nonatomic) _Bool isHideFollowed; // @synthesize isHideFollowed=_isHideFollowed;
- (void).cxx_destruct;
- (double)heightOfCell;

@end

