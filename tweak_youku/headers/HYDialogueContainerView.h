//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HYAsyncImageView, UIView<HYDialogueProtocol>;

@interface HYDialogueContainerView : UIView
{
    UIView<HYDialogueProtocol> *_dialogueView;
    CDUnknownBlockType _closedButtonTapped;
    HYAsyncImageView *_backgroundView;
    HYAsyncImageView *_closeButton;
}

@property(retain, nonatomic) HYAsyncImageView *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) HYAsyncImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType closedButtonTapped; // @synthesize closedButtonTapped=_closedButtonTapped;
@property(retain, nonatomic) UIView<HYDialogueProtocol> *dialogueView; // @synthesize dialogueView=_dialogueView;
- (void).cxx_destruct;
- (id)extendDict;
- (id)pageName;
- (id)spm;
- (void)setCloseButtonImageString:(id)arg1;
- (void)setBackgroundImageString:(id)arg1;
- (void)closedButtonTap:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
