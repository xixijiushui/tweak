//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, NSTimer, UIImageView, UILabel, YKBCActivityIndicatorView;

@interface YKBCLoadingView : UIView
{
    UIImageView *_imgview;
    UILabel *_loadLabel;
    YKBCActivityIndicatorView *_loadActivity;
    NSTimer *_timer;
    NSString *_ykbc_flash_url;
    NSArray *_ykbc_flash_text_array;
    unsigned long long _ykbc_flash_text_array_cnt;
}

@property(nonatomic) unsigned long long ykbc_flash_text_array_cnt; // @synthesize ykbc_flash_text_array_cnt=_ykbc_flash_text_array_cnt;
@property(retain, nonatomic) NSArray *ykbc_flash_text_array; // @synthesize ykbc_flash_text_array=_ykbc_flash_text_array;
@property(retain, nonatomic) NSString *ykbc_flash_url; // @synthesize ykbc_flash_url=_ykbc_flash_url;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) YKBCActivityIndicatorView *loadActivity; // @synthesize loadActivity=_loadActivity;
@property(retain, nonatomic) UILabel *loadLabel; // @synthesize loadLabel=_loadLabel;
@property(retain, nonatomic) UIImageView *imgview; // @synthesize imgview=_imgview;
- (void).cxx_destruct;
- (void)ykbc_stopAnimation;
- (void)ykbc_startAnimation;
- (void)layoutSubviews;
- (id)getName:(long long)arg1;
- (void)action:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (id)loadBackgroundImage;
- (void)dealloc;
- (id)init;

@end

