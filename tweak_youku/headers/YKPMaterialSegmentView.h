//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUSegmentView.h"

@interface YKPMaterialSegmentView : YKUSegmentView
{
    CDUnknownBlockType _pullRefreshDidTriggeredHandler;
    long long _offset;
}

@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) CDUnknownBlockType pullRefreshDidTriggeredHandler; // @synthesize pullRefreshDidTriggeredHandler=_pullRefreshDidTriggeredHandler;
- (void).cxx_destruct;
- (void)requestData;
- (void)refresh;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didScrollToIndex:(long long)arg1;
- (void)scrollToIndex:(long long)arg1;
- (void)setContentViews:(id)arg1;
- (void)setup;

@end
