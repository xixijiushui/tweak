//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface UploadCommunitySelectTopicTipView : UIView
{
    UIImageView *_tipImageView;
    UILabel *_tipLabel;
}

+ (_Bool)isShowGuideView;
+ (void)hideGuideView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
- (void).cxx_destruct;
- (void)tapGestureRecognizer:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

