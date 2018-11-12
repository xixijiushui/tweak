//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CMSComponentZPDSVideoModel, UIImage, UIImageGIFView, UIImageView, UILabel, UIViewController;

@interface ZPDSmallVideoComponentView : UIView
{
    CMSComponentZPDSVideoModel *_model;
    UIViewController *_reportVc;
    UIImageGIFView *_iconImageView;
    UIImageView *_firstImageView;
    UIImageView *_playIconImage;
    UILabel *_playNumber;
    UILabel *_likeNumber;
    UIImage *_placeholderImage;
}

@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UILabel *likeNumber; // @synthesize likeNumber=_likeNumber;
@property(retain, nonatomic) UILabel *playNumber; // @synthesize playNumber=_playNumber;
@property(retain, nonatomic) UIImageView *playIconImage; // @synthesize playIconImage=_playIconImage;
@property(retain, nonatomic) UIImageView *firstImageView; // @synthesize firstImageView=_firstImageView;
@property(retain, nonatomic) UIImageGIFView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UIViewController *reportVc; // @synthesize reportVc=_reportVc;
@property(retain, nonatomic) CMSComponentZPDSVideoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)pageMiniappDataReportSpm:(id)arg1 andArg1:(id)arg2 andScm:(id)arg3;
- (void)clickBtbaction;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

