//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMapTable;

@interface AIASContainer : NSObject
{
    NSMapTable *_dicSession;
    NSLock *_lock;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMapTable *dicSession; // @synthesize dicSession=_dicSession;
- (void).cxx_destruct;
- (id)getLiveSession:(id)arg1;
- (void)asyncInit:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;

@end

