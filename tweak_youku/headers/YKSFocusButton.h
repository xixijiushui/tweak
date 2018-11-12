//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class LOTAnimationView, NSString, UIActivityIndicatorView, UIImage, UIImageView, UILabel;

@interface YKSFocusButton : UIButton
{
    long long _status;
    long long _style;
    NSString *_uniqueKey;
    long long _options;
    CDUnknownBlockType _operationBlock;
    LOTAnimationView *_loadingView;
    UIActivityIndicatorView *_juhua;
    UIImageView *_addIcon;
    UILabel *_textLabel;
    UIImage *_unfollowimg1;
    UIImage *_unfollowimg2;
    UIImage *_followimg1;
    UIImage *_followimg2;
}

+ (id)yksFocusButtonWithStyle:(long long)arg1;
@property(retain, nonatomic) UIImage *followimg2; // @synthesize followimg2=_followimg2;
@property(retain, nonatomic) UIImage *followimg1; // @synthesize followimg1=_followimg1;
@property(retain, nonatomic) UIImage *unfollowimg2; // @synthesize unfollowimg2=_unfollowimg2;
@property(retain, nonatomic) UIImage *unfollowimg1; // @synthesize unfollowimg1=_unfollowimg1;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *addIcon; // @synthesize addIcon=_addIcon;
@property(retain, nonatomic) UIActivityIndicatorView *juhua; // @synthesize juhua=_juhua;
@property(retain, nonatomic) LOTAnimationView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)hanldeUserSessionChange:(id)arg1;
- (void)handleFocusNotification:(id)arg1;
- (long long)p_transformToFocusStatus;
- (void)p_dealWithStatus:(long long)arg1 error:(id)arg2;
- (void)automaticDealFocusOperations:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)automaticDealFocusOperations:(id)arg1 extend:(id)arg2 finish:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
