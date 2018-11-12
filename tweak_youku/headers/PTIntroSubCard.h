//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTIntroBaseCard.h"

@class PTIntroUser, PTSubscribeButton, UIImageView, UIView;

@interface PTIntroSubCard : PTIntroBaseCard
{
    PTSubscribeButton *_subScribeBtn;
    UIImageView *_header;
    PTIntroUser *_user;
    UIView *_bgView;
    UIImageView *_defaultBgImageView;
}

@property(retain, nonatomic) UIImageView *defaultBgImageView; // @synthesize defaultBgImageView=_defaultBgImageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) PTIntroUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UIImageView *header; // @synthesize header=_header;
@property(retain, nonatomic) PTSubscribeButton *subScribeBtn; // @synthesize subScribeBtn=_subScribeBtn;
- (void).cxx_destruct;
- (void)clickCard;
- (void)handleSubAction:(id)arg1;
- (void)setData:(id)arg1;
- (void)layoutSubviews;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

