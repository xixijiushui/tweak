//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "ChannelSliderViewDelegate.h"

@class ChannelSliderView, NSArray, NSString, UILabel;

@interface ChannelVideoCutCell : UITableViewCell <ChannelSliderViewDelegate>
{
    id <ChannelVideoCutCellDelegate> _delegate;
    ChannelSliderView *_sliderView;
    NSArray *_cardVideos;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *cardVideos; // @synthesize cardVideos=_cardVideos;
@property(retain, nonatomic) ChannelSliderView *sliderView; // @synthesize sliderView=_sliderView;
@property(nonatomic) __weak id <ChannelVideoCutCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sliderView:(id)arg1 didSlideToPageAtIndex:(long long)arg2 containerView:(id)arg3;
- (void)sliderView:(id)arg1 willRefreshPageAtIndex:(long long)arg2 containerView:(id)arg3 containerIndex:(unsigned long long)arg4;
- (long long)numberOfPagesInSliderView:(id)arg1;
- (void)playVideo;
- (void)setupWithVideos:(id)arg1;
- (void)layoutSubviews;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

