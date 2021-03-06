//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIVisualEffectView, YKUVerticalButton;

@interface YKPPlayMenu : UIView
{
    _Bool _animated;
    _Bool _showAsView;
    CDUnknownBlockType _viewWillDismissHandler;
    CDUnknownBlockType _acttingButtonClickedHandler;
    CDUnknownBlockType _starCallButtonClickedHandler;
    CDUnknownBlockType _inPlayButtonClickedHandler;
    CDUnknownBlockType _arButtonClickedHandler;
    UIVisualEffectView *_backgroundView;
    UIVisualEffectView *_visualView;
    YKUVerticalButton *_playFunButton;
    YKUVerticalButton *_starCallButton;
    YKUVerticalButton *_inPlayButton;
    YKUVerticalButton *_arButton;
    UIButton *_closeButton;
}

+ (void)hide;
+ (void)show;
+ (id)rootView;
@property(nonatomic) _Bool showAsView; // @synthesize showAsView=_showAsView;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) YKUVerticalButton *arButton; // @synthesize arButton=_arButton;
@property(retain, nonatomic) YKUVerticalButton *inPlayButton; // @synthesize inPlayButton=_inPlayButton;
@property(retain, nonatomic) YKUVerticalButton *starCallButton; // @synthesize starCallButton=_starCallButton;
@property(retain, nonatomic) YKUVerticalButton *playFunButton; // @synthesize playFunButton=_playFunButton;
@property(retain, nonatomic) UIVisualEffectView *visualView; // @synthesize visualView=_visualView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType arButtonClickedHandler; // @synthesize arButtonClickedHandler=_arButtonClickedHandler;
@property(copy, nonatomic) CDUnknownBlockType inPlayButtonClickedHandler; // @synthesize inPlayButtonClickedHandler=_inPlayButtonClickedHandler;
@property(copy, nonatomic) CDUnknownBlockType starCallButtonClickedHandler; // @synthesize starCallButtonClickedHandler=_starCallButtonClickedHandler;
@property(copy, nonatomic) CDUnknownBlockType acttingButtonClickedHandler; // @synthesize acttingButtonClickedHandler=_acttingButtonClickedHandler;
@property(copy, nonatomic) CDUnknownBlockType viewWillDismissHandler; // @synthesize viewWillDismissHandler=_viewWillDismissHandler;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showAnimation;
- (void)backgroundTapped;
- (void)closeButtonClicked:(id)arg1;
- (void)arButtonClicked:(id)arg1;
- (void)inPlayButtonClicked:(id)arg1;
- (void)starCallButtonClicked:(id)arg1;
- (void)playFunButtonClicked:(id)arg1;
- (id)createButton;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

