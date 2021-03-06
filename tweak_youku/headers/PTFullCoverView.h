//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaseLoadingView, UIButton, UIImageView, UILabel;

@interface PTFullCoverView : UIView
{
    long long _type;
    CDUnknownBlockType _Action;
    BaseLoadingView *_loadingView;
    UIButton *_loginBtn;
    UIButton *_perfectRecommendBtn;
    UIImageView *_coverImageView;
    UILabel *_tipLabel;
}

+ (id)showFullCoverViewOnView:(id)arg1 frame:(struct CGRect)arg2 fullCoverType:(long long)arg3 action:(CDUnknownBlockType)arg4;
+ (id)showFullCoverViewOnView:(id)arg1 fullCoverType:(long long)arg2 action:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIButton *perfectRecommendBtn; // @synthesize perfectRecommendBtn=_perfectRecommendBtn;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) BaseLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType Action; // @synthesize Action=_Action;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setRecommendBtnHidden:(_Bool)arg1;
- (_Bool)canShow;
- (void)dismiss;
- (void)handleNetWorkErr:(id)arg1;
- (void)handleBtnAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 fullcoverType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

