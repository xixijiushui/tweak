//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView, YKFeedRecommandPGCBody, YKSTFeedModel;

@interface YKFeeDRecommandPGCCell : UICollectionViewCell
{
    int _index;
    id <YKSTFeedViewDelegate> _delegate;
    YKSTFeedModel *_model;
    YKFeedRecommandPGCBody *_parentView;
    NSString *_trackInfo;
    NSString *_pageName;
    NSString *_spmAB;
    NSString *_spmC;
    NSString *_spmD;
    NSString *_scm;
    UIImageView *_avatar;
    UIView *_avatarBg;
    UILabel *_nickNameLabel;
    UILabel *_descLabel;
    UIButton *_followBtn;
    UIView *_containerView;
    UITapGestureRecognizer *_ges;
}

@property(retain, nonatomic) UITapGestureRecognizer *ges; // @synthesize ges=_ges;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIView *avatarBg; // @synthesize avatarBg=_avatarBg;
@property(retain, nonatomic) UIImageView *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *spmD; // @synthesize spmD=_spmD;
@property(copy, nonatomic) NSString *spmC; // @synthesize spmC=_spmC;
@property(copy, nonatomic) NSString *spmAB; // @synthesize spmAB=_spmAB;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) __weak YKFeedRecommandPGCBody *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) YKSTFeedModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <YKSTFeedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)focusBtnClicked:(id)arg1;
- (void)goDetail;
- (void)setupUI;
- (void)setupData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

