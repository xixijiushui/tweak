//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchBarDelegate.h"

@class MFAtomSearchBar, NSArray, UIPasteboard, UIView<MFAtomTextViewAtomLayout>;

@protocol MFAtomSearchBarDelegate <UISearchBarDelegate>
- (UIView<MFAtomTextViewAtomLayout> *)atomSearchBar:(MFAtomSearchBar *)arg1 atomViewForRepresentedObject:(id)arg2;

@optional
- (_Bool)atomSearchBar:(MFAtomSearchBar *)arg1 storeRepresentedObjects:(NSArray *)arg2 onPasteboard:(UIPasteboard *)arg3;
- (NSArray *)atomSearchBar:(MFAtomSearchBar *)arg1 representedObjectsFromPasteboard:(UIPasteboard *)arg2;
- (NSArray *)supportedPasteboardTypesForAtomSearchBar:(MFAtomSearchBar *)arg1;
- (void)searchButtonTappedForAtomSearchBar:(MFAtomSearchBar *)arg1;
- (void)atomSearchBar:(MFAtomSearchBar *)arg1 selectedScopeButtonIndexDidChange:(long long)arg2 forRepresentedObject:(id)arg3;
- (long long)atomSearchBar:(MFAtomSearchBar *)arg1 selectedScopeButtonIndexForRepresentedObject:(id)arg2;
- (NSArray *)atomSearchBar:(MFAtomSearchBar *)arg1 scopeButtonTitlesForRepresentedObject:(id)arg2;
@end

