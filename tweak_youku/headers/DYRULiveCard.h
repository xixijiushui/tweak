//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYRUFeedCard.h"

@class UIImage, YKSRUMark;

@interface DYRULiveCard : DYRUFeedCard
{
    YKSRUMark *_liveIcon;
    UIImage *_liveImg;
    UIImage *_lookIcon;
}

@property(retain, nonatomic) UIImage *lookIcon; // @synthesize lookIcon=_lookIcon;
@property(retain, nonatomic) UIImage *liveImg; // @synthesize liveImg=_liveImg;
@property(retain, nonatomic) YKSRUMark *liveIcon; // @synthesize liveIcon=_liveIcon;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configFeed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

