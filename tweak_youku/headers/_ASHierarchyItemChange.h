//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASDebugDescriptionProvider.h"
#import "ASDescriptionProvider.h"

@class NSArray;

@interface _ASHierarchyItemChange : NSObject <ASDescriptionProvider, ASDebugDescriptionProvider>
{
    unsigned long long _animationOptions;
    NSArray *_indexPaths;
    long long _changeType;
}

+ (id)smallDescriptionForItemChanges:(id)arg1;
+ (void)sortAndCoalesceItemChanges:(id)arg1 ignoringChangesInSections:(id)arg2;
+ (void)ensureItemChanges:(id)arg1 ofSameType:(long long)arg2;
+ (id)sectionToIndexSetMapFromChanges:(id)arg1;
@property(readonly, nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(readonly, nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
- (void).cxx_destruct;
- (id)propertiesForDebugDescription;
- (id)propertiesForDescription;
- (id)debugDescription;
- (id)description;
- (id)changeByFinalizingType;
- (id)initWithChangeType:(long long)arg1 indexPaths:(id)arg2 animationOptions:(unsigned long long)arg3 presorted:(_Bool)arg4;

@end

