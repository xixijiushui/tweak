//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPFixedProgressView.h"

@class UIButton;

@interface GPVipFixedProgressView : GPFixedProgressView
{
    UIButton *_muteVolumeButton;
}

@property(retain, nonatomic) UIButton *muteVolumeButton; // @synthesize muteVolumeButton=_muteVolumeButton;
- (void).cxx_destruct;
- (void)setProgressViewHidden:(_Bool)arg1;
- (void)setMuteVolumeButtonHidden:(_Bool)arg1;
- (void)muteVolum:(id)arg1;
- (void)endSection:(id)arg1;
- (void)initModule;
- (void)layout:(long long)arg1;
- (void)layoutSubviews;

@end
