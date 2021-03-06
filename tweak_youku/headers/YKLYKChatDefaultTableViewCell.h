//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "YKLYKChatCellProtocol.h"

@class NSString, NSURL, UIColor, UIImageView, YYLabel, YYTextLayout;

@interface YKLYKChatDefaultTableViewCell : UITableViewCell <YKLYKChatCellProtocol>
{
    struct CGRect _currentBounds;
    UIColor *_bgColor;
    YYTextLayout *_nickLayout;
    YYTextLayout *_contentLayout;
    NSURL *_avatarIcon;
    NSURL *_avatar;
    UIImageView *_backgroundImageView;
    UIImageView *_avatarImageView;
    UIImageView *_cornerImageView;
    YYLabel *_contentLabel;
    YYLabel *_nickLabel;
    struct CGSize _backgroundSize;
    struct UIEdgeInsets _padding;
}

+ (double)contentOffsetIfContainAvatar:(_Bool)arg1;
+ (double)heightWithContentHeight:(double)arg1 nickHeight:(double)arg2;
+ (id)nickFont;
+ (id)contentFont;
@property(retain, nonatomic) YYLabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *cornerImageView; // @synthesize cornerImageView=_cornerImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) NSURL *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSURL *avatarIcon; // @synthesize avatarIcon=_avatarIcon;
@property(retain, nonatomic) YYTextLayout *contentLayout; // @synthesize contentLayout=_contentLayout;
@property(retain, nonatomic) YYTextLayout *nickLayout; // @synthesize nickLayout=_nickLayout;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) struct CGSize backgroundSize; // @synthesize backgroundSize=_backgroundSize;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (void)_setupNickLabel;
- (void)_setupContentLabel;
- (void)_setupCornerImageView;
- (void)_setupAvatarImageView;
- (void)_setupBackgroundImageView;
- (void)_layoutWithRect:(struct CGRect)arg1;
- (void)relayout;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

