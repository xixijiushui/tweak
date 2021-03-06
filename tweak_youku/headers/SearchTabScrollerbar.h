//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class CALayer, NSArray, NSMutableArray, NSString, UIButton, UIColor, UIImageView;

@interface SearchTabScrollerbar : UIScrollView <UIScrollViewDelegate>
{
    double lastBouncesWidth_;
    _Bool enableCallBack;
    _Bool _isShowDrag;
    _Bool _isOpenDrag;
    int _viewType;
    NSArray *items;
    long long selectIndex;
    UIColor *maskColor;
    NSMutableArray *textLayers;
    CALayer *maskLayer;
    id <SearchTabScrollerbarDelegate> tabdelegate;
    UIColor *textSelectColor;
    UIColor *textColor;
    long long _itemmargin;
    long long _textsize;
    UIButton *_toggleButton;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(nonatomic) _Bool isOpenDrag; // @synthesize isOpenDrag=_isOpenDrag;
@property(nonatomic) _Bool isShowDrag; // @synthesize isShowDrag=_isShowDrag;
@property(nonatomic) long long textsize; // @synthesize textsize=_textsize;
@property(nonatomic) long long itemmargin; // @synthesize itemmargin=_itemmargin;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(retain, nonatomic) UIColor *textSelectColor; // @synthesize textSelectColor;
@property(nonatomic) __weak id <SearchTabScrollerbarDelegate> tabdelegate; // @synthesize tabdelegate;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer;
@property(retain, nonatomic) NSMutableArray *textLayers; // @synthesize textLayers;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex;
@property(retain, nonatomic) NSArray *items; // @synthesize items;
- (void).cxx_destruct;
- (void)toggleAction;
- (void)showSelectedMask:(_Bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reload;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)makeADisplayTextLayer:(id)arg1;
- (void)setSelectIndex:(long long)arg1 withAnimation:(_Bool)arg2;
- (void)defaultstyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

