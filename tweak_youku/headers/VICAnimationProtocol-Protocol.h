//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@protocol VICAnimationProtocol <NSObject>
- (void)bottomOutAnimation:(UIView *)arg1 complete:(void (^)(void))arg2;
- (void)bottomInAnimation:(UIView *)arg1 complete:(void (^)(void))arg2;
- (void)topOutAnimation:(UIView *)arg1 complete:(void (^)(void))arg2;
- (void)topInAnimation:(UIView *)arg1 complete:(void (^)(void))arg2;
- (void)leftOutAnimation:(UIView *)arg1 complete:(void (^)(void))arg2;
- (void)leftInAnimation:(UIView *)arg1 complete:(void (^)(void))arg2;
- (void)rightOutAnimation:(UIView *)arg1 complete:(void (^)(void))arg2;
- (void)rightInAnimation:(UIView *)arg1 complete:(void (^)(void))arg2;
- (void)fadeOutAnimation:(UIView *)arg1 complete:(void (^)(void))arg2;
- (void)fadeInAnimation:(UIView *)arg1 completed:(void (^)(void))arg2;
- (void)exitAnimation:(UIView *)arg1 animation:(NSString *)arg2 completed:(void (^)(void))arg3;
- (void)enterAnimation:(UIView *)arg1 animation:(NSString *)arg2 completed:(void (^)(void))arg3;
@end
