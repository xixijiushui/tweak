//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "DYRUFeedConfigModelProtocol.h"

@class DYRUFeedModel, NSString, UIControl, UIImage, UIImageView, UILabel;

@interface DYRUFeedCard : UIView <DYRUFeedConfigModelProtocol>
{
    CDUnknownBlockType _feedCallBack;
    UIImageView *_coverImageView;
    UILabel *_desLabel;
    UIImageView *_playIcon;
    UILabel *_totalPlayLabel;
    DYRUFeedModel *_feed;
    UIImage *_cardPlaceholderImage;
    UIControl *_ctl;
    double _height;
    UIImageView *_gradientImageView;
}

+ (id)initWithFeedCard:(id)arg1;
+ (struct CGSize)cardSize:(id)arg1;
@property(retain, nonatomic) UIImageView *gradientImageView; // @synthesize gradientImageView=_gradientImageView;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIControl *ctl; // @synthesize ctl=_ctl;
@property(retain, nonatomic) UIImage *cardPlaceholderImage; // @synthesize cardPlaceholderImage=_cardPlaceholderImage;
@property(retain, nonatomic) DYRUFeedModel *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) UILabel *totalPlayLabel; // @synthesize totalPlayLabel=_totalPlayLabel;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)handleTapUpInsideAction:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType feedCallBack; // @synthesize feedCallBack=_feedCallBack;
- (void)layoutSubviews;
- (void)unConfigFeed;
- (void)configFeed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
