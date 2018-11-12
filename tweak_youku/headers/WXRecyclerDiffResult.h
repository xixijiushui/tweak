//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, NSMutableSet;

@interface WXRecyclerDiffResult : NSObject
{
    NSIndexSet *_insertSections;
    NSIndexSet *_deleteSections;
    NSIndexSet *_reloadSections;
    NSMutableSet *_deleteIndexPaths;
    NSMutableSet *_insertIndexPaths;
    NSMutableSet *_reloadIndexPaths;
}

@property(readonly, nonatomic) NSMutableSet *reloadIndexPaths; // @synthesize reloadIndexPaths=_reloadIndexPaths;
@property(readonly, nonatomic) NSMutableSet *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property(readonly, nonatomic) NSMutableSet *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
@property(readonly, nonatomic) NSIndexSet *reloadSections; // @synthesize reloadSections=_reloadSections;
@property(readonly, nonatomic) NSIndexSet *deleteSections; // @synthesize deleteSections=_deleteSections;
@property(readonly, nonatomic) NSIndexSet *insertSections; // @synthesize insertSections=_insertSections;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasChanges;
- (id)initWithInsertSections:(id)arg1 deleteSections:(id)arg2 reloadSections:(id)arg3 insertIndexPaths:(id)arg4 deleteIndexPaths:(id)arg5 reloadIndexPaths:(id)arg6;

@end

