//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildConsolePlugin.h"

@class UIImage, UIImageView;

@interface ChildPlayPausePlugin : ChildConsolePlugin
{
    UIImageView *_imageView;
    UIImage *_imagePause;
    UIImage *_imagePlay;
}

@property(retain, nonatomic) UIImage *imagePlay; // @synthesize imagePlay=_imagePlay;
@property(retain, nonatomic) UIImage *imagePause; // @synthesize imagePause=_imagePause;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)showOrHide;
- (void)playOrPauseAction;
- (void)onVideoSizeChanged;
- (void)refreshPlayButton;
- (void)imageClicked:(id)arg1;
- (void)updateView:(id)arg1;
- (void)onReceived:(id)arg1;
- (void)onRun;
- (id)init;

@end
