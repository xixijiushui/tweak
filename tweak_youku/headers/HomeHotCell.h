//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CardVideoView, UILabel;

@interface HomeHotCell : UICollectionViewCell
{
    UILabel *_timelineLabel;
    CardVideoView *_cardVideoView;
}

@property(readonly, nonatomic) CardVideoView *cardVideoView; // @synthesize cardVideoView=_cardVideoView;
- (void).cxx_destruct;
- (void)setupWithCardVideo:(id)arg1 showIcon:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
