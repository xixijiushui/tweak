//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKMySubscribeTableViewCell.h"

@class UIImageView, UILabel;

@interface YKMySubscribeRecentUpdateTableViewCell : YKMySubscribeTableViewCell
{
    UIImageView *_redPointImageView;
    UILabel *_unreadNumberLabel;
    UILabel *_updateTimeLabel;
}

@property(retain, nonatomic) UILabel *updateTimeLabel; // @synthesize updateTimeLabel=_updateTimeLabel;
@property(retain, nonatomic) UILabel *unreadNumberLabel; // @synthesize unreadNumberLabel=_unreadNumberLabel;
@property(retain, nonatomic) UIImageView *redPointImageView; // @synthesize redPointImageView=_redPointImageView;
- (void).cxx_destruct;
- (void)configModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
