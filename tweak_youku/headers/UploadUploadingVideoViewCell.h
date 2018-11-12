//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel, UploadUploadingVideoViewCellView;

@interface UploadUploadingVideoViewCell : UITableViewCell
{
    _Bool _showBlockedReasonWhenStateIsNormal;
    id _object;
    CDUnknownBlockType _OnMoreButtonClick;
    CDUnknownBlockType _OnHotCommunityTextClick;
    UIButton *_moreButton;
    UILabel *_videoTitleLabel;
    UploadUploadingVideoViewCellView *_uploadCellView;
}

+ (double)height;
@property(retain, nonatomic) UploadUploadingVideoViewCellView *uploadCellView; // @synthesize uploadCellView=_uploadCellView;
@property(retain, nonatomic) UILabel *videoTitleLabel; // @synthesize videoTitleLabel=_videoTitleLabel;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(copy, nonatomic) CDUnknownBlockType OnHotCommunityTextClick; // @synthesize OnHotCommunityTextClick=_OnHotCommunityTextClick;
@property(copy, nonatomic) CDUnknownBlockType OnMoreButtonClick; // @synthesize OnMoreButtonClick=_OnMoreButtonClick;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) _Bool showBlockedReasonWhenStateIsNormal; // @synthesize showBlockedReasonWhenStateIsNormal=_showBlockedReasonWhenStateIsNormal;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)tappableLabel:(id)arg1 tappedAtIndex:(long long)arg2 withAttributes:(id)arg3;
- (id)stringTostring:(id)arg1;
- (void)setExpectPublishTime:(id)arg1;
- (void)configCell:(id)arg1;
- (void)moreButtonClick:(id)arg1;
- (void)setNeedsDisplay;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

