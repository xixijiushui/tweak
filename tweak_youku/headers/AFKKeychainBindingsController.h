//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFKKeychainBindings, NSMutableDictionary;

@interface AFKKeychainBindingsController : NSObject
{
    AFKKeychainBindings *_keychainBindings;
    NSMutableDictionary *_valueBuffer;
}

+ (id)sharedKeychainBindingsController;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 accessibleAttribute:(void *)arg3;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)values;
- (id)keychainBindings;
- (_Bool)storeString:(id)arg1 forKey:(id)arg2 accessibleAttribute:(void *)arg3;
- (_Bool)storeString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)serviceName;

@end
