//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPPostBaseCell.h"

@class APPPostTitleViewModel, YKFRichTextLabel;

@interface APPPostTitleCell : APPPostBaseCell
{
    APPPostTitleViewModel *_titleViewModel;
    YKFRichTextLabel *_postTitleLabel;
}

@property(retain, nonatomic) YKFRichTextLabel *postTitleLabel; // @synthesize postTitleLabel=_postTitleLabel;
@property(retain, nonatomic) APPPostTitleViewModel *titleViewModel; // @synthesize titleViewModel=_titleViewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)bindViewModel:(id)arg1;

@end

