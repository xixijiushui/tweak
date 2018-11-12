//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "LFUIRefreshHeaderProtocol.h"

@class LFUIActivityIndicatorView;

@interface LFUIRefreshHeader : UIView <LFUIRefreshHeaderProtocol>
{
    LFUIActivityIndicatorView *_activityIndicatorView;
    CDUnknownBlockType _refreshingBlock;
    CDUnknownBlockType _beignRefreshBlock;
    CDUnknownBlockType _endRefreshBlock;
    CDUnknownBlockType _refreshHeaderHideBlock;
}

+ (id)headerWithRefreshingBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType refreshHeaderHideBlock; // @synthesize refreshHeaderHideBlock=_refreshHeaderHideBlock;
@property(copy, nonatomic) CDUnknownBlockType endRefreshBlock; // @synthesize endRefreshBlock=_endRefreshBlock;
@property(copy, nonatomic) CDUnknownBlockType beignRefreshBlock; // @synthesize beignRefreshBlock=_beignRefreshBlock;
@property(copy, nonatomic) CDUnknownBlockType refreshingBlock; // @synthesize refreshingBlock=_refreshingBlock;
@property(retain, nonatomic) LFUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (_Bool)isRefreshing;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

