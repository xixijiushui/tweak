//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JSObjectionProvider.h"

@class NSString;

@interface __JSClassProvider : NSObject <JSObjectionProvider>
{
    Class _class;
}

- (id)provide:(id)arg1 arguments:(id)arg2;
- (id)initWithClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
