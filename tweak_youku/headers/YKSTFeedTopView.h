//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YKSTFeedViewProtocol.h"

@class NSString, UIButton, UIImageView, UILabel, YKSTFeedModel;

@interface YKSTFeedTopView : UIView <YKSTFeedViewProtocol>
{
    id <YKSTFeedViewDelegate> _delegate;
    YKSTFeedModel *_model;
    UIImageView *_avatarImgView;
    UILabel *_userLabel;
    UIButton *_follow;
    UIButton *_more;
}

+ (double)heightForWidth:(double)arg1 model:(id)arg2;
@property(retain, nonatomic) UIButton *more; // @synthesize more=_more;
@property(retain, nonatomic) UIButton *follow; // @synthesize follow=_follow;
@property(retain, nonatomic) UILabel *userLabel; // @synthesize userLabel=_userLabel;
@property(retain, nonatomic) UIImageView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(retain, nonatomic) YKSTFeedModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <YKSTFeedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)needExposeExtendsWithModel:(id)arg1;
- (void)moreClick:(id)arg1;
- (void)overflowBtnClicked:(id)arg1;
- (void)avatarClicked;
- (void)userFollowStateChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
