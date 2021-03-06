//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKShortVideoBaseCell.h"

@class UIButton, UIImageView, UILabel, YKPlayEndMetaInfo;

@interface YKShortVideoPlayEndCell : YKShortVideoBaseCell
{
    id <YKShortVideoPlayEndDelegate> _delegate;
    UIButton *_exitButton;
    UIImageView *_bgImgView;
    UILabel *_updateLable;
    UILabel *_fromTitleLable;
    UILabel *_promptLable;
    UIImageView *_promptImageView;
    UILabel *_channelEntranceLabel;
    YKPlayEndMetaInfo *_metaInfo;
    UIImageView *_lineImageView;
}

+ (void)initialize;
@property(retain, nonatomic) UIImageView *lineImageView; // @synthesize lineImageView=_lineImageView;
@property(retain, nonatomic) YKPlayEndMetaInfo *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(retain, nonatomic) UILabel *channelEntranceLabel; // @synthesize channelEntranceLabel=_channelEntranceLabel;
@property(retain, nonatomic) UIImageView *promptImageView; // @synthesize promptImageView=_promptImageView;
@property(retain, nonatomic) UILabel *promptLable; // @synthesize promptLable=_promptLable;
@property(retain, nonatomic) UILabel *fromTitleLable; // @synthesize fromTitleLable=_fromTitleLable;
@property(retain, nonatomic) UILabel *updateLable; // @synthesize updateLable=_updateLable;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(nonatomic) __weak id <YKShortVideoPlayEndDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onExitButtonClick:(id)arg1;
- (void)_innterInit;
- (void)refreshUI;
- (void)setData:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)analytics_onExitButtonClick:(id)arg1;

@end

