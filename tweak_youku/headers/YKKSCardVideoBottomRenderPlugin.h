//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KSRenderPlugin.h"

@class UIImageView, UILabel, UIView;

@interface YKKSCardVideoBottomRenderPlugin : KSRenderPlugin
{
    UIView *_contentView;
    UIImageView *_shadowImageView;
    UILabel *_bottomLabel;
    UILabel *_topLabel;
}

+ (id)defaultConfig;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)render;

@end

