//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DYKUploadOSSAuthManager : NSObject
{
    NSMutableDictionary *_ossAuthDic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)updateOssAuthModelForKey:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)setOssAuth:(id)arg1 forKey:(id)arg2;
- (id)ossAuthForKey:(id)arg1;
- (id)init;

@end

