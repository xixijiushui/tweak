//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@interface UIGestureRecognizer (YKSBlocksKit)
+ (id)yks_recognizerWithHandler:(CDUnknownBlockType)arg1;
+ (id)yks_recognizerWithHandler:(CDUnknownBlockType)arg1 delay:(double)arg2;
- (void)yks_cancel;
- (_Bool)yks_shouldHandleAction;
- (void)yks_setShouldHandleAction:(_Bool)arg1;
@property(nonatomic, setter=yks_setHandlerDelay:) double yks_handlerDelay;
@property(copy, nonatomic, setter=yks_setHandler:) CDUnknownBlockType yks_handler;
- (void)yks_handleAction:(id)arg1;
- (id)yks_initWithHandler:(CDUnknownBlockType)arg1;
- (id)yks_initWithHandler:(CDUnknownBlockType)arg1 delay:(double)arg2;
@end
