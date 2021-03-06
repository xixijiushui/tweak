//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTIntroBaseCard.h"

@class PTIntroVideo, PTMark, UIImageView, UILabel;

@interface PTIntroVideoCard : PTIntroBaseCard
{
    UIImageView *_imgView;
    UILabel *_titleLabel;
    UIImageView *_playIcon;
    UILabel *_playNumLabel;
    PTIntroVideo *_cardModel;
    PTMark *_mark;
}

@property(retain, nonatomic) PTMark *mark; // @synthesize mark=_mark;
@property(retain, nonatomic) PTIntroVideo *cardModel; // @synthesize cardModel=_cardModel;
@property(retain, nonatomic) UILabel *playNumLabel; // @synthesize playNumLabel=_playNumLabel;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (void)clickCard;
- (void)layout;
- (void)setUpModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

