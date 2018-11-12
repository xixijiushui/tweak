//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol AliBViewAnimator <NSObject>
@property(readonly, nonatomic) double duration;
- (_Bool)isValid;
- (_Bool)animate;
- (void)setStartedBlock:(void (^)(void))arg1;
- (void)setComplete:(void (^)(_Bool))arg1;
- (void)setContext:(id <AliBViewAnimationContext>)arg1;
- (id)initWithKey:(NSString *)arg1 info:(NSDictionary *)arg2;
@end

