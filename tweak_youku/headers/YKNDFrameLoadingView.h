//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface YKNDFrameLoadingView : UIView
{
    _Bool _isAnimating;
    UIImageView *_loadingImageView;
}

@property _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
- (void).cxx_destruct;
- (void)hideView;
- (void)startAnimating;
- (void)closeLoading;
- (void)showLoading:(id)arg1;
- (id)init;

@end

