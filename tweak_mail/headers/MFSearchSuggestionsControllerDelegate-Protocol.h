//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFSearchSuggestion, MFSearchSuggestionCategory, MFSearchSuggestionsController;

@protocol MFSearchSuggestionsControllerDelegate <NSObject>
- (void)searchSuggestionsController:(MFSearchSuggestionsController *)arg1 didSelectSuggestion:(MFSearchSuggestion *)arg2;
- (_Bool)searchSuggestionsController:(MFSearchSuggestionsController *)arg1 shouldShowSuggestionsForCategory:(MFSearchSuggestionCategory *)arg2;
@end

