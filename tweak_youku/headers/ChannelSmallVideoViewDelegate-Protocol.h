//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKSTSmallVideoSubModel, YKSTUploaderModel;

@protocol ChannelSmallVideoViewDelegate <NSObject>

@optional
- (void)channelSmallVideoViewDidReportSmallVideo:(YKSTSmallVideoSubModel *)arg1;
- (void)channelSmallVideoViewDidSelectUploader:(YKSTUploaderModel *)arg1;
- (void)channelSmallVideoViewDidSelectSmallVideo:(YKSTSmallVideoSubModel *)arg1;
@end
