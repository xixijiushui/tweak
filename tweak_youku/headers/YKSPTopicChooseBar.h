//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface YKSPTopicChooseBar : UIView
{
    UILabel *_topicLabel;
    UIView *_seperateBarTop;
    UIView *_seperateBarBottom;
    UIImageView *_arrowImg;
    UIImageView *_poundImg;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIImageView *poundImg; // @synthesize poundImg=_poundImg;
@property(retain, nonatomic) UIImageView *arrowImg; // @synthesize arrowImg=_arrowImg;
@property(retain, nonatomic) UIView *seperateBarBottom; // @synthesize seperateBarBottom=_seperateBarBottom;
@property(retain, nonatomic) UIView *seperateBarTop; // @synthesize seperateBarTop=_seperateBarTop;
@property(retain, nonatomic) UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
- (void).cxx_destruct;
- (id)getTopicText;
- (void)setChooseBarEnable:(_Bool)arg1;
- (void)setTopicText:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

