//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardPicBody.h"

@class UIImageView, UILabel, YKFeedMPModel;

@interface YKFeedCardMPBody : YKFeedCardPicBody
{
    YKFeedMPModel *_modelMP;
    long long _imgCount;
    double _padding;
    double _margin;
    UILabel *_imgCountLabel;
    UIImageView *_lastImgView;
}

@property(nonatomic) __weak UIImageView *lastImgView; // @synthesize lastImgView=_lastImgView;
@property(retain, nonatomic) UILabel *imgCountLabel; // @synthesize imgCountLabel=_imgCountLabel;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) long long imgCount; // @synthesize imgCount=_imgCount;
@property(nonatomic) __weak YKFeedMPModel *modelMP; // @synthesize modelMP=_modelMP;
- (void).cxx_destruct;
- (void)configPlayCardWithDescText:(id)arg1 imgs:(id)arg2;
- (void)configWithModel:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)postParams;
- (struct CGRect)descTextRect;
- (void)relayout;
- (void)fillUI;
- (void)defaultConfig;

@end
