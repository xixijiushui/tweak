//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChildProgressView;

@protocol ChildProgressViewDelegate <NSObject>

@optional
- (void)progressView:(ChildProgressView *)arg1 didTap:(long long)arg2;
- (void)progressView:(ChildProgressView *)arg1 seekDidEnd:(long long)arg2;
- (void)progressView:(ChildProgressView *)arg1 seekDidChange:(long long)arg2;
- (void)progressView:(ChildProgressView *)arg1 seekDidBegin:(long long)arg2;
@end
