//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIControl, UILabel, YKVIPWelfareCardVideoVipWelfareListModel;

@interface YKVIPPopWarnView : UIView
{
    long long _viewType;
    YKVIPWelfareCardVideoVipWelfareListModel *_model;
    NSString *_codeMsg;
    UILabel *_titleLabel;
    UIControl *_cancelBtn;
    UILabel *_cancelLabel;
    UIControl *_okBtn;
    UILabel *_okLabel;
    UIControl *_coloseBtn;
    UIView *_lineView1;
    UIView *_lineView2;
}

@property(retain, nonatomic) UIView *lineView2; // @synthesize lineView2=_lineView2;
@property(retain, nonatomic) UIView *lineView1; // @synthesize lineView1=_lineView1;
@property(retain, nonatomic) UIControl *coloseBtn; // @synthesize coloseBtn=_coloseBtn;
@property(retain, nonatomic) UILabel *okLabel; // @synthesize okLabel=_okLabel;
@property(retain, nonatomic) UIControl *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) UILabel *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(retain, nonatomic) UIControl *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *codeMsg; // @synthesize codeMsg=_codeMsg;
@property(retain, nonatomic) YKVIPWelfareCardVideoVipWelfareListModel *model; // @synthesize model=_model;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clickOK:(id)arg1;
- (void)clickClose:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

