//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildOPPlugin.h"

@class UIControl, UIImageView;

@interface ChildBrandCartoonBasePlugin : ChildOPPlugin
{
    UIControl *_pluginView;
    UIImageView *_bgIv;
    UIImageView *_contentIv;
}

@property(retain, nonatomic) UIImageView *contentIv; // @synthesize contentIv=_contentIv;
@property(retain, nonatomic) UIImageView *bgIv; // @synthesize bgIv=_bgIv;
@property(retain, nonatomic) UIControl *pluginView; // @synthesize pluginView=_pluginView;
- (void).cxx_destruct;
- (void)click;
- (id)cartoonUrl;
- (_Bool)isPluginViewInit;
- (void)onVideoSizeChanged;
- (void)refresh;
- (void)appendSubViews;
- (void)onReceived:(id)arg1;
- (void)onRun;

@end
