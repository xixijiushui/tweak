//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSLayoutConstraint, UIButton, UILabel;

@interface ICBrowseAttachmentsHeaderView : UICollectionReusableView
{
    short _attachmentSection;
    UILabel *_sectionLabel;
    NSLayoutConstraint *_sectionLabelLeadingConstraint;
    UIButton *_seeAllButton;
    NSLayoutConstraint *_seeAllButtonTrailingConstraint;
    id <ICBrowseAttachmentsHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ICBrowseAttachmentsHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) short attachmentSection; // @synthesize attachmentSection=_attachmentSection;
@property(nonatomic) __weak NSLayoutConstraint *seeAllButtonTrailingConstraint; // @synthesize seeAllButtonTrailingConstraint=_seeAllButtonTrailingConstraint;
@property(nonatomic) __weak UIButton *seeAllButton; // @synthesize seeAllButton=_seeAllButton;
@property(nonatomic) __weak NSLayoutConstraint *sectionLabelLeadingConstraint; // @synthesize sectionLabelLeadingConstraint=_sectionLabelLeadingConstraint;
@property(nonatomic) __weak UILabel *sectionLabel; // @synthesize sectionLabel=_sectionLabel;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange;
- (void)seeAll:(id)arg1;

@end

