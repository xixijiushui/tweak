//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface HYRecommendAccountTableViewCell : UITableViewCell
{
    _Bool _isSelectState;
    UIView *_containerView;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIImageView *_vipIconView;
    UILabel *_accountLabel;
    UILabel *_vipDateLabel;
}

@property(nonatomic) _Bool isSelectState; // @synthesize isSelectState=_isSelectState;
@property(nonatomic) __weak UILabel *vipDateLabel; // @synthesize vipDateLabel=_vipDateLabel;
@property(nonatomic) __weak UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(nonatomic) __weak UIImageView *vipIconView; // @synthesize vipIconView=_vipIconView;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)updateSelectedState:(_Bool)arg1;
- (void)updateWithCellModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
