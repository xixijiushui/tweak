//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSArray, NSDictionary, NSTimer, UIButton, UIImageView, UILabel;

@interface YKInnerAppNotificationView : UIView
{
    NSArray *_cachedMessages;
    NSDictionary *_message;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIImageView *_iconView;
    UIButton *_goButton;
    UIButton *_closeButton;
    NSTimer *_closeTimer;
    CALayer *_innerLayer;
    CALayer *_outerLayer;
}

+ (void)show:(id)arg1 viewController:(id)arg2;
+ (void)show:(id)arg1;
+ (void)userTrackInnerPushNotificationWithActionType:(id)arg1 userInfo:(id)arg2;
+ (id)sharedInstance;
+ (id)getOnScreenController;
@property(retain, nonatomic) CALayer *outerLayer; // @synthesize outerLayer=_outerLayer;
@property(retain, nonatomic) CALayer *innerLayer; // @synthesize innerLayer=_innerLayer;
@property(nonatomic) __weak NSTimer *closeTimer; // @synthesize closeTimer=_closeTimer;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *goButton; // @synthesize goButton=_goButton;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSDictionary *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tapGo:(id)arg1;
- (void)closeView:(_Bool)arg1;
- (void)closeSelf:(id)arg1;
- (void)showValidMessageForViewController:(id)arg1 withClass:(id)arg2;
- (void)handleViewControllerChange:(id)arg1;
- (void)handleDidBecomeActive:(id)arg1;
@property(retain, nonatomic) NSArray *cachedMessages; // @synthesize cachedMessages=_cachedMessages;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

