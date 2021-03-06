//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, HomeToolMenuOperationView, NSDictionary, NSString, UIButton, UIImageView, UILabel;

@interface YKHomeToolMenuView : UIView
{
    _Bool _isSpecialChannelStyle;
    _Bool _showMessageCenterRedPoint;
    _Bool _closeRedNumber;
    _Bool _hasSetShowOperation;
    _Bool _showOperation;
    UIButton *_downloadBtn;
    HomeToolMenuOperationView *_operationView;
    UIButton *_messageCenterBtn;
    UIImageView *_messageCenterRedPoint;
    UILabel *_redNumberLabel;
    CALayer *_messageCircleLayer;
    CALayer *_downloadCircleLayer;
    NSDictionary *_buttonConfigInfo;
    NSString *_operationImageURL;
    NSString *_operationRouterURL;
    unsigned long long _colorType;
}

@property(nonatomic) unsigned long long colorType; // @synthesize colorType=_colorType;
@property(copy, nonatomic) NSString *operationRouterURL; // @synthesize operationRouterURL=_operationRouterURL;
@property(copy, nonatomic) NSString *operationImageURL; // @synthesize operationImageURL=_operationImageURL;
@property(nonatomic) _Bool showOperation; // @synthesize showOperation=_showOperation;
@property(nonatomic) _Bool hasSetShowOperation; // @synthesize hasSetShowOperation=_hasSetShowOperation;
@property(nonatomic) _Bool closeRedNumber; // @synthesize closeRedNumber=_closeRedNumber;
@property(retain, nonatomic) NSDictionary *buttonConfigInfo; // @synthesize buttonConfigInfo=_buttonConfigInfo;
@property(retain, nonatomic) CALayer *downloadCircleLayer; // @synthesize downloadCircleLayer=_downloadCircleLayer;
@property(retain, nonatomic) CALayer *messageCircleLayer; // @synthesize messageCircleLayer=_messageCircleLayer;
@property(nonatomic) _Bool showMessageCenterRedPoint; // @synthesize showMessageCenterRedPoint=_showMessageCenterRedPoint;
@property(retain, nonatomic) UILabel *redNumberLabel; // @synthesize redNumberLabel=_redNumberLabel;
@property(retain, nonatomic) UIImageView *messageCenterRedPoint; // @synthesize messageCenterRedPoint=_messageCenterRedPoint;
@property(retain, nonatomic) UIButton *messageCenterBtn; // @synthesize messageCenterBtn=_messageCenterBtn;
@property(retain, nonatomic) HomeToolMenuOperationView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) UIButton *downloadBtn; // @synthesize downloadBtn=_downloadBtn;
@property(nonatomic) _Bool isSpecialChannelStyle; // @synthesize isSpecialChannelStyle=_isSpecialChannelStyle;
- (void).cxx_destruct;
- (void)updateDownloadCircleLayerBackgroundColorWithDefaultColor:(id)arg1;
- (void)updateMessageCircleLayerBackgroundColorWithDefaultColor:(id)arg1;
- (void)updateLayerBackgroundColorWith:(id)arg1 skinColor:(id)arg2 defaultColor:(id)arg3;
- (void)setDownloadImageColor:(id)arg1;
- (void)setMessageImageColor:(id)arg1;
- (void)setButton:(id)arg1 imageColor:(id)arg2;
- (void)updateTheme:(id)arg1;
- (void)receiveInitialConfigurationNotification:(id)arg1;
- (void)pageWillDeactivate;
- (void)pageDidActive;
- (void)exposureToolButton;
- (void)downloadImage:(id)arg1;
- (id)fetchOperation;
- (_Bool)isShowOperationView;
- (void)updateRedPointNumberFrame:(long long)arg1;
- (void)updateRedPointNumber:(long long)arg1 type:(long long)arg2;
- (void)layoutSubviews;
- (void)buttonClick:(id)arg1;
- (void)updateWithType:(unsigned long long)arg1;
- (void)updateFeedRed;
- (void)updateFeedImageIcon;
- (void)setupSubViews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

