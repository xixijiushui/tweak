//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@protocol CoreDataEntityProtocol <NSObject>
@property(retain, nonatomic) NSString *version;
@property(retain, nonatomic) NSDate *updatedAt;
@property(retain, nonatomic) NSDate *createdAt;
- (void)save;
@end

