//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYKH5ActionSheetView, UIViewController;

@interface DYKH5MoreActionTools : NSObject
{
    DYKH5ActionSheetView *_view;
    UIViewController *_controller;
    CDUnknownBlockType _completionBlock;
}

+ (void)dismissBlock:(CDUnknownBlockType)arg1;
+ (void)showFromController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)releaseInstance;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) DYKH5ActionSheetView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)setupView;
- (void)show;

@end
