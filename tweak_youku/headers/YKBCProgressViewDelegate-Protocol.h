//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKBCProgressView;

@protocol YKBCProgressViewDelegate <NSObject>

@optional
- (void)progressView:(YKBCProgressView *)arg1 didSelectPlotAtIndex:(long long)arg2 point:(struct CGPoint)arg3;
- (void)progressView:(YKBCProgressView *)arg1 didSelectHighlightAtIndex:(long long)arg2 point:(struct CGPoint)arg3;
- (void)progressView:(YKBCProgressView *)arg1 seekDidEnd:(long long)arg2;
- (void)progressView:(YKBCProgressView *)arg1 seekDidChange:(long long)arg2;
- (void)progressView:(YKBCProgressView *)arg1 seekDidBegin:(long long)arg2;
@end

