//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, TTFLikeButton, TTPraiseButton, UIButton;

@interface TTFToolbar : UIView
{
    UIButton *_btnCurrentSelected;
    NSMutableArray *_leftButtons;
    NSMutableArray *_rightButtons;
    UIView *_textView;
    CDUnknownBlockType _buttonSelectedCallBack;
    TTFLikeButton *_likeButton;
    TTPraiseButton *_praiseButton;
    UIView *_lineView;
    UIView *_topLineView;
}

@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) TTPraiseButton *praiseButton; // @synthesize praiseButton=_praiseButton;
@property(retain, nonatomic) TTFLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(copy, nonatomic) CDUnknownBlockType buttonSelectedCallBack; // @synthesize buttonSelectedCallBack=_buttonSelectedCallBack;
@property(retain, nonatomic) UIView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSMutableArray *rightButtons; // @synthesize rightButtons=_rightButtons;
@property(retain, nonatomic) NSMutableArray *leftButtons; // @synthesize leftButtons=_leftButtons;
@property(retain, nonatomic) UIButton *btnCurrentSelected; // @synthesize btnCurrentSelected=_btnCurrentSelected;
- (void).cxx_destruct;
- (void)updatePraiseButtonWithIsPraised:(_Bool)arg1 userLastPraiseType:(long long)arg2 praiseCount:(long long)arg3 parentView:(id)arg4 faceType:(long long)arg5 bizId:(long long)arg6 praiseDetails:(id)arg7;
- (void)updatePraiseState:(_Bool)arg1 likeCount:(long long)arg2 itemId:(long long)arg3 isPost:(_Bool)arg4;
- (void)unselectAll;
- (void)updateRightButtonWithType:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)updateLeftButtonWithType:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)selectButtonByType:(unsigned long long)arg1;
- (void)updateButtonByType:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (void)updateButtonByType:(unsigned long long)arg1 withBadge:(id)arg2;
- (void)layoutSubviews;
- (void)toolBarButtonSelected:(id)arg1;
- (void)updateRightButtons:(id)arg1;
- (void)updateLeftButtons:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andLeftButtons:(id)arg2 andRightButtons:(id)arg3 andTextField:(id)arg4 andButtonSelectedCallBack:(CDUnknownBlockType)arg5;

@end
