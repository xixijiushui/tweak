//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYRUFeedCard.h"

@class UIImage, YKSRUMark;

@interface DYRUArticleCard : DYRUFeedCard
{
    YKSRUMark *_articleIcon;
    UIImage *_image;
    UIImage *_lookImage;
}

@property(retain, nonatomic) UIImage *lookImage; // @synthesize lookImage=_lookImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) YKSRUMark *articleIcon; // @synthesize articleIcon=_articleIcon;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configFeed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
