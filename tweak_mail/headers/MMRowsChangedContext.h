//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@class MFSparseMutable64IndexSet, NSArray, NSSet;

@interface MMRowsChangedContext : NSDictionary
{
    NSSet *_insertedIndexPaths;
    NSSet *_removedIndexPaths;
    NSSet *_updatedIndexPaths;
    NSSet *_destinationIndexPaths;
    NSSet *_relocatedIndexPaths;
    NSArray *_addedMessageInfos;
    NSArray *_removedMessageInfos;
    MFSparseMutable64IndexSet *_mergedConversations;
    unsigned long long _startingMessageCount;
    unsigned long long _endingMessageCount;
}

@property(nonatomic) unsigned long long endingMessageCount; // @synthesize endingMessageCount=_endingMessageCount;
@property(nonatomic) unsigned long long startingMessageCount; // @synthesize startingMessageCount=_startingMessageCount;
@property(retain, nonatomic) MFSparseMutable64IndexSet *mergedConversations; // @synthesize mergedConversations=_mergedConversations;
@property(retain, nonatomic) NSArray *removedMessageInfos; // @synthesize removedMessageInfos=_removedMessageInfos;
@property(retain, nonatomic) NSArray *addedMessageInfos; // @synthesize addedMessageInfos=_addedMessageInfos;
@property(retain, nonatomic) NSSet *relocatedIndexPaths; // @synthesize relocatedIndexPaths=_relocatedIndexPaths;
@property(retain, nonatomic) NSSet *destinationIndexPaths; // @synthesize destinationIndexPaths=_destinationIndexPaths;
@property(retain, nonatomic) NSSet *updatedIndexPaths; // @synthesize updatedIndexPaths=_updatedIndexPaths;
@property(retain, nonatomic) NSSet *removedIndexPaths; // @synthesize removedIndexPaths=_removedIndexPaths;
@property(retain, nonatomic) NSSet *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
- (void)dealloc;
- (id)description;
- (_Bool)hasChanges;

@end

