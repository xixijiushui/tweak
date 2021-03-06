//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface LFCoffeeEmptyView : UIView
{
    NSString *_emptyTitle;
    UIView *_containerView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSString *emptyTitle; // @synthesize emptyTitle=_emptyTitle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initializer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

