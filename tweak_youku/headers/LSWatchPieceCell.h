//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class LSAttributeLabel, UIImageView, UILabel;

@interface LSWatchPieceCell : UITableViewCell
{
    UIImageView *_leftImageView;
    LSAttributeLabel *_titleLabel;
    UILabel *_durationLabel;
    UIImageView *_playIconImageView;
    UIImageView *_statusIconImageView;
}

@property(retain, nonatomic) UIImageView *statusIconImageView; // @synthesize statusIconImageView=_statusIconImageView;
@property(retain, nonatomic) UIImageView *playIconImageView; // @synthesize playIconImageView=_playIconImageView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) LSAttributeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)getMMSSFromSS:(id)arg1;
- (void)refreshByModel:(id)arg1 row:(long long)arg2;
- (id)formatDuration:(long long)arg1;
- (void)setupUI2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
