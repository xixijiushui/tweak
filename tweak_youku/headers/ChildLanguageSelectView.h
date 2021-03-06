//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSDictionary, NSMutableArray, UIGestureRecognizer;

@interface ChildLanguageSelectView : UIView
{
    id <ChildLanguageSelectViewDelegate> _delegate;
    NSDictionary *_languageInfos;
    NSArray *_languages;
    UIView *_languagesContainerView;
    NSMutableArray *_languageViews;
    UIGestureRecognizer *_tapGestureRecognizer;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSMutableArray *languageViews; // @synthesize languageViews=_languageViews;
@property(retain, nonatomic) UIView *languagesContainerView; // @synthesize languagesContainerView=_languagesContainerView;
@property(retain, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(retain, nonatomic) NSDictionary *languageInfos; // @synthesize languageInfos=_languageInfos;
@property(nonatomic) __weak id <ChildLanguageSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickMaskView:(id)arg1;
- (void)onClickLanguageView:(id)arg1;
- (void)hide;
- (void)show;
- (void)setSelectedLanguage:(id)arg1;
- (void)updateWithLanguages:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

