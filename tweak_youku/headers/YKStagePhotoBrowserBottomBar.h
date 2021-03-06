//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface YKStagePhotoBrowserBottomBar : UIView
{
    long long _likeCount;
    CDUnknownBlockType _OnDIYButtonClick;
    CDUnknownBlockType _OnLikeButtonClick;
    CDUnknownBlockType _OnDownloadButtonClick;
    CDUnknownBlockType _OnShareButtonClick;
    UILabel *_descLabel;
    UIView *_descTitleBgView;
    UILabel *_pageLabel;
    UIView *_toolbarBgView;
    UIButton *_diyButton;
    UIButton *_likeButton;
    UIButton *_downloadButton;
    UIButton *_shareButton;
    UILabel *_likeCountLabel;
}

@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *diyButton; // @synthesize diyButton=_diyButton;
@property(retain, nonatomic) UIView *toolbarBgView; // @synthesize toolbarBgView=_toolbarBgView;
@property(retain, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(retain, nonatomic) UIView *descTitleBgView; // @synthesize descTitleBgView=_descTitleBgView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(copy, nonatomic) CDUnknownBlockType OnShareButtonClick; // @synthesize OnShareButtonClick=_OnShareButtonClick;
@property(copy, nonatomic) CDUnknownBlockType OnDownloadButtonClick; // @synthesize OnDownloadButtonClick=_OnDownloadButtonClick;
@property(copy, nonatomic) CDUnknownBlockType OnLikeButtonClick; // @synthesize OnLikeButtonClick=_OnLikeButtonClick;
@property(copy, nonatomic) CDUnknownBlockType OnDIYButtonClick; // @synthesize OnDIYButtonClick=_OnDIYButtonClick;
- (void).cxx_destruct;
- (void)configPageLabelWithPage:(id)arg1;
- (void)setLike:(_Bool)arg1;
- (void)setLikeCount:(long long)arg1;
- (void)shareButtonClick:(id)arg1;
- (void)downloadButtonClick:(id)arg1;
- (void)likeButtonClick:(id)arg1;
- (void)diyButtonClick:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

