//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol LFUIRefreshFooterProtocol
+ (id)footerWithRefreshingBlock:(void (^)(void))arg1;
@property(nonatomic) _Bool isRefreshing;
@property(nonatomic) _Bool automaticallyHidden;
- (void)resetNoMoreData;
- (void)beginRefreshing;
- (void)endRefreshing;
- (void)endRefreshingWithNoMoreData;
@end

