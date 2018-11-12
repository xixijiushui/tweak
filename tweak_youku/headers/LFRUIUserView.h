//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LFUIFollowButton, NSLayoutConstraint, NSString, NSURL, UIImageView, UILabel;

@interface LFRUIUserView : UIView
{
    _Bool _followed;
    NSURL *_avatar;
    NSString *_content;
    NSString *_subContent;
    CDUnknownBlockType _tapUserInfoBlock;
    CDUnknownBlockType _followButtonBlock;
    UIImageView *_avatarImage;
    UILabel *_contentLabel;
    UILabel *_subContentLabel;
    LFUIFollowButton *_followButton;
    NSLayoutConstraint *_subContentWidthConstraint;
    NSLayoutConstraint *_contentWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *contentWidthConstraint; // @synthesize contentWidthConstraint=_contentWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subContentWidthConstraint; // @synthesize subContentWidthConstraint=_subContentWidthConstraint;
@property(retain, nonatomic) LFUIFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *subContentLabel; // @synthesize subContentLabel=_subContentLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(copy, nonatomic) CDUnknownBlockType followButtonBlock; // @synthesize followButtonBlock=_followButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType tapUserInfoBlock; // @synthesize tapUserInfoBlock=_tapUserInfoBlock;
@property(nonatomic) _Bool followed; // @synthesize followed=_followed;
@property(retain, nonatomic) NSString *subContent; // @synthesize subContent=_subContent;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSURL *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (void)tapGesture:(id)arg1;
- (void)followButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
