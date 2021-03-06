//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UILabel, UIView, VIPCMSComponentContext, YKVIPWelfareCardVideo;

@interface YKVIPGrabWelfareCellTitleView : UIControl
{
    _Bool _isSelected;
    _Bool _isActive;
    VIPCMSComponentContext *_componentContext;
    NSString *_title;
    NSString *_subTitle;
    long long _titleCount;
    YKVIPWelfareCardVideo *_cardVieo;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_bottomLineView;
    UIView *_leftLineView;
    UIView *_topLineView;
}

@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YKVIPWelfareCardVideo *cardVieo; // @synthesize cardVieo=_cardVieo;
@property(nonatomic) long long titleCount; // @synthesize titleCount=_titleCount;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) VIPCMSComponentContext *componentContext; // @synthesize componentContext=_componentContext;
- (void).cxx_destruct;
- (_Bool)isTitleStringToday:(id)arg1;
- (void)updateTitleFont;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
- (void)setTitle:(id)arg1 subTitle:(id)arg2 titleColor:(id)arg3 titleFont:(id)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

