//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@interface UIScrollView (LFUI)
- (void)lf_stopDeceleratingIfNeeded;
- (void)lf_scrollToBottom;
- (void)lf_scrollToBottomAnimated:(_Bool)arg1;
- (void)lf_scrollToTop;
- (void)lf_scrollToTopAnimated:(_Bool)arg1;
- (void)lf_scrollToTopForce:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)lf_canScroll;
@property(readonly, nonatomic) _Bool lf_alreadyAtBottom;
@property(readonly, nonatomic) _Bool lf_alreadyAtTop;
@end

