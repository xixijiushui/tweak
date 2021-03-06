//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HomeTopViewManager, NSArray, NSMutableArray, NSString, UIColor, UIImageView;

@interface HomeSegmentView : UIView
{
    HomeTopViewManager *_topViewManager;
    NSArray *_items;
    NSString *_channelID;
    NSString *_title;
    NSMutableArray *_buttons;
    UIView *_containerView;
    UIView *_separatorView;
    UIImageView *_allIcon;
    UIColor *_iconCurrentColor;
    UIColor *_textCurrentColor;
}

@property(retain, nonatomic) UIColor *textCurrentColor; // @synthesize textCurrentColor=_textCurrentColor;
@property(retain, nonatomic) UIColor *iconCurrentColor; // @synthesize iconCurrentColor=_iconCurrentColor;
@property(retain, nonatomic) UIImageView *allIcon; // @synthesize allIcon=_allIcon;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak HomeTopViewManager *topViewManager; // @synthesize topViewManager=_topViewManager;
- (void).cxx_destruct;
- (void)showSeparator:(_Bool)arg1;
- (void)resetColorInWhite;
- (void)updateBackgroundColor:(id)arg1;
- (void)updateImageColor:(id)arg1;
- (void)updateTextColor:(id)arg1;
- (void)tapButton:(id)arg1;
- (void)updateModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

