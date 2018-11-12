//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseLoadingView, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface YKSubscribeHelpView : UIView
{
    CDUnknownBlockType __innerBlock;
    UIImageView *_youkuIcon;
    UILabel *_textLabel;
    UIButton *_LeftBtn;
    UIButton *_rightBtn;
    UIView *_loading;
    BaseLoadingView *_loadingView;
    UITapGestureRecognizer *_tapGes;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)hideAllSubViews;
- (void)handleTapBack:(id)arg1;
- (void)handleEmptyError:(id)arg1;
- (void)handleNetError:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 clickCallBack:(CDUnknownBlockType)arg2;

@end

