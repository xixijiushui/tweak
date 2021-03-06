//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFActorItemSnapshotCache, NSUUID, UIImage;

@protocol MFActorItemSnapshotCacheDelegate <NSObject>
- (_Bool)snapshotCache:(MFActorItemSnapshotCache *)arg1 shouldEvictSnapshotForItemWithIdentifier:(NSUUID *)arg2;
- (void)snapshotCache:(MFActorItemSnapshotCache *)arg1 didEvictSnapshotForItemWithIdentifier:(NSUUID *)arg2;
- (void)snapshotCache:(MFActorItemSnapshotCache *)arg1 didCacheSnapshotForItemWithIdentifier:(NSUUID *)arg2;
- (UIImage *)snapshotCache:(MFActorItemSnapshotCache *)arg1 updatedSnapshotForItemWithIdentifier:(NSUUID *)arg2;
@end

