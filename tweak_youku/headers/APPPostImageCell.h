//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPPostBaseCell.h"

#import "GIFImageViewDelegate.h"

@class GIFImageView, NSString, UITapGestureRecognizer;

@interface APPPostImageCell : APPPostBaseCell <GIFImageViewDelegate>
{
    double imageViewHeight;
    double imageViewWidth;
    GIFImageView *_gifImageView;
    UITapGestureRecognizer *_imageTapGes;
}

+ (double)calculateHeight:(id)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *imageTapGes; // @synthesize imageTapGes=_imageTapGes;
@property(retain, nonatomic) GIFImageView *gifImageView; // @synthesize gifImageView=_gifImageView;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)imageViewDidLoop:(id)arg1;
- (void)imageDidTapGes:(id)arg1;
- (_Bool)imageViewShouldStartAnimating:(id)arg1;
- (void)playGifImage;
- (void)bindViewModel:(id)arg1;
- (void)updateConstraints;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

