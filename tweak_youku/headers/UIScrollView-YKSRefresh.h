//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@interface UIScrollView (YKSRefresh)
- (id)yks_footerView;
- (void)yks_footerEndRefreshingWithHasMore:(_Bool)arg1;
@property(nonatomic) _Bool yks_footerHidden; // @dynamic yks_footerHidden;
- (void)yks_footerEndRefreshingWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)yks_footerEndRefreshing;
- (void)yks_footerBeginRefreshing;
- (void)yks_removeFooter;
@property(nonatomic) long long yks_footerLoadingViewType;
- (void)yks_addFooterWithCallback:(CDUnknownBlockType)arg1;
@property(nonatomic) double yks_footerHeight; // @dynamic yks_footerHeight;
@property(nonatomic) _Bool yks_headerHidden; // @dynamic yks_headerHidden;
- (void)yks_headerEndRefreshingWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)yks_headerEndRefreshing;
- (void)yks_headerBeginRefreshing;
- (void)yks_removeHeader;
- (void)yks_addHeaderWithHeight:(double)arg1 loadingTopMargin:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (void)yks_addHeaderWithBeginingCallback:(CDUnknownBlockType)arg1 finishCallBack:(CDUnknownBlockType)arg2;
- (void)yks_addHeaderWithCallback:(CDUnknownBlockType)arg1;
@end
