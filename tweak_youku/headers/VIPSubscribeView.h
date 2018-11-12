//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CMSCardVideo, NSString, UIButton, UILabel;

@interface VIPSubscribeView : UIView
{
    UILabel *_subscribeLabel;
    _Bool _isSelect;
    UIButton *_subscribeButton;
    CMSCardVideo *_cardVideo;
    id <VIPSubscribeViewDelegate> _delegate;
    NSString *_sid;
    NSString *_componentId;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(nonatomic) __weak id <VIPSubscribeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CMSCardVideo *cardVideo; // @synthesize cardVideo=_cardVideo;
@property(retain, nonatomic) UIButton *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
- (void).cxx_destruct;
- (id)urlEncode:(id)arg1;
- (_Bool)isShowGoSettingToast;
- (_Bool)needWriteCalendar;
- (void)handleCalenderRerservationWithReserationStatus:(_Bool)arg1;
- (id)timestampFromPropertyDict:(id)arg1;
- (void)showSubscribeSuccess;
- (void)showSubscribeNormal;
- (void)showOderSuccessToast;
- (void)didSelectSubscriSuccess:(id)arg1;
- (void)subscribeButtonEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

