//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class OPBarrageAdvModel, UIButton, UIImageView, UILabel;

@interface OPBarrageAdvCornerView : UIView
{
    _Bool _hasClick;
    UIView *_backgroundView;
    UIImageView *_imageView;
    UIButton *_subcribeButton;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    OPBarrageAdvModel *_advModel;
}

+ (id)sharedView;
@property(nonatomic) _Bool hasClick; // @synthesize hasClick=_hasClick;
@property(retain, nonatomic) OPBarrageAdvModel *advModel; // @synthesize advModel=_advModel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *subcribeButton; // @synthesize subcribeButton=_subcribeButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)refreshSubView;
- (id)init;

@end

