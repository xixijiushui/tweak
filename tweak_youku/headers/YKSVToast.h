//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface YKSVToast : UIView
{
    _Bool _isCanClick;
    _Bool _aboveKeyboard;
    NSString *_text;
    NSString *_image;
    UIView *_backgroundView;
    double _duration;
    UILabel *_label;
}

+ (id)sharedInstance;
+ (void)dismiss;
+ (void)showWithText:(id)arg1 duration:(double)arg2;
+ (void)showWithImage:(id)arg1 andText:(id)arg2;
+ (void)showWithText:(id)arg1 aboveKeyboard:(_Bool)arg2;
+ (void)showWithText:(id)arg1;
@property(nonatomic) _Bool aboveKeyboard; // @synthesize aboveKeyboard=_aboveKeyboard;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool isCanClick; // @synthesize isCanClick=_isCanClick;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)show;
- (void)showAboveKeyboard:(_Bool)arg1;
- (void)initWithText:(id)arg1 image:(id)arg2 duration:(double)arg3 isCanClcik:(_Bool)arg4;
- (id)init;
- (void)removeToastView;

@end

