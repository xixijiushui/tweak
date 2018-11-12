//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface OPInterceptImageView : UIView
{
    UIButton *_imageShotButton;
    id <OPInterceptImageViewDelegate> _delegate;
}

@property(nonatomic) __weak id <OPInterceptImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *imageShotButton; // @synthesize imageShotButton=_imageShotButton;
- (void).cxx_destruct;
- (_Bool)isSystemVersionAllowed;
- (void)imageShotClicked:(id)arg1;
- (void)setupSubviews;
- (void)stopInterceptButtonTimer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

