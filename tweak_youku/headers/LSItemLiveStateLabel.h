//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface LSItemLiveStateLabel : UIImageView
{
    _Bool _isBannerIcon;
    unsigned long long _liveState;
    UIImageView *_pointImageView;
}

@property(retain, nonatomic) UIImageView *pointImageView; // @synthesize pointImageView=_pointImageView;
@property(nonatomic) _Bool isBannerIcon; // @synthesize isBannerIcon=_isBannerIcon;
@property(nonatomic) unsigned long long liveState; // @synthesize liveState=_liveState;
- (void).cxx_destruct;
- (id)opacityForever_Animation:(float)arg1;
- (id)initItemLabelWithFrame:(struct CGRect)arg1 LiveState:(unsigned long long)arg2;

@end
