//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKCacheDBSqlGenerator : NSObject
{
}

+ (id)removeAll;
+ (id)removeWithDomain;
+ (id)removeWithKeyAndDomain;
+ (id)updateAccessedTime;
+ (id)selectTotalCount;
+ (id)selectSumFileSize;
+ (id)loadExpiredTimeInfo;
+ (id)loadLastAccessedTime;
+ (id)loadModifiedTime;
+ (id)selectInfo;
+ (id)saveInfo;
+ (id)tableCreate;

@end
