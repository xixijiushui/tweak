//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKTableViewCellView.h"

#import "DetailSubscribeViewDelegate.h"

@class CALayer, CATextLayer, DetailCardsController, DetailModel, DetailSubscribeView, NSArray, NSString, UIButton, UICollectionView, UIImageView, UILabel, UIView;

@interface DetailBannerIntroView : YKTableViewCellView <DetailSubscribeViewDelegate>
{
    long long informStyle;
    _Bool _showLine;
    _Bool _showSubscribeButton;
    id <DetailBannerIntroViewDelegate> _delegate;
    DetailCardsController *_cardsController;
    UICollectionView *_starCardViewCollection;
    long long _bannerIntroViewType;
    DetailModel *_detailModel;
    UILabel *_introDescLabel;
    UILabel *_playingAmountLabel;
    UIButton *_playingAmountMoreBtn;
    UIImageView *_playingAmountMoreView;
    UILabel *_playingAmountMoreLabel;
    CATextLayer *_scoreTextLayer;
    CATextLayer *_doubanTextLayer;
    UILabel *_originalWorkLabel;
    UILabel *_areaLabel;
    UILabel *_dubLabel;
    UILabel *_hostLabel;
    UILabel *_typeLabel;
    UILabel *_introLabel;
    UILabel *_updateLabel;
    UIView *_describeView;
    double _describeAreaX;
    UIView *_totalBackView;
    CALayer *_lineLayer;
    UIButton *_voteUpBtn;
    UIView *_topicContainer;
    NSArray *_starArray;
    DetailSubscribeView *_detailSubscribeView;
    UIButton *_informButton;
}

@property(retain, nonatomic) UIButton *informButton; // @synthesize informButton=_informButton;
@property(retain, nonatomic) DetailSubscribeView *detailSubscribeView; // @synthesize detailSubscribeView=_detailSubscribeView;
@property(copy, nonatomic) NSArray *starArray; // @synthesize starArray=_starArray;
@property(retain, nonatomic) UIView *topicContainer; // @synthesize topicContainer=_topicContainer;
@property(retain, nonatomic) UIButton *voteUpBtn; // @synthesize voteUpBtn=_voteUpBtn;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) UIView *totalBackView; // @synthesize totalBackView=_totalBackView;
@property(nonatomic) double describeAreaX; // @synthesize describeAreaX=_describeAreaX;
@property(retain, nonatomic) UIView *describeView; // @synthesize describeView=_describeView;
@property(retain, nonatomic) UILabel *updateLabel; // @synthesize updateLabel=_updateLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UILabel *hostLabel; // @synthesize hostLabel=_hostLabel;
@property(retain, nonatomic) UILabel *dubLabel; // @synthesize dubLabel=_dubLabel;
@property(retain, nonatomic) UILabel *areaLabel; // @synthesize areaLabel=_areaLabel;
@property(retain, nonatomic) UILabel *originalWorkLabel; // @synthesize originalWorkLabel=_originalWorkLabel;
@property(retain, nonatomic) CATextLayer *doubanTextLayer; // @synthesize doubanTextLayer=_doubanTextLayer;
@property(retain, nonatomic) CATextLayer *scoreTextLayer; // @synthesize scoreTextLayer=_scoreTextLayer;
@property(retain, nonatomic) UILabel *playingAmountMoreLabel; // @synthesize playingAmountMoreLabel=_playingAmountMoreLabel;
@property(retain, nonatomic) UIImageView *playingAmountMoreView; // @synthesize playingAmountMoreView=_playingAmountMoreView;
@property(retain, nonatomic) UIButton *playingAmountMoreBtn; // @synthesize playingAmountMoreBtn=_playingAmountMoreBtn;
@property(retain, nonatomic) UILabel *playingAmountLabel; // @synthesize playingAmountLabel=_playingAmountLabel;
@property(retain, nonatomic) UILabel *introDescLabel; // @synthesize introDescLabel=_introDescLabel;
@property(retain, nonatomic) DetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) long long bannerIntroViewType; // @synthesize bannerIntroViewType=_bannerIntroViewType;
@property(nonatomic) __weak UICollectionView *starCardViewCollection; // @synthesize starCardViewCollection=_starCardViewCollection;
@property(nonatomic) _Bool showSubscribeButton; // @synthesize showSubscribeButton=_showSubscribeButton;
@property(nonatomic) _Bool showLine; // @synthesize showLine=_showLine;
@property(nonatomic) __weak DetailCardsController *cardsController; // @synthesize cardsController=_cardsController;
@property(nonatomic) __weak id <DetailBannerIntroViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)detailSubscribeNeedUpdate:(id)arg1;
- (void)didPushUserSpace;
- (void)detailSubscribeView:(id)arg1 didChangeSubscribeStateFrom:(long long)arg2 to:(long long)arg3;
- (_Bool)detailSubscribeView:(id)arg1 shouldChangeSubscribeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)dismissPlayingAmountMoreView;
- (void)showPlayingAmountMoreView;
- (void)openSuggestiongPage;
- (void)voteUp;
- (_Bool)showSubscribeView;
- (void)refreshSubscribeState;
- (void)setupSubscribeView;
- (void)makeupInformButtonWithStyle:(long long)arg1;
- (id)createSeparatorLabel;
- (id)creatLabel;
- (id)setTextLayerWithString:(id)arg1 textLayerType:(long long)arg2;
- (void)scaleAnimationWithButton:(id)arg1;
- (void)praiseSuccess;
- (void)setIntroContentsWithDetailModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

