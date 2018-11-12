//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "CoreDataEntityProtocol.h"
#import "SearchKeywordExtentProtocol.h"

@class NSDate, NSString;

@interface SearchHistory : NSManagedObject <CoreDataEntityProtocol, SearchKeywordExtentProtocol>
{
}

+ (id)findHistory:(id)arg1;
+ (void)saveKeyword:(id)arg1;
- (void)save;
- (void)willSave;
- (void)awakeFromInsert;
- (id)searchkeyword;

// Remaining properties
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDate *updatedAt; // @dynamic updatedAt;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

