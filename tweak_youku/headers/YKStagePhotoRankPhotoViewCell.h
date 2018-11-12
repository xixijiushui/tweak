//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView, UILabel, YKStagePhotoSinglePhotoModel;

@interface YKStagePhotoRankPhotoViewCell : UICollectionViewCell
{
    _Bool _singleRow;
    long long _likeCount;
    UIImageView *_rankImageView;
    UILabel *_rankLabel;
    UIButton *_likeButton;
    UILabel *_likeCountLabel;
    UIImageView *_imageView;
    long long _rankIndex;
    UIImageView *_shadowImageView;
    YKStagePhotoSinglePhotoModel *_photoModel;
}

@property(retain, nonatomic) YKStagePhotoSinglePhotoModel *photoModel; // @synthesize photoModel=_photoModel;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(nonatomic) long long rankIndex; // @synthesize rankIndex=_rankIndex;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) UIImageView *rankImageView; // @synthesize rankImageView=_rankImageView;
@property(nonatomic) _Bool singleRow; // @synthesize singleRow=_singleRow;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
- (void).cxx_destruct;
- (void)setLike:(_Bool)arg1;
- (void)likeButtonClick:(id)arg1;
- (void)configViews:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

