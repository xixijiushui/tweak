//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView;

@interface VideoCacheBottomNoteBar : UIView
{
    CDUnknownBlockType _clearButtonClicked;
    CDUnknownBlockType _closeButtonClicked;
    UIImageView *_iconImage;
    UIButton *_textLabel;
    UIButton *_closeButton;
}

@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UIButton *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) CDUnknownBlockType closeButtonClicked; // @synthesize closeButtonClicked=_closeButtonClicked;
@property(copy, nonatomic) CDUnknownBlockType clearButtonClicked; // @synthesize clearButtonClicked=_clearButtonClicked;
- (void).cxx_destruct;
- (void)updateText:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)clearButtonClicked:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

