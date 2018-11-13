//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchController.h"

@class MFAtomSearchBar;

@interface MFSearchController : UISearchController
{
    MFAtomSearchBar *_atomSearchBar;
}

- (void)_handleMailNavigationControllerShowViewController:(id)arg1;
- (void)_noteScopeBarVisibilityChanged;
- (void)_uninstallBackGestureRecognizer;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, retain, nonatomic) MFAtomSearchBar *searchBar;
- (void)dealloc;

// Remaining properties
@property(nonatomic) id <MFSearchControllerDelegate> delegate; // @dynamic delegate;
@property(nonatomic) id <MFSearchResultsUpdating> searchResultsUpdater; // @dynamic searchResultsUpdater;

@end

