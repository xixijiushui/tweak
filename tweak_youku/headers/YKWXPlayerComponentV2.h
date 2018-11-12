//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

@class NSDictionary, NSString;

@interface YKWXPlayerComponentV2 : WXComponent
{
    _Bool _enableFullScreen;
    _Bool _autoPlay;
    _Bool _isPortraitFullScreenMode;
    _Bool _disableHideStatusBar;
    NSString *_src;
    NSString *_theme;
    NSDictionary *_trackArgs;
}

+ (id)wx_export_method_39;
+ (id)wx_export_method_38;
+ (id)wx_export_method_37;
+ (id)wx_export_method_34;
+ (id)wx_export_method_32;
+ (id)wx_export_method_31;
+ (id)wx_export_method_30;
+ (id)wx_export_method_29;
+ (id)wx_export_method_28;
+ (id)wx_export_method_27;
+ (id)wx_export_method_26;
@property(nonatomic) _Bool disableHideStatusBar; // @synthesize disableHideStatusBar=_disableHideStatusBar;
@property(nonatomic) _Bool isPortraitFullScreenMode; // @synthesize isPortraitFullScreenMode=_isPortraitFullScreenMode;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(retain, nonatomic) NSDictionary *trackArgs; // @synthesize trackArgs=_trackArgs;
@property(copy, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool enableFullScreen; // @synthesize enableFullScreen=_enableFullScreen;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
- (void).cxx_destruct;
- (void)fireEvent:(id)arg1 params:(id)arg2;
- (id)playerModule;
- (void)updateAttributes:(id)arg1;
- (void)viewDidLoad;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (id)captureScreenWithSavePath:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)destroy;
- (void)replay;
- (void)seek:(double)arg1;
- (void)mute:(_Bool)arg1;
- (void)stop;
- (void)fullscreen:(_Bool)arg1;
- (void)pause;
- (void)play;
- (void)resumePlay;
- (void)pausePlay;

@end
