//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MKTMonitorDBHandle : NSObject
{
    _Bool _dbSwith;
    NSString *_tableName;
}

@property(readonly, copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (void).cxx_destruct;
- (void)remove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)query:(CDUnknownBlockType)arg1;
- (void)insertList:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)createTable;
- (id)initWithTableName:(id)arg1;

@end

