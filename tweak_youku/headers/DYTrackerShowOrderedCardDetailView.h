//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DYTrackerShowOredreCardDetail, UIButton, UIImageView, UILabel;

@interface DYTrackerShowOrderedCardDetailView : UIView
{
    UIImageView *_picImage;
    UILabel *_titleLable;
    UILabel *_subtitleLable;
    UILabel *_bottomLable;
    UILabel *_summaryLable;
    UIImageView *_shadowImage;
    UIButton *_moreButton;
    UIImageView *_placeholderImage;
    CDUnknownBlockType _actionCallBack;
    DYTrackerShowOredreCardDetail *_model;
}

@property(retain, nonatomic) DYTrackerShowOredreCardDetail *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType actionCallBack; // @synthesize actionCallBack=_actionCallBack;
- (void).cxx_destruct;
- (void)moreButtonClick;
- (void)imageButtonClick:(id)arg1;
- (void)setComponent:(id)arg1;
- (void)initCustomViews;
- (id)init;

@end

