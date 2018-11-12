//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LFUIAutoScrollLabel, NSString, UIButton, UIFont, UIImageView;

@interface LFRBulletinView : UIView
{
    double _bulletinExceptContentWidth;
    NSString *_bulletinContent;
    UIFont *_font;
    CDUnknownBlockType _closeButtonBlock;
    UIImageView *_iconView;
    LFUIAutoScrollLabel *_autoscrollLabel;
    UIButton *_closeButton;
    double _contentWidth;
}

@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) LFUIAutoScrollLabel *autoscrollLabel; // @synthesize autoscrollLabel=_autoscrollLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType closeButtonBlock; // @synthesize closeButtonBlock=_closeButtonBlock;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *bulletinContent; // @synthesize bulletinContent=_bulletinContent;
@property(nonatomic) double bulletinExceptContentWidth; // @synthesize bulletinExceptContentWidth=_bulletinExceptContentWidth;
- (void).cxx_destruct;
- (void)closeButtonClicked:(id)arg1;
- (void)scrollContentIfNeed;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

