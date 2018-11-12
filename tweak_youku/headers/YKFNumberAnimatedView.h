//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSNumber, UIColor, UIFont;

@interface YKFNumberAnimatedView : UIView
{
    _Bool _isAscending;
    _Bool _isRandom;
    NSNumber *_value;
    UIColor *_textColor;
    UIFont *_font;
    double _duration;
    double _durationOffset;
    unsigned long long _density;
    unsigned long long _minLength;
    NSMutableArray *_numbersText;
    NSMutableArray *_scrollLayers;
    NSMutableArray *_scrollLabels;
}

@property(retain, nonatomic) NSMutableArray *scrollLabels; // @synthesize scrollLabels=_scrollLabels;
@property(retain, nonatomic) NSMutableArray *scrollLayers; // @synthesize scrollLayers=_scrollLayers;
@property(retain, nonatomic) NSMutableArray *numbersText; // @synthesize numbersText=_numbersText;
@property(nonatomic) _Bool isRandom; // @synthesize isRandom=_isRandom;
@property(nonatomic) _Bool isAscending; // @synthesize isAscending=_isAscending;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property(nonatomic) unsigned long long density; // @synthesize density=_density;
@property(nonatomic) double durationOffset; // @synthesize durationOffset=_durationOffset;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)createAnimations;
- (id)createLabel:(id)arg1;
- (void)createContentForLayer:(id)arg1 withNumberText:(id)arg2;
- (void)createScrollLayers;
- (void)createNumbersText;
- (void)prepareAnimations;
- (void)stopAnimation;
- (void)startAnimation;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

