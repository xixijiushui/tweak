//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@protocol PLMyCollectionDataSource <NSObject>
@property(retain, nonatomic) NSMutableArray *collections;
- (void)deleteCollection:(NSString *)arg1 success:(void (^)(long long, PLCollection *))arg2 failure:(void (^)(NSError *))arg3;
- (void)getMyCollectionsWithSuccess:(void (^)(NSArray *))arg1 failure:(void (^)(NSError *))arg2;
- (NSString *)noContentWording;
- (NSString *)deleteWording;
- (_Bool)canCreateCollection;
@end
