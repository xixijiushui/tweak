//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChildDefinitionModel : NSObject
{
    long long _key;
    NSString *_name;
}

+ (id)sDefinitions;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(long long)arg1;

@end

