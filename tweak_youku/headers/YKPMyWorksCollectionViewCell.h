//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView, UILabel, YKFFanplayFanWorkPO, YKPIconLabel, YKUGradientView;

@interface YKPMyWorksCollectionViewCell : UICollectionViewCell
{
    YKFFanplayFanWorkPO *_work;
    CDUnknownBlockType _shareButtonDidClickedHandler;
    UILabel *_reviewBoard;
    UIImageView *_coverImgView;
    UILabel *_lengthLabel;
    YKPIconLabel *_likeCountLabel;
    YKPIconLabel *_playCountLabel;
    YKUGradientView *_bottomGradientView;
    YKUGradientView *_topGradientView;
    UIButton *_shareButton;
}

@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) YKUGradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) YKUGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) YKPIconLabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) YKPIconLabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UILabel *lengthLabel; // @synthesize lengthLabel=_lengthLabel;
@property(retain, nonatomic) UIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(retain, nonatomic) UILabel *reviewBoard; // @synthesize reviewBoard=_reviewBoard;
@property(copy, nonatomic) CDUnknownBlockType shareButtonDidClickedHandler; // @synthesize shareButtonDidClickedHandler=_shareButtonDidClickedHandler;
@property(nonatomic) __weak YKFFanplayFanWorkPO *work; // @synthesize work=_work;
- (void).cxx_destruct;
- (void)shareAction:(id)arg1;
- (void)layoutSubviews;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
