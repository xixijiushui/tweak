//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, UIEvent, UIView;

@protocol TVHTouchEventDelegate <NSObject>
- (void)onTouchesCancelled:(UIView *)arg1 touches:(NSSet *)arg2 event:(UIEvent *)arg3;
- (void)onTouchesEnded:(UIView *)arg1 touches:(NSSet *)arg2 event:(UIEvent *)arg3;
- (void)onTouchesMoved:(UIView *)arg1 touches:(NSSet *)arg2 event:(UIEvent *)arg3;
- (void)onTouchesBegan:(UIView *)arg1 touches:(NSSet *)arg2 event:(UIEvent *)arg3;
@end
