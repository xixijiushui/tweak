//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVideoCellView.h"

@class UILabel, YKVideoCacheWatchFlagLabel;

@interface YKVideoCachedView : YKVideoCellView
{
    YKVideoCacheWatchFlagLabel *_watchFlagView;
    UILabel *_sizeDescLb;
}

+ (id)newFromCell:(id)arg1;
+ (id)viewFromCell:(id)arg1;
- (void).cxx_destruct;
- (void)reloadVideoTitleLb;
- (_Bool)isUploadFinished;
- (id)watchFlagView;
- (id)sizeDescLb;
- (void)layoutSubviews;
- (void)reloadSizeDescLb;
- (void)reloadWatchFlag;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1;

@end
