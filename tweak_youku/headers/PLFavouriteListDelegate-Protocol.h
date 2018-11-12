//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexSet;

@protocol PLFavouriteListDelegate <NSObject>
- (void)clear;
- (void)stopLoading;
- (void)deleteObjectAtIndexPaths:(NSArray *)arg1 success:(void (^)(void))arg2 failure:(void (^)(NSError *))arg3;
- (void)loadMoreDataWithSuccess:(void (^)(void))arg1 failure:(void (^)(NSError *))arg2;
- (void)refreshDataWithSuccess:(void (^)(void))arg1 failure:(void (^)(NSError *))arg2;
- (void)deleteObjectsAtIndexSet:(NSIndexSet *)arg1 success:(void (^)(NSIndexSet *))arg2 failure:(void (^)(NSError *))arg3;
@end
