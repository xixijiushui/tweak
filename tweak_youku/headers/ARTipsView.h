//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIImageView, UILabel;

@interface ARTipsView : UIView
{
    int _lastScanMessageIndex;
    UIImageView *_imageIcon;
    UIImageView *_imageBg;
    UILabel *_labelTips;
    NSArray *_icons;
    NSArray *_messages;
    NSArray *_scanMessages;
}

@property(nonatomic) int lastScanMessageIndex; // @synthesize lastScanMessageIndex=_lastScanMessageIndex;
@property(retain, nonatomic) NSArray *scanMessages; // @synthesize scanMessages=_scanMessages;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) UILabel *labelTips; // @synthesize labelTips=_labelTips;
@property(retain, nonatomic) UIImageView *imageBg; // @synthesize imageBg=_imageBg;
@property(retain, nonatomic) UIImageView *imageIcon; // @synthesize imageIcon=_imageIcon;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showTipsWithText:(id)arg1;
- (void)showTips:(unsigned long long)arg1 withDuration:(float)arg2;
- (void)showTips:(unsigned long long)arg1 withMessage:(id)arg2 withDuration:(float)arg3;
- (void)showTips:(unsigned long long)arg1 withMessage:(id)arg2;
- (void)showTips:(unsigned long long)arg1;
- (void)reCalculateLayout;
- (void)initUI;

@end

