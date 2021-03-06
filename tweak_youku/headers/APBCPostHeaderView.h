//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "APBCPostCardComponent.h"

@class NSString, TTFPersonalLevelImageView, UIButton, UIImageView, UILabel, YKFSimpleLinearLayout;

@interface APBCPostHeaderView : UIView <APBCPostCardComponent>
{
    CDUnknownBlockType operation;
    UILabel *_recommendReasonLabel;
    UILabel *_timeLabel;
    UILabel *_viewCountLabel;
    UILabel *_operationLabel;
    UIButton *_operationButton;
    id <APBCHeaderViewModelProtocol> _viewModel;
    YKFSimpleLinearLayout *_linearLayout;
    UIImageView *_avatarImageView;
    UIButton *_avatarButton;
    UILabel *_posterNameLabel;
    UIView *_identityLabel;
    UIImageView *_identifierImageView;
    TTFPersonalLevelImageView *_levelImageView;
    UIImageView *_starcomingMarkImageView;
    UIImageView *_artistMarkImageView;
    NSString *_displayType;
    NSString *_schemaUrl;
}

+ (double)heightWithViewModel:(id)arg1 maxWidth:(double)arg2;
@property(copy, nonatomic) NSString *schemaUrl; // @synthesize schemaUrl=_schemaUrl;
@property(copy, nonatomic) NSString *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) UIImageView *artistMarkImageView; // @synthesize artistMarkImageView=_artistMarkImageView;
@property(retain, nonatomic) UIImageView *starcomingMarkImageView; // @synthesize starcomingMarkImageView=_starcomingMarkImageView;
@property(retain, nonatomic) TTFPersonalLevelImageView *levelImageView; // @synthesize levelImageView=_levelImageView;
@property(retain, nonatomic) UIImageView *identifierImageView; // @synthesize identifierImageView=_identifierImageView;
@property(retain, nonatomic) UIView *identityLabel; // @synthesize identityLabel=_identityLabel;
@property(retain, nonatomic) UILabel *posterNameLabel; // @synthesize posterNameLabel=_posterNameLabel;
@property(retain, nonatomic) UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) YKFSimpleLinearLayout *linearLayout; // @synthesize linearLayout=_linearLayout;
@property(retain, nonatomic) id <APBCHeaderViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *operationButton; // @synthesize operationButton=_operationButton;
@property(retain, nonatomic) UILabel *operationLabel; // @synthesize operationLabel=_operationLabel;
@property(retain, nonatomic) UILabel *viewCountLabel; // @synthesize viewCountLabel=_viewCountLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(copy, nonatomic) CDUnknownBlockType operation; // @synthesize operation;
- (void).cxx_destruct;
- (void)showInformActionSheet;
- (void)operationTouched:(id)arg1;
- (void)avatarTouched:(id)arg1;
- (void)layoutSubviews;
- (void)updateViewWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

