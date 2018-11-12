//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, YKUDSegmentModel, YKUDVideoModel;

@protocol YKUDVideoDownloadEventTracker <NSObject>

@optional
- (_Bool)onComplete;
- (_Bool)onCompleteOfSegment:(YKUDSegmentModel *)arg1;
- (_Bool)onReceivedBytes:(long long)arg1 totalReceivedBytes:(long long)arg2 ofSegmentId:(long long)arg3;
- (_Bool)onFinishResolvedWithSegments:(NSArray *)arg1;
- (_Bool)onError:(NSError *)arg1 ofSegment:(YKUDSegmentModel *)arg2;
- (id)initWithVideo:(YKUDVideoModel *)arg1;
@end

