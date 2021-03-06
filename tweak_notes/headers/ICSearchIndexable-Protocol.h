//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSSearchableItemAttributeSet, ICGenerateSearchIndexStringsOperation, NSArray, NSDate, NSDictionary, NSManagedObjectContext, NSManagedObjectID, NSString;

@protocol ICSearchIndexable <NSObject>
- (CSSearchableItemAttributeSet *)searchableItemAttributeSet;
- (NSString *)searchDomainIdentifier;
- (NSString *)searchableItemIdentifier;
- (_Bool)shouldUpdateIndexForChangedValues:(NSDictionary *)arg1;
- (NSArray *)searchIndexStringsOutHasAdditionalStrings:(_Bool *)arg1;
- (_Bool)isHiddenFromSearch;
- (_Bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultsSection;
- (NSDate *)modificationDate;
- (NSString *)searchIndexableTitleUsingContentTextIfNecessary:(NSString *)arg1;
- (NSString *)objectIdentifier;
- (NSString *)identifier;
- (long long)visibilityTestingType;
- (NSManagedObjectID *)objectID;
- (NSManagedObjectContext *)managedObjectContext;

@optional
- (void)releaseMemoryForIndexing;
- (_Bool)ignoreInSearchIndexer;
- (ICGenerateSearchIndexStringsOperation *)generateSearchIndexStringsOperation;
@end

