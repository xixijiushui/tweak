//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OPProgressView;

@protocol OPProgressViewDelegate <NSObject>

@optional
- (void)progressView:(OPProgressView *)arg1 didSelectPlotAtIndex:(long long)arg2 point:(struct CGPoint)arg3;
- (void)progressView:(OPProgressView *)arg1 didSelectHighlightAtIndex:(long long)arg2 point:(struct CGPoint)arg3;
- (void)progressView:(OPProgressView *)arg1 seekDidEnd:(long long)arg2;
- (void)progressView:(OPProgressView *)arg1 seekDidChange:(long long)arg2;
- (void)progressView:(OPProgressView *)arg1 seekDidBegin:(long long)arg2;
@end
