//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBObjectGraphConfiguration, NSArray;

@interface FBObjectiveCGraphElement : NSObject
{
    NSArray *_namePath;
    id _object;
    FBObjectGraphConfiguration *_configuration;
}

@property(readonly, nonatomic) FBObjectGraphConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSArray *namePath; // @synthesize namePath=_namePath;
- (void).cxx_destruct;
- (Class)objectClass;
- (id)classNameOrNull;
- (unsigned long long)objectAddress;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)allRetainedObjects;
- (id)initWithObject:(id)arg1 configuration:(id)arg2 namePath:(id)arg3;
- (id)initWithObject:(id)arg1 configuration:(id)arg2;
- (id)initWithObject:(id)arg1;

@end

