//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardNewBody.h"

@class NSArray, NSMutableArray, UIImageView, UILabel;

@interface STFeedPostPicMoreImageBody : YKFeedCardNewBody
{
    long long _imgCount;
    double _padding;
    double _margin;
    UILabel *_imgCountLabel;
    UIImageView *_lastImgView;
    NSMutableArray *_coverImgViews;
    NSArray *_imgs;
}

+ (double)heightForModel:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *imgs; // @synthesize imgs=_imgs;
@property(readonly, nonatomic) NSMutableArray *coverImgViews; // @synthesize coverImgViews=_coverImgViews;
@property(nonatomic) __weak UIImageView *lastImgView; // @synthesize lastImgView=_lastImgView;
@property(retain, nonatomic) UILabel *imgCountLabel; // @synthesize imgCountLabel=_imgCountLabel;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) long long imgCount; // @synthesize imgCount=_imgCount;
- (void).cxx_destruct;
- (void)setImgs:(id)arg1;
- (void)configPlayCardWithDescText:(id)arg1 imgs:(id)arg2;
- (void)configWithModel:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)postParams;
- (struct CGRect)descTextRect;
- (void)relayout;
- (void)fillUI;
- (void)defaultConfig;

@end

