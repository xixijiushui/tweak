//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASDescriptionProvider.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSArray, NSDictionary, NSMapTable, NSString;

@interface ASElementMap : NSObject <ASDescriptionProvider, NSCopying, NSFastEnumeration>
{
    NSArray *_sections;
    NSMapTable *_elementToIndexPathMap;
    struct NSArray *_sectionsOfItems;
    struct NSDictionary *_supplementaryElements;
}

@property(readonly, nonatomic) NSDictionary *supplementaryElements; // @synthesize supplementaryElements=_supplementaryElements;
@property(readonly, nonatomic) NSArray *sectionsOfItems; // @synthesize sectionsOfItems=_sectionsOfItems;
@property(readonly, nonatomic) NSMapTable *elementToIndexPathMap; // @synthesize elementToIndexPathMap=_elementToIndexPathMap;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (_Bool)itemIndexPathIsValid:(id)arg1 assert:(_Bool)arg2 item:(out long long *)arg3 section:(out long long *)arg4;
- (_Bool)sectionIndexIsValid:(long long)arg1 assert:(_Bool)arg2;
- (id)propertiesForDescription;
- (id)description;
@property(readonly) NSString *smallDescription;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)convertIndexPath:(id)arg1 fromMap:(id)arg2;
- (id)elementForLayoutAttributes:(id)arg1;
- (id)supplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)elementForItemAtIndexPath:(id)arg1;
- (id)indexPathForElementIfCell:(id)arg1;
- (id)indexPathForElement:(id)arg1;
- (id)contextForSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
@property(readonly, copy) NSArray *supplementaryElementKinds;
@property(readonly) long long numberOfSections;
@property(readonly, copy) NSArray *itemElements;
@property(readonly, copy) NSArray *itemIndexPaths;
- (id)initWithSections:(id)arg1 items:(struct NSArray *)arg2 supplementaryElements:(struct NSDictionary *)arg3;
- (id)init;

@end
