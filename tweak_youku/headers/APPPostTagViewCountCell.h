//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPPostBaseCell.h"

@class UIImageView, UILabel, UIView;

@interface APPPostTagViewCountCell : APPPostBaseCell
{
    UIView *_containerView;
    UILabel *_tagLabel;
    UIImageView *_tagBkgView;
    UIImageView *_excellentView;
    UILabel *_viewCountLabel;
}

+ (double)calculateHeight:(id)arg1;
@property(retain, nonatomic) UILabel *viewCountLabel; // @synthesize viewCountLabel=_viewCountLabel;
@property(retain, nonatomic) UIImageView *excellentView; // @synthesize excellentView=_excellentView;
@property(retain, nonatomic) UIImageView *tagBkgView; // @synthesize tagBkgView=_tagBkgView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)bindViewModel:(id)arg1;
- (void)tapExcellent:(id)arg1;

@end

