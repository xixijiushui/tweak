//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFReplyBaseTableViewCell.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface YKFStarReplyHeaderTableViewCell : YKFReplyBaseTableViewCell
{
    _Bool _needRefresh;
    id <YKFStarReplyTableViewCellDelegate> _delegate;
    NSString *_onlineAvatarImageUrl;
    NSString *_headline;
    UIImageView *_avatar;
    UILabel *_onlineLabel;
    UILabel *_headlineLabel;
    UIImageView *_headerMarkImageView;
    UIButton *_refreshButton;
    UILabel *_refreshIcon;
    UILabel *_refreshLabel;
}

@property(retain, nonatomic) UILabel *refreshLabel; // @synthesize refreshLabel=_refreshLabel;
@property(retain, nonatomic) UILabel *refreshIcon; // @synthesize refreshIcon=_refreshIcon;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UIImageView *headerMarkImageView; // @synthesize headerMarkImageView=_headerMarkImageView;
@property(nonatomic) __weak UILabel *headlineLabel; // @synthesize headlineLabel=_headlineLabel;
@property(nonatomic) __weak UILabel *onlineLabel; // @synthesize onlineLabel=_onlineLabel;
@property(nonatomic) __weak UIImageView *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(retain, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(retain, nonatomic) NSString *onlineAvatarImageUrl; // @synthesize onlineAvatarImageUrl=_onlineAvatarImageUrl;
@property(nonatomic) __weak id <YKFStarReplyTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshTouched:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

