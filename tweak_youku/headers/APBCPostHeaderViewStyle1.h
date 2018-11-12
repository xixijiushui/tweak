//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "APBCPostCardComponent.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface APBCPostHeaderViewStyle1 : UIView <APBCPostCardComponent>
{
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_contentLabel;
    UIView *_centerHelperView;
    UIButton *_followButton;
    UIImageView *_starcomingMarkImageView;
    id <APBCHeaderViewModelProtocol> _viewModel;
}

+ (double)heightWithViewModel:(id)arg1 maxWidth:(double)arg2;
@property(retain, nonatomic) id <APBCHeaderViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *starcomingMarkImageView; // @synthesize starcomingMarkImageView=_starcomingMarkImageView;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIView *centerHelperView; // @synthesize centerHelperView=_centerHelperView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)updateViewWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateConstraints;
- (void)_initHeaderView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType operation;
@property(readonly) Class superclass;

@end

