//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@interface NSManagedObject (MagicalRecord_DataImport)
+ (id)MR_importFromArray:(id)arg1 inContext:(id)arg2;
+ (id)MR_importFromArray:(id)arg1;
+ (id)MR_updateFromDictionary:(id)arg1;
+ (id)MR_updateFromDictionary:(id)arg1 inContext:(id)arg2;
+ (id)MR_importFromDictionary:(id)arg1;
+ (id)MR_importFromDictionary:(id)arg1 inContext:(id)arg2;
- (void)MR_updateValuesForKeysWithDictionary:(id)arg1;
- (void)MR_importValuesForKeysWithDictionary:(id)arg1;
- (void)MR_setRelationships:(id)arg1 forKeysWithDictionary:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)MR_addObject:(id)arg1 forRelationship:(id)arg2;
- (id)MR_findObjectForRelationship:(id)arg1 withData:(id)arg2;
- (void)MR_setAttributes:(id)arg1 forKeysWithDictionary:(id)arg2;
- (_Bool)MR_importValue:(id)arg1 forKey:(id)arg2;
- (id)MR_valueForAttribute:(id)arg1 fromObjectData:(id)arg2 forKeyPath:(id)arg3;
@end
