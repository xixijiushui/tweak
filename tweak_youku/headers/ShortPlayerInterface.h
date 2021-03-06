//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OPPlayerAPI, ShortDataPlugin, UIView, UIViewController;

@interface ShortPlayerInterface : NSObject
{
    UIView *_contentView;
    ShortDataPlugin *_dataPlugin;
    _Bool _autoRotate;
    UIViewController *_controller;
    id <ShortPlayerEventDelegate> _delegate;
    OPPlayerAPI *_playerApi;
    long long _state;
    NSString *_endPathThumb;
}

@property(copy, nonatomic) NSString *endPathThumb; // @synthesize endPathThumb=_endPathThumb;
@property(nonatomic) _Bool autoRotate; // @synthesize autoRotate=_autoRotate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) OPPlayerAPI *playerApi; // @synthesize playerApi=_playerApi;
@property(nonatomic) __weak id <ShortPlayerEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)controllerViewWillDisappear;
- (void)controllerViewDidAppear;
- (void)stop;
- (void)pause;
- (void)play;
- (void)playWithVideo:(id)arg1;
- (void)playWithVid:(id)arg1;
- (id)containerView;
- (void)onReceive:(id)arg1;
- (void)removePlayerEvent;
- (void)addPlayerEvent;
- (void)deinit;
- (id)initWithController:(id)arg1;

@end

