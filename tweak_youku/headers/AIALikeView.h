//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIACircleView.h"

@class AIALikeCounterView, AIAStarAnimation, NSArray, NSString, UIButton, UIImage, UIImageView, UIView;

@interface AIALikeView : AIACircleView
{
    _Bool _reportCounter;
    _Bool _delaySelectorFinish;
    _Bool _firstClick;
    NSString *_resourceURL;
    NSArray *_defaultStarImages;
    NSString *_liveId;
    UIImage *_iconDefaultImage;
    id <AIALikeViewUTProtocal> _utDelegate;
    long long _likeCount;
    long long _likeTotalCount;
    long long _lastLikeCount;
    long long _totalCilckCount;
    long long _mlastUpdateTime;
    AIALikeCounterView *_likeCounterView;
    UIButton *_iconfontBtn;
    AIAStarAnimation *_starsView;
    UIView *_backView;
    UIView *_haloView;
    UIImageView *_iconView;
    struct CGPoint _originPoint;
    struct CGPoint _endPoint;
}

@property(nonatomic) _Bool firstClick; // @synthesize firstClick=_firstClick;
@property(nonatomic) _Bool delaySelectorFinish; // @synthesize delaySelectorFinish=_delaySelectorFinish;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *haloView; // @synthesize haloView=_haloView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) AIAStarAnimation *starsView; // @synthesize starsView=_starsView;
@property(retain, nonatomic) UIButton *iconfontBtn; // @synthesize iconfontBtn=_iconfontBtn;
@property(retain, nonatomic) AIALikeCounterView *likeCounterView; // @synthesize likeCounterView=_likeCounterView;
@property(nonatomic) long long mlastUpdateTime; // @synthesize mlastUpdateTime=_mlastUpdateTime;
@property(nonatomic) long long totalCilckCount; // @synthesize totalCilckCount=_totalCilckCount;
@property(nonatomic) long long lastLikeCount; // @synthesize lastLikeCount=_lastLikeCount;
@property(nonatomic) long long likeTotalCount; // @synthesize likeTotalCount=_likeTotalCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) __weak id <AIALikeViewUTProtocal> utDelegate; // @synthesize utDelegate=_utDelegate;
@property(retain, nonatomic) UIImage *iconDefaultImage; // @synthesize iconDefaultImage=_iconDefaultImage;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSArray *defaultStarImages; // @synthesize defaultStarImages=_defaultStarImages;
@property(nonatomic) _Bool reportCounter; // @synthesize reportCounter=_reportCounter;
@property(copy, nonatomic) NSString *resourceURL; // @synthesize resourceURL=_resourceURL;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint originPoint; // @synthesize originPoint=_originPoint;
- (void).cxx_destruct;
- (void)leaveRoomUT;
- (void)firstClickUT;
- (void)updateIconWithImagePtr:(id)arg1;
- (void)updateIconWithImageURL:(id)arg1;
- (void)refreshWithData:(long long)arg1 popAnimation:(_Bool)arg2 resourceURL:(id)arg3;
- (void)showStarAnimationView;
- (void)hideStarAnimationView;
- (void)addKeyFrameAnimation;
- (void)delayUploadLikeCount;
- (void)alwaysShowAnimationView:(_Bool)arg1 withCount:(long long)arg2;
- (void)onTapGesture:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)initData;
- (id)initWithFrameWithColor:(struct CGRect)arg1 color:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

