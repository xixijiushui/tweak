//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class LFAudienceAnchorRankShowItem, UIImageView, UILabel;

@interface LFInteractiveChoseActorCell : UICollectionViewCell
{
    LFAudienceAnchorRankShowItem *_obj;
    UIImageView *_actorHeadImageView;
    UILabel *_actorNameLabel;
    UIImageView *_selectImageView;
}

@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) UILabel *actorNameLabel; // @synthesize actorNameLabel=_actorNameLabel;
@property(retain, nonatomic) UIImageView *actorHeadImageView; // @synthesize actorHeadImageView=_actorHeadImageView;
@property(retain, nonatomic) LFAudienceAnchorRankShowItem *obj; // @synthesize obj=_obj;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

