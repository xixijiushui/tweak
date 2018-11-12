//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, LSMarginLabel, UIImageView;

@interface LSPhoneSendBulletView : UIView
{
    UIImageView *_userImageView;
    CDUnknownBlockType _sendBlock;
    CALayer *_lineLayer;
    LSMarginLabel *_entranceLabel;
    UIImageView *_imageView;
    CALayer *_headLineLayer;
}

@property(retain, nonatomic) CALayer *headLineLayer; // @synthesize headLineLayer=_headLineLayer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) LSMarginLabel *entranceLabel; // @synthesize entranceLabel=_entranceLabel;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)portraitBounds;
- (id)initWithFrame:(struct CGRect)arg1;

@end
