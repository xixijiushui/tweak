//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage;

@interface YKDetailVIPLoginAlertView : UIView
{
    UIView *_alertview;
    UIView *_backgroundview;
    UIImage *_image;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _cancelBlock;
    NSString *_cancelButtonTitle;
    NSString *_successButtonTitle;
    NSString *_alertViewTitle;
    NSString *_alertViewSubTItle;
    double _alertviewWidth;
    NSString *_gradientLayerTopColor;
    NSString *_gradientLayerBottomColor;
    long long _alertViewType;
}

@property(nonatomic) long long alertViewType; // @synthesize alertViewType=_alertViewType;
@property(copy, nonatomic) NSString *gradientLayerBottomColor; // @synthesize gradientLayerBottomColor=_gradientLayerBottomColor;
@property(copy, nonatomic) NSString *gradientLayerTopColor; // @synthesize gradientLayerTopColor=_gradientLayerTopColor;
@property(nonatomic) double alertviewWidth; // @synthesize alertviewWidth=_alertviewWidth;
@property(copy, nonatomic) NSString *alertViewSubTItle; // @synthesize alertViewSubTItle=_alertViewSubTItle;
@property(copy, nonatomic) NSString *alertViewTitle; // @synthesize alertViewTitle=_alertViewTitle;
@property(retain, nonatomic) NSString *successButtonTitle; // @synthesize successButtonTitle=_successButtonTitle;
@property(retain, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIView *backgroundview; // @synthesize backgroundview=_backgroundview;
@property(retain, nonatomic) UIView *alertview; // @synthesize alertview=_alertview;
- (void).cxx_destruct;
- (void)setupUI;
- (void)clickButton:(id)arg1;
- (id)createButtonWithFrame:(struct CGRect)arg1 Title:(id)arg2 Color:(id)arg3;
- (void)dismiss;
- (void)show;
- (id)initPushTypeWithTitle:(id)arg1 subTitle:(id)arg2 Image:(id)arg3 cancel:(CDUnknownBlockType)arg4 successButtonTitle:(id)arg5 success:(CDUnknownBlockType)arg6;
- (id)initWithImage:(id)arg1 cancelButton:(id)arg2 cancel:(CDUnknownBlockType)arg3 successButtonTitle:(id)arg4 success:(CDUnknownBlockType)arg5;

@end

