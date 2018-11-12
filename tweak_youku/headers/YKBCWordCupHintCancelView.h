//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface YKBCWordCupHintCancelView : UIView
{
    _Bool _isAudio;
    UIImageView *_hintImg;
    UILabel *_hintLable;
    UIView *_maskView;
    UILabel *_timeLable;
}

@property(retain, nonatomic) UILabel *timeLable; // @synthesize timeLable=_timeLable;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *hintLable; // @synthesize hintLable=_hintLable;
@property(retain, nonatomic) UIImageView *hintImg; // @synthesize hintImg=_hintImg;
@property(nonatomic) _Bool isAudio; // @synthesize isAudio=_isAudio;
- (void).cxx_destruct;
- (void)changShortTime;
- (void)changTimerLable:(id)arg1;
- (void)refreshUIWithVoicePower:(double)arg1;
- (void)changeSubvies:(_Bool)arg1;
- (void)initCustomViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

