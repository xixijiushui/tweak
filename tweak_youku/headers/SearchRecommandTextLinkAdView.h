//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ADTeamModel, UIImageView, UILabel;

@interface SearchRecommandTextLinkAdView : UIView
{
    ADTeamModel *_model;
    UIView *_separatorView;
    UIImageView *_icon;
    UILabel *_linkWord;
}

@property(retain, nonatomic) UILabel *linkWord; // @synthesize linkWord=_linkWord;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) ADTeamModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)relayoutSubViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

